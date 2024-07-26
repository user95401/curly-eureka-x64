# curly-eureka-x64

IS A TRY TO PORT x32 SDK TO x64 FOR GEOMETRY DASH 2.206 AND UP.

#### NOW SLOWLY DEVELOPING

current features
- mod layers and stuff via node setup helper
```cpp
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call != DLL_PROCESS_ATTACH) return TRUE;
    REGISTER_NODE_INIT(RewardsPage, [](RewardsPage* self)
        {
            self->m_mainLayer->addChild(CCLabelBMFont::create("BRUHaaahahah\nwat?", "goldFont.fnt"), 10, 724);
            auto label = dynamic_cast<CCLabelBMFont*>(self->m_mainLayer->getChildByTag(724));
            label ? label->setPosition(self->m_mainLayer->getContentSize() / 2) : void();
        };
    );
    REGISTER_NODE_UPDATE(RewardsPage, [](RewardsPage* self)
        {
            auto label = dynamic_cast<CCLabelBMFont*>(self->m_mainLayer->getChildByTag(724));
            label ? label->setRotation(label->getRotation() + 0.1f) : void();
        };
    );
    return TRUE;
}
```
- hooking also works
```cpp
class MenuLayerExt : public MenuLayer {
public:
    static inline bool init(MenuLayerExt* __this) {
        auto rtn = MappedHooks::getOriginal(init)(__this);
        twoTimesBoolCallEscapeByParrentNode(__this);
        __this->customSetup();
        return rtn;
    }
    void customSetup() {
        addChild(CCSprite::create("dialogIcon_052.png"), 10, 567210);
        getChildByTag(567210)->setPosition(getContentSize() / 2);
    }
};

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call != DLL_PROCESS_ATTACH) return TRUE;
    MH_Initialize();
    MappedHooks::registerHook(base + 0x3130f0, MenuLayerExt::init);
    return TRUE;
}
```

![image](https://github.com/user-attachments/assets/b1394628-aef3-4feb-a6ed-179cba613a20)

![image](https://github.com/user-attachments/assets/5bde69e5-6e1f-494c-aab5-500f929356e1)

