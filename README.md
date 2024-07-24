# curly-eureka-64

IS A TRY TO PORT 32x SDK TO 64x FOR GEOMETRY DASH 2.206 AND UP.

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
- maybe hooking also works idk
