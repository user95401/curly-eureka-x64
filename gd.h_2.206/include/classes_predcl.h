#pragma once

//predcl
#if 1
class PlayerButtonCommand;
class FMODSound;
class AdvancedFollowInstance;
class SFXTriggerInstance;
class EventTriggerInstance;
class SongChannelState;
class ChanceObject;
class GameObjectPhysics;
class DynamicObjectAction;
class GJTransformState;
class CAState;
class GJPointDouble;
class GJDropDownLayer;
class GJAccountDelegate;
class FLAlertLayerProtocol;
class AccountHelpLayer;
class GJAccountBackupDelegate;
class GJAccountSyncDelegate;
class AccountLayer;
class FLAlertLayer;
class TextInputDelegate;
class GJAccountLoginDelegate;
class AccountLoginLayer;
class GJAccountRegisterDelegate;
class AccountRegisterLayer;
class AchievementBar;
class CCIndexPath;
class TableViewCell;
class AchievementCell;
class AchievementManager;
class AchievementNotifier;
class AchievementsLayer;
class AdToolbox;
class CCSpritePlus;
class GameObject;
class EnhancedGameObject;
class EffectGameObject;
class AdvancedFollowTriggerObject;
class AdvancedFollowEditObject;
class AdvFollowSetup;
class AnimatedSpriteDelegate;
class SpritePartDelegate;
class AnimatedGameObject;
class CCAnimatedSprite;
class AnimatedShopKeeper;
class AppDelegate;
class ArtistCell;
class ArtTriggerGameObject;
class AudioEffectsLayer;
class AudioLineGuideGameObject;
class BitmapFontCache;
class BonusDropdown;
class BoomListLayer;
class TableViewDelegate;
class TableViewDataSource;
class BoomListView;
class BoomScrollLayer;
class BoomScrollLayerDelegate;
class BrowseSmartTemplateLayer;
class BrowseSmartKeyLayer;
class ButtonPage;
class ButtonSprite;
class CameraTriggerGameObject;
class CCAlertCircle;
class CCAnimateFrameCache;
class CCBlockLayer;
class CCCircleWave;
class CCCircleAlert;
class CCCircleWaveDelegate;
class CCContentLayer;
class CCCountdown;
class CCCounterLabel;
class CCExtenderNode;
class CCLightFlash;
class CCLightStrip;
class CCMenuItemSpriteExtra;
class CCMenuItemToggler;
class CCMoveCNode;
class CCNodeContainer;
class CCPartAnimSprite;
class CCScrollLayerExt;
class CCScrollLayerExtDelegate;
class CCSpriteCOpacity;
class CCSpriteWithHue;
class CCSpriteGrayscale;
class CCSpritePart;
class CCTextInputNode;
class CCURLObject;
class ChallengeNode;
class GJChallengeDelegate;
class CurrencyRewardDelegate;
class ChallengesPage;
class ChanceTriggerGameObject;
class CharacterColorDelegate;
class CharacterColorPage;
class CheckpointGameObject;
class CheckpointObject;
class CollisionBlockPopup;
class ColorAction;
class ColorAction2;
class ColorActionSprite;
class ColorChannelSprite;
class ColorSelectDelegate;
class ColorSelectLiveOverlay;
class ConfigureValuePopupDelegate;
class SliderDelegate;
class SetupTriggerPopup;
class GJSpecialColorSelectDelegate;
class ColorSelectPopup;
class ColorSetupDelegate;
class LikeItemDelegate;
class CommentCell;
class CommentUploadDelegate;
class CommunityCreditNode;
class CommunityCreditsPage;
class ConfigureHSVWidget;
class ConfigureValuePopup;
class CountTriggerAction;
class CountTriggerGameObject;
class CreateGuidelinesLayer;
class CreateMenuItem;
class CreateParticlePopup;
class DialogDelegate;
class CreatorLayer;
class CurrencyRewardLayer;
class CurrencySprite;
class HSVWidgetDelegate;
class CustomizeObjectLayer;
class CustomizeObjectSettingsPopup;
class CustomListView;
class CustomSongDelegate;
class CustomSongCell;
class CustomMusicCell;
class CustomSFXDelegate;
class CustomSFXCell;
class MusicDownloadDelegate;
class CustomSFXWidget;
class GJDropDownLayerDelegate;
class MusicBrowserDelegate;
class CustomSongLayer;
class CustomSongLayerDelegate;
class GJAssetDownloadAction;
class CustomSongWidget;
class DailyLevelNode;
class GJDailyLevelDelegate;
class LevelDownloadDelegate;
class DailyLevelPage;
class RingObject;
class DashRingObject;
class DemonFilterDelegate;
class DemonFilterSelectLayer;
class TextAreaDelegate;
class DialogLayer;
class DialogObject;
class DownloadMessageDelegate;
class DrawGridLayer;
class DungeonBarsSprite;
class DynamicBitset;
class DynamicScrollDelegate;
class EditButtonBar;
class EditGameObjectPopup;
class UploadActionDelegate;
class UploadPopupDelegate;
class SetIDPopupDelegate;
class EditLevelLayer;
class GJOptionsLayer;
class EditorOptionsLayer;
class EditorPauseLayer;
class GJRotationControlDelegate;
class GJScaleControlDelegate;
class GJTransformControlDelegate;
class EditorUI;
class EditTriggersPopup;
class EffectManagerState;
class EndLevelLayer;
class EndPortalObject;
class EndTriggerGameObject;
class EnhancedTriggerObject;
class EnterEffectInstance;
class EnterEffectObject;
class EventLinkTrigger;
class ExplodeItemNode;
class ExplodeItemSprite;
class ExtendedLayer;
class FileOperation;
class GManager;
class FileSaveManager;
class FindBPMLayer;
class SetIDPopup;
class FindObjectPopup;
class FMODAudioEngine;
class FMODAudioState;
class FMODLevelVisualizer;
class GameRateDelegate;
class RewardedVideoDelegate;
class FollowRewardPage;
class FontObject;
class ForceBlockGameObject;
class FriendRequestDelegate;
class FRequestProfilePage;
class FriendRequestPopup;
class UserListDelegate;
class FriendsProfilePage;
class GameCell;
class GameEffectsManager;
class GameLevelManager;
class GameLevelOptionsLayer;
class UIButtonConfig;
class GameManager;
class GameObjectCopy;
class GameObjectEditorState;
class GameOptionsLayer;
class GameOptionsTrigger;
class GameStatsManager;
class GameToolbox;
class LevelManagerDelegate;
class GauntletLayer;
class GauntletNode;
class GauntletSelectLayer;
class GauntletSprite;
class GhostTrailEffect;
class GJAccountManager;
class GJAccountSettingsDelegate;
class GJAccountSettingsLayer;
class GJActionManager;
class GJValueTween;
class GJGameState;
class TriggerEffectDelegate;
class GJBaseGameLayer;
class GJBigSprite;
class GJBigSpriteNode;
class GJChallengeItem;
class GJChestSprite;
class GJColorSetupLayer;
class GJComment;
class GJCommentListLayer;
class GJDifficultySprite;
class GJEffectManager;
class GJGroundLayer;
class GJFlyGroundLayer;
class GJFollowCommandLayer;
class GJFriendRequest;
class GJGameLevel;
class GJGameLoadingLayer;
class ListButtonBarDelegate;
class GJGarageLayer;
class GJGradientLayer;
class GJHttpResult;
class GJItemIcon;
class GJLevelList;
class GJLevelScoreCell;
class GJListLayer;
class GJLocalLevelScoreCell;
class GJLocalScore;
class GJMapObject;
class GJMapPack;
class GJMessageCell;
class GJMessagePopup;
class GJMGLayer;
class GJMoreGamesLayer;
class GJMPDelegate;
class GJMultiplayerManager;
class ObjectDecoderDelegate;
class GJObjectDecoder;
class GJPurchaseDelegate;
class GJPathPage;
class GJPathRewardPopup;
class GJPathsLayer;
class GJPathSprite;
class GJPFollowCommandLayer;
class GJPromoPopup;
class GJRequestCell;
class GJRewardDelegate;
class GJRewardItem;
class GJRewardObject;
class GJRobotSprite;
class GJRotateCommandLayer;
class GJRotationControl;
class GJScaleControl;
class GJScoreCell;
class GJSearchObject;
class GJShaderState;
class GJShopLayer;
class GJSmartBlockPreview;
class GJSmartBlockPreviewSprite;
class GJSmartPrefab;
class GJSmartTemplate;
class TableViewCellDelegate;
class GJSongBrowser;
class GJSpecialColorSelect;
class GJSpiderSprite;
class GJSpriteColor;
class GJStoreItem;
class GJTransformControl;
class GJUINode;
class GJUnlockableItem;
class GJUserCell;
class GJUserMessage;
class GJUserScore;
class GJWorldNode;
class UploadMessageDelegate;
class GJWriteMessagePopup;
class GooglePlayDelegate;
class GooglePlayManager;
class GradientTriggerObject;
class GraphicsReloadLayer;
class GravityEffectSprite;
class GroupCommandObject2;
class HardStreak;
class HSVLiveOverlay;
class HSVWidgetPopup;
class InfoAlertButton;
class LevelCommentDelegate;
class InfoLayer;
class InheritanceNode;
class ItemInfoPopup;
class ItemTriggerGameObject;
class KeybindingsLayer;
class KeybindingsManager;
class KeyframeAnimTriggerObject;
class KeyframeGameObject;
class KeyframeObject;
class LabelGameObject;
class LeaderboardManagerDelegate;
class LeaderboardsLayer;
class LevelAreaInnerLayer;
class LevelAreaLayer;
class SetTextPopupDelegate;
class ShareCommentDelegate;
class LevelBrowserLayer;
class LevelCell;
class LevelDeleteDelegate;
class LevelSettingsDelegate;
class LevelEditorLayer;
class LevelFeatureLayer;
class LevelUpdateDelegate;
class RateLevelDelegate;
class NumberInputDelegate;
class LevelInfoLayer;
class LevelLeaderboard;
class LevelListCell;
class LevelListDeleteDelegate;
class SelectListIconDelegate;
class LevelListLayer;
class LevelOptionsLayer;
class LevelOptionsLayer2;
class LevelPage;
class LevelSearchLayer;
class LevelSelectLayer;
class SelectArtDelegate;
class SelectSettingDelegate;
class LevelSettingsLayer;
class LevelSettingsObject;
class LevelTools;
class LevelUploadDelegate;
class LikeItemLayer;
class ListButtonBar;
class ListButtonPage;
class ListCell;
class ListUploadDelegate;
class LoadingCircle;
class LoadingCircleSprite;
class LoadingLayer;
class LocalLevelManager;
class MapPackCell;
class MapSelectLayer;
class MenuGameLayer;
class MenuLayer;
class MessageListDelegate;
class MessagesProfilePage;
class MoreOptionsLayer;
class MoreSearchLayer;
class MoreVideoOptionsLayer;
class MPLobbyLayer;
class MultilineBitmapFont;
class MultiplayerLayer;
class MultiTriggerPopup;
class MusicArtistObject;
class MusicBrowser;
class MusicDelegateHandler;
class PlatformDownloadDelegate;
class MusicDownloadManager;
class OptionsObjectDelegate;
class MusicSearchResult;
class NewgroundsInfoLayer;
class NodePoint;
class NumberInputLayer;
class OBB2D;
class ObjectControlGameObject;
class ObjectDecoder;
class ObjectManager;
class ObjectToolbox;
class OnlineListDelegate;
class OpacityEffectAction;
class OptionsCell;
class OptionsLayer;
class OptionsObject;
class OptionsScrollLayer;
class ParentalOptionsLayer;
class ParticleGameObject;
class ParticlePreviewLayer;
class PauseLayer;
class PlatformToolbox;
class PlayerCheckpoint;
class PlayerControlGameObject;
class PlayerFireBoostSprite;
class PlayerObject;
class PlayLayer;
class PointNode;
class PriceLabel;
class UserInfoDelegate;
class ProfilePage;
class PromoInterstitial;
class PulseEffectAction;
class PurchaseItemPopup;
class RandTriggerGameObject;
class RateDemonLayer;
class RateLevelLayer;
class RateStarsLayer;
class RetryLevelLayer;
class RewardsPage;
class RewardUnlockLayer;
class RotateGameplayGameObject;
class ScrollingLayer;
class SearchButton;
class SetTextPopup;
class SearchSFXPopup;
class SecretLayer;
class SecretLayer2;
class SecretLayer3;
class SecretLayer4;
class SecretNumberLayer;
class SecretRewardsLayer;
class SelectArtLayer;
class SelectEventLayer;
class SelectFontLayer;
class SelectListIconLayer;
class SelectPremadeDelegate;
class SelectPremadeLayer;
class SelectSettingLayer;
class SelectSFXSortDelegate;
class SelectSFXSortLayer;
class SequenceTriggerGameObject;
class SetColorIDPopup;
class SetFolderPopup;
class SetGroupIDLayer;
class SetItemIDLayer;
class SetLevelOrderPopup;
class SetTargetIDLayer;
class SetupAdvFollowEditPhysicsPopup;
class SetupAdvFollowPopup;
class SetupAdvFollowRetargetPopup;
class SetupAnimationPopup;
class SetupAnimSettingsPopup;
class SetupAreaMoveTriggerPopup;
class SetupAreaTintTriggerPopup;
class SetupAreaAnimTriggerPopup;
class SetupAreaFadeTriggerPopup;
class SetupAreaRotateTriggerPopup;
class SetupAreaTransformTriggerPopup;
class SetupAreaTriggerPopup;
class SetupArtSwitchPopup;
class SetupAudioLineGuidePopup;
class SetupAudioTriggerPopup;
class SetupBGSpeedTrigger;
class SetupCameraEdgePopup;
class SetupCameraGuidePopup;
class SetupCameraModePopup;
class SetupCameraOffsetTrigger;
class SetupCameraRotatePopup;
class SetupCameraRotatePopup2;
class SetupCheckpointPopup;
class SetupCoinLayer;
class SetupInstantCollisionTriggerPopup;
class SetupCollisionStateTriggerPopup;
class SetupCollisionTriggerPopup;
class SetupCountTriggerPopup;
class SetupDashRingPopup;
class SetupEndPopup;
class SetupEnterEffectPopup;
class SetupEnterTriggerPopup;
class SetupEventLinkPopup;
class SetupForceBlockPopup;
class SetupGameplayOffsetPopup;
class SetupGradientPopup;
class SetupGravityModPopup;
class SetupGravityTriggerPopup;
class SetupInstantCountPopup;
class SetupInteractObjectPopup;
class SetupItemCompareTriggerPopup;
class SetupItemEditTriggerPopup;
class SetupKeyframeAnimPopup;
class SetupKeyframePopup;
class SetupMGTrigger;
class SetupMoveCommandPopup;
class SetupObjectControlPopup;
class SetupObjectOptions2Popup;
class SetupObjectOptionsPopup;
class SetupObjectTogglePopup;
class SetupOpacityPopup;
class SetupOptionsTriggerPopup;
class SetupPersistentItemTriggerPopup;
class SetupPickupTriggerPopup;
class SetupPlatformerEndPopup;
class SetupPlayerControlPopup;
class SetupPortalPopup;
class SetupPulsePopup;
class SetupRandAdvTriggerPopup;
class SetupRandTriggerPopup;
class SetupResetTriggerPopup;
class SetupReverbPopup;
class SetupRotateCommandPopup;
class SetupRotateGameplayPopup;
class SetupRotatePopup;
class SetupSequenceTriggerPopup;
class SetupSFXEditPopup;
class SFXBrowserDelegate;
class SetupSFXPopup;
class SetupShaderEffectPopup;
class SetupShakePopup;
class SetupSmartBlockLayer;
class SetupSmartTemplateLayer;
class SongPlaybackDelegate;
class SetupSongTriggerPopup;
class SetupSpawnParticlePopup;
class SetupSpawnPopup;
class SetupStaticCameraPopup;
class SetupStopTriggerPopup;
class SetupTeleportPopup;
class SetupTimerControlTriggerPopup;
class SetupTimerEventTriggerPopup;
class SetupTimerTriggerPopup;
class SetupTimeWarpPopup;
class SetupTouchTogglePopup;
class SetupTransformPopup;
class SetupZoomTriggerPopup;
class SFXBrowser;
class SFXInfoObject;
class SFXFolderObject;
class SFXSearchResult;
class SFXTriggerGameObject;
class ShaderGameObject;
class ShaderLayer;
class ShardsPage;
class ShareCommentLayer;
class ShareLevelLayer;
class ShareLevelSettingsLayer;
class ShareListLayer;
class SimpleObject;
class SimplePlayer;
class SlideInLayer;
class Slider;
class SliderThumb;
class SliderTouchLogic;
class SmartGameObject;
class SmartTemplateCell;
class SongCell;
class SongInfoLayer;
class SongInfoObject;
class SongObject;
class SongOptionsLayer;
class SongSelectNode;
class SongsLayer;
class SongTriggerGameObject;
class SpawnParticleGameObject;
class SpawnTriggerAction;
class SpawnTriggerGameObject;
class SpecialAnimGameObject;
class SpriteAnimationManager;
class SpriteDescription;
class StartPosObject;
class StatsCell;
class StatsLayer;
class StatsObject;
class SupportLayer;
class TableView;
class TeleportPortalObject;
class TextAlertPopup;
class TextArea;
class TextGameObject;
class TextStyleSection;
class TimerTriggerGameObject;
class TopArtistsLayer;
class TOSPopup;
class TransformTriggerGameObject;
class TriggerControlGameObject;
class TutorialLayer;
class TutorialPopup;
class UILayer;
class UIObjectSettingsPopup;
class UIOptionsLayer;
class UISaveLoadLayer;
class UISettingsGameObject;
class UndoObject;
class UpdateAccountSettingsPopup;
class UploadActionPopup;
class UploadListPopup;
class UploadPopup;
class URLCell;
class URLViewLayer;
class VideoOptionsLayer;
class WorldLevelPage;
class WorldSelectLayer;
#endif // 1