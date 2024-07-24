#pragma once
#include <Windows.h>
#include <MinHook.h>
#include <patterns.hpp>

const char* ShowThatModUsesCE = "Made with curly-eureka by user95401. :>";

namespace HooksUtils {
    inline bool DontSendLogs;
    template <typename Address>
    inline MH_STATUS CreateHook(Address target, LPVOID hook, LPVOID* original) {
        //MH_CreateHook
        MH_STATUS hook_status = MH_CreateHook(reinterpret_cast<LPVOID>(target), hook, original);
        //for logging
        std::string sbaserva = ModUtils::toHex((int)target - (int)GetModuleHandleA(0));
        if (target < GetModuleHandleA(0)) sbaserva = "NA - CANT BE IN MODULE";
        std::string starg = ModUtils::toHex((int)target);
        std::string smhstatus = MH_StatusToString(hook_status);
        //logit
        if (!HooksUtils::DontSendLogs) {
            ModUtils::log(std::format(
                "creating hook at {} (base rva: {}) => {}",
                starg, sbaserva, smhstatus
            ), false);
        }
        //msg box if somth wrong
        if (hook_status != MH_STATUS::MH_OK) {
            std::string Caption = (ModUtils::GetModName() + " - " + __FUNCTION__).c_str();
            std::string Msg = std::format(
                "Something went wrong when attempting to hook function\n"
                "at {} (base rva: {}),\n"
                "in {} mod by {}.\n"
                "MH Status: {}.",
                starg, sbaserva,
                ModUtils::GetModName(), ModUtils::GetModDev(),
                smhstatus
            );
            ModUtils::ShowSafeMessageBox(Caption, Msg, MB_ICONERROR | MB_OK | MB_TASKMODAL | MB_SETFOREGROUND);
            return hook_status;
        }
        //return status
        return MH_EnableHook(target);
    };
};

/*
	HOOK(base + 0x1907B0, MenuLayer_init); //MenuLayer_init as org, MenuLayer_init_H as hook
*/
#define HOOK(target, name) HooksUtils::CreateHook(target, reinterpret_cast<LPVOID*>(name##_H), reinterpret_cast<LPVOID*>(&name))
/*for libcocos2d.dll funcs hooking
example:
CC_HOOK("?create@CCSprite@cocos2d@@SAPAV12@PBD@Z", CCSprite_create, false);
*/
#define CC_HOOK(symbol, name) HooksUtils::CreateHook(GetProcAddress(GetModuleHandle("libcocos2d.dll"), symbol), reinterpret_cast<LPVOID*>(name##_H), reinterpret_cast<LPVOID*>(&name))
/*for libExtensions.dll funcs hooking*/
#define CCEXT_HOOK(symbol, name) HooksUtils::CreateHook(GetProcAddress(GetModuleHandle("libExtensions.dll"), symbol), reinterpret_cast<LPVOID*>(name##_H), reinterpret_cast<LPVOID*>(&name))
/*hook::dontSendLogs*/
#define DISABLE_HOOKS_LOGGING() HooksUtils::DontSendLogs = true

#define MEMBERBYOFFSET(type, class, offset) *reinterpret_cast<type*>(reinterpret_cast<uintptr_t>(class) + offset)
#define MBO(type, class, offset) *reinterpret_cast<type*>(reinterpret_cast<uintptr_t>(class) + offset)

/*
* OBM(&GJAccountManager::m_accountID)
* ModUtils::copyToClipboard(std::format(
*   "m_username {},\n"
*   "m_accountID {},\n"
*   "m_gjp2 {},\n",
*   OBM(&GJAccountManager::m_username),
*   OBM(&GJAccountManager::m_accountID),
*   OBM(&GJAccountManager::m_gjp2)
* ).c_str());
*/
template<typename T, typename U> constexpr size_t OFFSETBYMEMBER(U T::* member){    return (char*)&((T*)nullptr->*member) - (char*)nullptr;}
/*
* OBM(&GJAccountManager::m_accountID)
* ModUtils::copyToClipboard(std::format(
*   "m_username {},\n"
*   "m_accountID {},\n"
*   "m_gjp2 {},\n",
*   OBM(&GJAccountManager::m_username),
*   OBM(&GJAccountManager::m_accountID),
*   OBM(&GJAccountManager::m_gjp2)
* ).c_str());
*/
#define OBM(member) OFFSETBYMEMBER(member)

#include <string>
#include <cstdlib>
#include <cstdint>
#include <unordered_map>
#include <type_traits> 
namespace MappedHooks {
    inline auto btw = "MappedHooks created by Cvolton";
    using std::uintptr_t;
    inline std::unordered_map<void*, void*> hooks;
    template <typename Address>
    inline auto registerHook(Address address, void* hook) {
        void* trampoline;
        auto status = HooksUtils::CreateHook((void*)address, hook, &trampoline);
        if (status == MH_OK) MappedHooks::hooks[hook] = trampoline;
        return status;
    }
    template <typename F>
    inline auto getOriginal(F self) {
        return reinterpret_cast<F>(MappedHooks::hooks[self]);
    }
}

#include <cocos2d.h>
#include <ModUtils.hpp>
// see REGISTER_NODE_SETUP_START macro, REGISTER_NODE_UPDATE_START, REGISTER_NODE_END
namespace NodeSetupHelper {
    inline bool bInitialized = false;
    class Entry {
    public:
        int mID = 0;
        bool mOnce = false;
        std::function<void(cocos2d::CCNode*)> mFunc;
    };
    inline std::vector<Entry*> vEntries;
    inline void __fastcall NodeSetupHelperCCNodeVisitHook(cocos2d::CCNode* self) {
        MappedHooks::getOriginal(NodeSetupHelperCCNodeVisitHook)(self);
        for (auto aEntry : vEntries) {
            if (aEntry->mOnce) {
                auto NodeSetupHelperCompName = std::format("NodeSetupHelper-{}", aEntry->mID);
                auto NodeSetupHelperComp = self->getComponent(NodeSetupHelperCompName.data());
                if (!NodeSetupHelperComp) {
                    auto asd = cocos2d::CCComponent::create();// ::setTag();
                    asd->setName(NodeSetupHelperCompName.data());
                    self->addComponent(asd);
                    aEntry->mFunc(self);
                }
            }
            else aEntry->mFunc(self);
        }
    }
    inline void Initialize() {
        if (bInitialized) return;
        else bInitialized = true;
        MH_Initialize();
        MappedHooks::registerHook(
            GetProcAddress(
                LoadLibrary("libcocos2d.dll"),
                "?visit@CCNode@cocos2d@@UEAAXXZ"
            ),
            NodeSetupHelperCCNodeVisitHook
        );
    }
    inline Entry* RegisterUpdate(std::function<void(cocos2d::CCNode*)> functionToCall) {
        Initialize();
        auto aEntry = new Entry;
        //functionToCall
        aEntry->mFunc = functionToCall;
        //id
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist6(1, 9999); // distribution in range [1, 6]
        aEntry->mID = dist6(rng);
        //pb
        vEntries.push_back(aEntry);
        return aEntry;
    }
    inline Entry* RegisterInit(std::function<void(cocos2d::CCNode*)> functionToCall) {
        Initialize();
        auto aEntry = new Entry;
        //functionToCall
        aEntry->mFunc = functionToCall;
        //id
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist6(1, 9999); // distribution in range [1, 6]
        aEntry->mID = dist6(rng);
        //once
        aEntry->mOnce = true;
        //pb
        vEntries.push_back(aEntry);
        return aEntry;
    }
};

#define REGISTER_NODE_INIT(TarType, ...)                                \
NodeSetupHelper::RegisterInit(                                          \
    [](CCNode* node) {                                                  \
        if (auto casted = dynamic_cast<TarType*>(node)) {               \
            auto lmb = __VA_ARGS__;                                     \
            lmb(casted);                                                \
        }                                                               \
    }                                                                   \
);

#define REGISTER_NODE_UPDATE(TarType, ...)                              \
NodeSetupHelper::RegisterUpdate(                                        \
    [](CCNode* node) {                                                  \
        if (auto casted = dynamic_cast<TarType*>(node)) {               \
            auto lmb = __VA_ARGS__;                                     \
            lmb(casted);                                                \
        }                                                               \
    }                                                                   \
);