#pragma once

#include <gd.h>

//layers

class FLAlertLayer : public cocos2d::CCLayerColor {
public:
	FLAlertLayer() { // ios 0xa7ec : this seems too small?
		m_buttonMenu = nullptr;
		m_controlConnected = -1;
		m_mainLayer = nullptr;
		m_ZOrder = 0;
		m_noElasticity = false;
		m_reverseKeyBack = false;
		m_scene = nullptr;
		m_alertProtocol = nullptr;
		m_scrollingLayer = nullptr;
		m_button2 = nullptr;
		m_button1 = nullptr;
		m_joystickConnected = -1;
		m_containsBorder = 0;
		m_forcePrioRegistered = false;
	}

	static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale) {
		return r_cast(FLAlertLayer*, __thiscall*,
			(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float, float),
			(delegate, title, desc, btn1, btn2, width, scroll, height, textScale),
			base + 0x50ac0
		);
	};// = win 0x50ac0, m1 0x4083e8, imac 0x4a4da0, ios 0x2bbef8;
	static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width) {
		return r_cast(FLAlertLayer*, __thiscall*,
			(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float),
			(delegate, title, desc, btn1, btn2, width),
			base + 0x50a10
		);
	};// = win 0x50a10, m1 0x4085d8, imac 0x4a4fd0, ios 0x2bc020;
	static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2) {
		return FLAlertLayer::create(delegate, title, desc, btn1, btn2, 300.0);
	}

	static FLAlertLayer* create(char const* title, const std::string& desc, char const* btn) {
		return FLAlertLayer::create(nullptr, title, desc, btn, nullptr, 300.0);
	}

	void incrementForcePrio();// = ios 0x2bcb0c, m1 0x409224, imac 0x4a5d10;
	bool init(FLAlertLayerProtocol*p0, char const*p1, std::string p2, char const*r3, char const*r4, float g4, bool ds, float gg, float sdf) {
		return r_cast(bool, __thiscall*, 
			(FLAlertLayer*, FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float, float),
			(this, p0, p1, p2, r3, r4, g4, ds, gg, sdf),
			base + 0x50ce0
		);
	};// = win 0x50ce0, imac 0x4a50e0, m1 0x4086f8, ios 0x2bc0e8;
	bool init(int a) {
		return r_cast(bool, __thiscall*, (FLAlertLayer*, int), (this, a), base + 0x50bd0);
	};// = win 0x50bd0, imac 0x4a5c40, m1 0x409150, ios 0x2bca5c;
	void onBtn1(cocos2d::CCObject* sender) {
		r_cast(void, __thiscall*, (FLAlertLayer*, cocos2d::CCObject*), (this, sender), base + 0x51ac0);
	};// = win 0x51ac0, imac 0x4a5d60, ios 0x2bcb5c, m1 0x409274;
	void onBtn2(cocos2d::CCObject* sender) {
		r_cast(void, __thiscall*, (FLAlertLayer*, cocos2d::CCObject*), (this, sender), base + 0x51b20);
	};// = win 0x51b20, imac 0x4a5dc0, ios 0x2bcbbc, m1 0x4092d4;

	// virtual void onEnter(); // only exists on armv7...
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);// = win 0x51b80, m1 0x4094f8, imac 0x4a5ff0, ios 0x2bccb0;
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);// = win 0x51cd0, m1 0x4097a8, imac 0x4a6230, ios 0x2bcea0;
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);// = win 0x51c20, m1 0x409658, imac 0x4a6110, ios 0x2bcd68;
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);// = win 0x51c90, m1 0x409718, imac 0x4a61b0, ios 0x2bce28;
	virtual void registerWithTouchDispatcher();// = win 0x51ee0, m1 0x4099dc, imac 0x4a6460, ios 0x2bd0a0;
	virtual void keyBackClicked();// = win 0x51a00, m1 0x4093d0, imac 0x4a5ed0, ios 0x2bcc4c;
	virtual void keyDown(cocos2d::enumKeyCodes);// = win 0x51980, m1 0x409334, imac 0x4a5e20, ios 0x2bcc1c;
	virtual void show() {
		r_cast(void, __thiscall*, (FLAlertLayer*), (this), base + 0x51d10);
	};// = win 0x51d10, m1 0x409838, imac 0x4a62b0, ios 0x2bcf18;

	cocos2d::CCMenu* m_buttonMenu;
	FLAlertLayerProtocol* m_alertProtocol;
	cocos2d::CCNode* m_scene;
	bool m_reverseKeyBack;
	cocos2d::ccColor3B m_color;
	cocos2d::CCLayer* m_mainLayer;
	int m_ZOrder;
	bool m_noElasticity;
	cocos2d::ccColor3B m_color2;
	ButtonSprite* m_button1;
	ButtonSprite* m_button2;
	ScrollingLayer* m_scrollingLayer;
	int m_controlConnected;
	bool m_containsBorder;
	bool m_noAction;
	int m_joystickConnected;
	bool m_forcePrioRegistered;
};

class GJDropDownLayer : public cocos2d::CCLayerColor {
public:
	void showLayer(bool bb) {
		r_cast(void, __thiscall*, (GJDropDownLayer*, bool), (this, bb), base + 0x2459d0);
	};// = win 0x2459d0, m1 0x51a3d8, imac 0x5f1e30;
	void hideLayer(bool bb) {
		r_cast(void, __thiscall*, (GJDropDownLayer*, bool), (this, bb), base + 0x245b20);
	};
	cocos2d::CCPoint m_endPosition;
	cocos2d::CCPoint m_startPosition;
	cocos2d::CCMenu* m_buttonMenu;
	GJListLayer* m_listLayer;
	cocos2d::CCLayer* m_mainLayer;
	bool m_closeOnHide;
	GJDropDownLayerDelegate* m_delegate;
	bool m_fastMenu;
};

class AccountHelpLayer : public cocos2d::CCLayer {};
class AccountLayer : public cocos2d::CCLayer {};
class AccountLoginLayer : public cocos2d::CCLayer {};
class AccountRegisterLayer : public cocos2d::CCLayer {};
class AchievementsLayer : public cocos2d::CCLayer {};
class AudioEffectsLayer : public cocos2d::CCLayer {};
class BoomListLayer : public cocos2d::CCLayer {};
class BoomScrollLayer : public cocos2d::CCLayer {};
class BrowseSmartTemplateLayer : public cocos2d::CCLayer {};
class BrowseSmartKeyLayer : public cocos2d::CCLayer {};
class CCBlockLayer : public cocos2d::CCLayer {};
class CCContentLayer : public cocos2d::CCLayer {};
class CreateGuidelinesLayer : public cocos2d::CCLayer {};
class CreatorLayer : public cocos2d::CCLayer {};
class CurrencyRewardLayer : public cocos2d::CCLayer {};
class CustomizeObjectLayer : public cocos2d::CCLayer {};
class CustomSongLayer : public cocos2d::CCLayer {};
class DemonFilterSelectLayer : public cocos2d::CCLayer {};
class DialogLayer : public cocos2d::CCLayer {};
class DrawGridLayer : public cocos2d::CCLayer {};
class EditLevelLayer : public cocos2d::CCLayer {};
class GJOptionsLayer : public cocos2d::CCLayer {};
class EditorOptionsLayer : public cocos2d::CCLayer {};
class EditorPauseLayer : public cocos2d::CCLayer {};
class EndLevelLayer : public cocos2d::CCLayer {};
class ExtendedLayer : public cocos2d::CCLayer {};
class FindBPMLayer : public cocos2d::CCLayer {};
class GameLevelOptionsLayer : public cocos2d::CCLayer {};
class GameOptionsLayer : public cocos2d::CCLayer {};
class GauntletLayer : public cocos2d::CCLayer {};
class GauntletSelectLayer : public cocos2d::CCLayer {};
class GJAccountSettingsLayer : public cocos2d::CCLayer {};
class GJBaseGameLayer : public cocos2d::CCLayer {};
class GJColorSetupLayer : public cocos2d::CCLayer {};
class GJCommentListLayer : public cocos2d::CCLayer {};
class GJGroundLayer : public cocos2d::CCLayer {};
class GJFlyGroundLayer : public cocos2d::CCLayer {};
class GJFollowCommandLayer : public cocos2d::CCLayer {};
class GJGameLoadingLayer : public cocos2d::CCLayer {};
class GJGarageLayer : public cocos2d::CCLayer {};
class GJGradientLayer : public cocos2d::CCLayer {};
class GJListLayer : public cocos2d::CCLayer {};
class GJMGLayer : public cocos2d::CCLayer {};
class GJMoreGamesLayer : public cocos2d::CCLayer {};
class GJPathsLayer : public cocos2d::CCLayer {};
class GJPFollowCommandLayer : public cocos2d::CCLayer {};
class GJRotateCommandLayer : public cocos2d::CCLayer {};
class GJShopLayer : public cocos2d::CCLayer {};
class GraphicsReloadLayer : public cocos2d::CCLayer {};
class InfoLayer : public FLAlertLayer {};
class KeybindingsLayer : public cocos2d::CCLayer {};
class LeaderboardsLayer : public cocos2d::CCLayer {};
class LevelAreaInnerLayer : public cocos2d::CCLayer {};
class LevelAreaLayer : public cocos2d::CCLayer {};
class LevelBrowserLayer : public cocos2d::CCLayer {};
class LevelEditorLayer : public cocos2d::CCLayer {};
class LevelFeatureLayer : public cocos2d::CCLayer {};
class LevelInfoLayer : public cocos2d::CCLayer {};
class LevelListLayer : public cocos2d::CCLayer {};
class LevelOptionsLayer : public cocos2d::CCLayer {};
class LevelOptionsLayer2 : public cocos2d::CCLayer {};
class LevelSearchLayer : public cocos2d::CCLayer {};
class LevelSelectLayer : public cocos2d::CCLayer {};
class LevelSettingsLayer : public cocos2d::CCLayer {};
class LikeItemLayer : public cocos2d::CCLayer {};
class LoadingLayer : public cocos2d::CCLayer {};
class MapSelectLayer : public cocos2d::CCLayer {};
class MenuGameLayer : public cocos2d::CCLayer {};
class MenuLayer : public cocos2d::CCLayer {};
class MoreOptionsLayer : public cocos2d::CCLayer {};
class MoreSearchLayer : public cocos2d::CCLayer {};
class MoreVideoOptionsLayer : public cocos2d::CCLayer {};
class MPLobbyLayer : public cocos2d::CCLayer {};
class MultiplayerLayer : public cocos2d::CCLayer {};
class NewgroundsInfoLayer : public cocos2d::CCLayer {};
class NumberInputLayer : public cocos2d::CCLayer {};
class OptionsLayer : public cocos2d::CCLayer {};
class OptionsObject;
class OptionsScrollLayer : public cocos2d::CCLayer {};
class ParentalOptionsLayer : public cocos2d::CCLayer {};
class ParticlePreviewLayer : public cocos2d::CCLayer {};
class PauseLayer : public cocos2d::CCLayer {};
class PlayLayer : public GJBaseGameLayer {};
class RateDemonLayer : public cocos2d::CCLayer {};
class RateLevelLayer : public cocos2d::CCLayer {};
class RateStarsLayer : public cocos2d::CCLayer {};
class RetryLevelLayer : public cocos2d::CCLayer {};
class RewardUnlockLayer : public cocos2d::CCLayer {};
class ScrollingLayer : public cocos2d::CCLayer {};
class SecretLayer : public cocos2d::CCLayer {};
class SecretLayer2 : public cocos2d::CCLayer {};
class SecretLayer3 : public cocos2d::CCLayer {};
class SecretLayer4 : public cocos2d::CCLayer {};
class SecretNumberLayer : public cocos2d::CCLayer {};
class SecretRewardsLayer : public cocos2d::CCLayer {};
class SelectArtLayer : public cocos2d::CCLayer {};
class SelectEventLayer : public cocos2d::CCLayer {};
class SelectFontLayer : public cocos2d::CCLayer {};
class SelectListIconLayer : public cocos2d::CCLayer {};
class SelectPremadeLayer : public cocos2d::CCLayer {};
class SelectSettingLayer : public cocos2d::CCLayer {};
class SelectSFXSortLayer : public cocos2d::CCLayer {};
class SetGroupIDLayer : public cocos2d::CCLayer {};
class SetItemIDLayer : public cocos2d::CCLayer {};
class SetTargetIDLayer : public cocos2d::CCLayer {};
class ShaderLayer : public cocos2d::CCLayer {};
class ShareCommentLayer : public cocos2d::CCLayer {};
class ShareLevelLayer : public cocos2d::CCLayer {};
class ShareLevelSettingsLayer : public cocos2d::CCLayer {};
class ShareListLayer : public cocos2d::CCLayer {};
class SlideInLayer : public cocos2d::CCLayer {};
class SongInfoLayer : public cocos2d::CCLayer {};
class SongOptionsLayer : public cocos2d::CCLayer {};
class SongsLayer : public cocos2d::CCLayer {};
class StatsLayer : public cocos2d::CCLayer {};
class SupportLayer : public cocos2d::CCLayer {};
class TopArtistsLayer : public cocos2d::CCLayer {};
class TutorialLayer : public cocos2d::CCLayer {};
class UILayer : public cocos2d::CCLayer {};
class UIOptionsLayer : public cocos2d::CCLayer {};
class UISaveLoadLayer : public cocos2d::CCLayer {};
class URLViewLayer : public cocos2d::CCLayer {};
class VideoOptionsLayer : public cocos2d::CCLayer {};
class WorldSelectLayer : public cocos2d::CCLayer {};

class CollisionBlockPopup : public FLAlertLayer {};
class SetupTriggerPopup : public FLAlertLayer {};
class ColorSelectPopup : public FLAlertLayer {};
class ConfigureValuePopup : public FLAlertLayer {};
class CreateParticlePopup : public FLAlertLayer {};
class CustomizeObjectSettingsPopup : public FLAlertLayer {};
class EditGameObjectPopup : public FLAlertLayer {};
class EditTriggersPopup : public FLAlertLayer {};
class SetIDPopup : public FLAlertLayer {};
class FindObjectPopup : public FLAlertLayer {};
class FriendRequestPopup : public FLAlertLayer {};
class GJMessagePopup : public FLAlertLayer {};
class GJPathRewardPopup : public FLAlertLayer {};
class GJPromoPopup : public FLAlertLayer {};
class GJWriteMessagePopup : public FLAlertLayer {};
class HSVWidgetPopup : public FLAlertLayer {};
class ItemInfoPopup : public FLAlertLayer {};
class MultiTriggerPopup : public FLAlertLayer {};
class PurchaseItemPopup : public FLAlertLayer {};
class SetTextPopup : public FLAlertLayer {};
class SearchSFXPopup : public FLAlertLayer {};
class SetColorIDPopup : public FLAlertLayer {};
class SetFolderPopup : public FLAlertLayer {};
class SetLevelOrderPopup : public FLAlertLayer {};
class SetupAdvFollowEditPhysicsPopup : public FLAlertLayer {};
class SetupAdvFollowPopup : public FLAlertLayer {};
class SetupAdvFollowRetargetPopup : public FLAlertLayer {};
class SetupAnimationPopup : public FLAlertLayer {};
class SetupAnimSettingsPopup : public FLAlertLayer {};
class SetupAreaMoveTriggerPopup : public FLAlertLayer {};
class SetupAreaTintTriggerPopup : public FLAlertLayer {};
class SetupAreaAnimTriggerPopup : public FLAlertLayer {};
class SetupAreaFadeTriggerPopup : public FLAlertLayer {};
class SetupAreaRotateTriggerPopup : public FLAlertLayer {};
class SetupAreaTransformTriggerPopup : public FLAlertLayer {};
class SetupAreaTriggerPopup : public FLAlertLayer {};
class SetupArtSwitchPopup : public FLAlertLayer {};
class SetupAudioLineGuidePopup : public FLAlertLayer {};
class SetupAudioTriggerPopup : public FLAlertLayer {};
class SetupBGSpeedTrigger : public FLAlertLayer {};
class SetupCameraEdgePopup : public FLAlertLayer {};
class SetupCameraGuidePopup : public FLAlertLayer {};
class SetupCameraModePopup : public FLAlertLayer {};
class SetupCameraOffsetTrigger : public FLAlertLayer {};
class SetupCameraRotatePopup : public FLAlertLayer {};
class SetupCameraRotatePopup2 : public FLAlertLayer {};
class SetupCheckpointPopup : public FLAlertLayer {};
class SetupCoinLayer : public FLAlertLayer {};
class SetupInstantCollisionTriggerPopup : public FLAlertLayer {};
class SetupCollisionStateTriggerPopup : public FLAlertLayer {};
class SetupCollisionTriggerPopup : public FLAlertLayer {};
class SetupCountTriggerPopup : public FLAlertLayer {};
class SetupDashRingPopup : public FLAlertLayer {};
class SetupEndPopup : public FLAlertLayer {};
class SetupEnterEffectPopup : public FLAlertLayer {};
class SetupEnterTriggerPopup : public FLAlertLayer {};
class SetupEventLinkPopup : public FLAlertLayer {};
class SetupForceBlockPopup : public FLAlertLayer {};
class SetupGameplayOffsetPopup : public FLAlertLayer {};
class SetupGradientPopup : public FLAlertLayer {};
class SetupGravityModPopup : public FLAlertLayer {};
class SetupGravityTriggerPopup : public FLAlertLayer {};
class SetupInstantCountPopup : public FLAlertLayer {};
class SetupInteractObjectPopup : public FLAlertLayer {};
class SetupItemCompareTriggerPopup : public FLAlertLayer {};
class SetupItemEditTriggerPopup : public FLAlertLayer {};
class SetupKeyframeAnimPopup : public FLAlertLayer {};
class SetupKeyframePopup : public FLAlertLayer {};
class SetupMGTrigger : public FLAlertLayer {};
class SetupMoveCommandPopup : public FLAlertLayer {};
class SetupObjectControlPopup : public FLAlertLayer {};
class SetupObjectOptions2Popup : public FLAlertLayer {};
class SetupObjectOptionsPopup : public FLAlertLayer {};
class SetupObjectTogglePopup : public FLAlertLayer {};
class SetupOpacityPopup : public FLAlertLayer {};
class SetupOptionsTriggerPopup : public FLAlertLayer {};
class SetupPersistentItemTriggerPopup : public FLAlertLayer {};
class SetupPickupTriggerPopup : public FLAlertLayer {};
class SetupPlatformerEndPopup : public FLAlertLayer {};
class SetupPlayerControlPopup : public FLAlertLayer {};
class SetupPortalPopup : public FLAlertLayer {};
class SetupPulsePopup : public FLAlertLayer {};
class SetupRandAdvTriggerPopup : public FLAlertLayer {};
class SetupRandTriggerPopup : public FLAlertLayer {};
class SetupResetTriggerPopup : public FLAlertLayer {};
class SetupReverbPopup : public FLAlertLayer {};
class SetupRotateCommandPopup : public FLAlertLayer {};
class SetupRotateGameplayPopup : public FLAlertLayer {};
class SetupRotatePopup : public FLAlertLayer {};
class SetupSequenceTriggerPopup : public FLAlertLayer {};
class SetupSFXEditPopup : public FLAlertLayer {};
class SFXBrowserDelegate : public FLAlertLayer {};
class SetupSFXPopup : public FLAlertLayer {};
class SetupShaderEffectPopup : public FLAlertLayer {};
class SetupShakePopup : public FLAlertLayer {};
class SetupSmartBlockLayer : public FLAlertLayer {};
class SetupSmartTemplateLayer : public FLAlertLayer {};
class SongPlaybackDelegate : public FLAlertLayer {};
class SetupSongTriggerPopup : public FLAlertLayer {};
class SetupSpawnParticlePopup : public FLAlertLayer {};
class SetupSpawnPopup : public FLAlertLayer {};
class SetupStaticCameraPopup : public FLAlertLayer {};
class SetupStopTriggerPopup : public FLAlertLayer {};
class SetupTeleportPopup : public FLAlertLayer {};
class SetupTimerControlTriggerPopup : public FLAlertLayer {};
class SetupTimerEventTriggerPopup : public FLAlertLayer {};
class SetupTimerTriggerPopup : public FLAlertLayer {};
class SetupTimeWarpPopup : public FLAlertLayer {};
class SetupTouchTogglePopup : public FLAlertLayer {};
class SetupTransformPopup : public FLAlertLayer {};
class SetupZoomTriggerPopup : public FLAlertLayer {};
class TextAlertPopup : public FLAlertLayer {};
class TOSPopup : public FLAlertLayer {};
class TutorialPopup : public FLAlertLayer {};
class UIObjectSettingsPopup : public FLAlertLayer {};
class UpdateAccountSettingsPopup : public FLAlertLayer {};
class UploadActionPopup : public FLAlertLayer {};
class UploadListPopup : public FLAlertLayer {};
class UploadPopup : public FLAlertLayer {};


class ChallengesPage : public FLAlertLayer {};
class CharacterColorPage : public FLAlertLayer {};
class CommunityCreditsPage : public FLAlertLayer {};
class DailyLevelPage : public FLAlertLayer {};
class FollowRewardPage : public FLAlertLayer {};
class FRequestProfilePage : public FLAlertLayer {};
class FriendsProfilePage : public FLAlertLayer {};
class GJPathPage : public FLAlertLayer {};
class LevelPage : public FLAlertLayer {};
class ListButtonPage : public FLAlertLayer {};
class MessagesProfilePage : public FLAlertLayer {};
class ProfilePage : public FLAlertLayer {};
class RewardsPage : public FLAlertLayer {};
class ShardsPage : public FLAlertLayer {};
class WorldLevelPage : public FLAlertLayer {};
