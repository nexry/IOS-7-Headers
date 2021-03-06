/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AirPortAssistant/AUUITableViewController.h>

#import "AssistantCallbackUIDelegate.h"
#import "AssistantSubcontrollerHelper.h"
#import "AssistantUIDelegate.h"
#import "TableViewManagerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class AssistantCallbackController, AssistantSubUIViewController, AssistantUIController, NSArray, NSDictionary, NSString, NetTopoMiniStaticLayout, UIActivityIndicatorView, UIAlertView, UIBarButtonItem, UILabel, UITableView, UITextField, UIView;

@interface AssistantUIViewController : AUUITableViewController <AssistantUIDelegate, AssistantCallbackUIDelegate, UINavigationControllerDelegate, AssistantSubcontrollerHelper, TableViewManagerDelegate>
{
    UIView *spinnerWithStatusBelowView;
    UILabel *spinnerWithStatusBelowLabel;
    UIActivityIndicatorView *spinnerWithStatusBelowSpinner;
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    UIView *spinnerWithStatusAdjacentView;
    UIActivityIndicatorView *spinnerWithStatusAdjacentSpinner;
    UILabel *spinnerWithStatusAdjacentLabel;
    UIView *topoContainerView;
    UIView *topoView;
    NetTopoMiniStaticLayout *topoLayout;
    UIBarButtonItem *nextButton;
    UIBarButtonItem *cancelButton;
    UIView *tableHeaderContainerView;
    id _assistantDelegate;
    NSString *_macAddress;
    NSString *_settingUpStatusText;
    NSDictionary *_scanInfoRecord;
    NSArray *_paramScanResults;
    NSDictionary *_recommendationParamDict;
    AssistantUIController *_assistantUIController;
    AssistantCallbackController *_controllerContext;
    int _controllerContextSelector;
    UIAlertView *passwordAlertView;
    UIAlertView *askUserQuestionAlertView;
    UIAlertView *connectionVerificationAlertView;
    int letMeChooseButtonIndex;
    int restoreButtonIndex;
    int recommendationButtonIndex;
    BOOL iPadIdiom;
    BOOL showingPasswordsAtEnd;
    int _currentUIConfigStep;
    NSDictionary *_mfiAccessoryResponseDict;
    AssistantSubUIViewController *_currentSubController;
    BOOL _goingBack;
    unsigned int _selectedActionTag;
    UITextField *currentTextField;
    NSDictionary *recommendationParamDict;
    UITableView *_mainTableView;
}

+ (void)readjustSubviewsInContainer:(id)arg1;
@property(retain) NSString *settingUpStatusText; // @synthesize settingUpStatusText=_settingUpStatusText;
@property(copy, nonatomic) NSString *macAddress; // @synthesize macAddress=_macAddress;
@property(nonatomic) BOOL iPadIdiom; // @synthesize iPadIdiom;
@property(nonatomic) int recommendationButtonIndex; // @synthesize recommendationButtonIndex;
@property(nonatomic) int restoreButtonIndex; // @synthesize restoreButtonIndex;
@property(nonatomic) int letMeChooseButtonIndex; // @synthesize letMeChooseButtonIndex;
@property(retain, nonatomic) UIAlertView *askUserQuestionAlertView; // @synthesize askUserQuestionAlertView;
@property(retain, nonatomic) UIAlertView *passwordAlertView; // @synthesize passwordAlertView;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) UIView *tableHeaderContainerView; // @synthesize tableHeaderContainerView;
@property(retain, nonatomic) NetTopoMiniStaticLayout *topoLayout; // @synthesize topoLayout;
@property(retain, nonatomic) UIView *topoContainerView; // @synthesize topoContainerView;
@property(retain, nonatomic) AssistantSubUIViewController *currentSubController; // @synthesize currentSubController=_currentSubController;
@property(retain, nonatomic) UITextField *currentTextField; // @synthesize currentTextField;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton;
@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton;
@property(retain, nonatomic) UIView *spinnerWithStatusBelowView; // @synthesize spinnerWithStatusBelowView;
@property(retain, nonatomic) UIView *spinnerWithStatusAdjacentView; // @synthesize spinnerWithStatusAdjacentView;
@property(retain, nonatomic) UIView *justTextContainerView; // @synthesize justTextContainerView;
@property(copy, nonatomic) NSDictionary *recommendationParamDict; // @synthesize recommendationParamDict;
@property(copy, nonatomic) NSArray *paramScanResults; // @synthesize paramScanResults=_paramScanResults;
@property(copy, nonatomic) NSDictionary *scanInfoRecord; // @synthesize scanInfoRecord=_scanInfoRecord;
@property(retain, nonatomic) AssistantCallbackController *_controllerContext; // @synthesize _controllerContext;
@property(retain, nonatomic) AssistantUIController *_assistantUIController; // @synthesize _assistantUIController;
@property(nonatomic) id <AssistantViewControllerDelegate> assistantDelegate; // @synthesize assistantDelegate=_assistantDelegate;
- (void)presentWaitingForWANViewWithContinueText:(BOOL)arg1;
- (id)modifyTopoUIInLayer:(id)arg1 withLayout:(id)arg2 targetProductID:(id)arg3 targetDeviceKind:(id)arg4 targetName:(id)arg5 targetWiFiName:(id)arg6 sourceProductID:(id)arg7 sourceDeviceKind:(id)arg8 sourceName:(id)arg9 sourceWiFiName:(id)arg10 connectionType:(id)arg11;
- (void)displayViewListInView:(id)arg1 newSubviews:(id)arg2 withAnimation:(BOOL)arg3;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned int)arg2 inCellWithTag:(int)arg3;
- (void)presentUIForSetupResult:(long)arg1 baseStationInfo:(id)arg2 withPrompt:(id)arg3;
- (void)presentUIForSetupStatusWithRecommendationDict:(id)arg1;
- (void)connectionVerificationSucceededForSelector:(int)arg1;
- (void)presentUIForStepByStepResult:(long)arg1;
- (id)modifyTopoUIInLayer:(id)arg1 withLayout:(id)arg2 newLayout:(id)arg3;
- (void)presentUIForStepByStepNextStep:(int)arg1 paramDict:(id)arg2;
- (void)presentUIForStepByStepStart;
- (void)presentUIForRecommendationResult:(long)arg1 paramDict:(id)arg2;
- (void)presentUIForRecommmendationTargetInfo:(id)arg1;
- (void)presentUIForRecommendationStatus;
- (void)doneWithAssistantResult:(long)arg1;
- (void)assistantUpdateProgress:(id)arg1 forState:(int)arg2;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)handleNextButton:(id)arg1;
- (void)handleCancelButton:(id)arg1;
- (void)handeImmediateCancel;
- (void)showTellUserToFixTheirInternetConnection;
- (void)showAskUserPluginAudioCablingForStatus:(long)arg1 paramDict:(id)arg2;
- (void)showAskUserSwapCablingForStatus:(long)arg1 paramDict:(id)arg2;
- (void)showTellUserToPlugInEthernetForStatus:(long)arg1 paramDict:(id)arg2;
- (void)showUIConfigPromptForGuestNetConfigWithParamDict:(id)arg1;
- (void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(id)arg1;
- (void)showAskUserForPPPoECredentialsForStatus:(long)arg1 paramDict:(id)arg2;
- (void)showTellUserToResetBroadbandDeviceForStatus:(long)arg1 paramDict:(id)arg2;
- (void)playDoneSound;
- (long)callbackAskUserAQuestion:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
- (long)callbackAskUserForPassword:(int)arg1 param:(id)arg2 forController:(id)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)callbackAskCancel;
- (void)baseStationConfigurationComplete:(id)arg1;
- (void)readyToGuess;
- (void)dealloc;
- (void)initializeServiesDone;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)keyboardReturnKeySetEnabled:(BOOL)arg1;
- (id)radioNameFromBaseStation:(id)arg1;
- (void)replaceSubviewsInView:(id)arg1 newSubviews:(id)arg2 layoutOptions:(int)arg3 withAnimation:(BOOL)arg4;
- (void)handleCancelRequest:(BOOL)arg1;
- (void)setupCompleteShowPasswords:(BOOL)arg1;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)showUIForSetupStatus;
- (void)skipPluginAudioCabling;
- (void)continueWithSwapCabling;
- (void)continueWithGuestNetSettings;
- (void)continueWithDiagsAndUsageStats;
- (void)continueWithPPPoESettings;
- (void)skipWANPort;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)confirmSkipWANPort;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)startSetup:(id)arg1;
- (id)newStepByStepControllerForStep:(int)arg1;

@end

