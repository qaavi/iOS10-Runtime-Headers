/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserNavigationViewController : UINavigationController <CKBrowserViewControllerProtocol, UIViewControllerTransitioningDelegate> {
    IMBalloonPlugin * _balloonPlugin;
    IMBalloonPluginDataSource * _balloonPluginDataSource;
    NSString * _conversationID;
    bool  _isiMessge;
    UIViewController * _presentationViewController;
    NSObject<CKBrowserViewControllerSendDelegate> * _sendDelegate;
    bool  _shouldShowChatChrome;
    bool  _wantsDarkUI;
    bool  _wantsOpaqueUI;
}

@property (nonatomic, retain) NSNumber *adamID;
@property (nonatomic, readonly) unsigned long long badgeValue;
@property (nonatomic, readonly) IMBalloonPlugin *balloonPlugin;
@property (nonatomic, retain) IMBalloonPluginDataSource *balloonPluginDataSource;
@property (nonatomic, readonly) CKBrowserDragManager *browserDragManager;
@property (nonatomic, readonly) long long browserPresentationStyle;
@property (nonatomic, readonly) bool canReplaceDataSource;
@property (nonatomic) NSString *conversationID;
@property (nonatomic) long long currentBrowserConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inExpandedPresentation;
@property (nonatomic) bool isiMessage;
@property (nonatomic, readonly) bool mayBeKeptInViewHierarchy;
@property (nonatomic, readonly) long long parentModalPresentationStyle;
@property (nonatomic, readonly) <UIViewControllerTransitioningDelegate> *parentTransitioningDelegate;
@property (nonatomic, retain) UIViewController *presentationViewController;
@property (nonatomic) NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property (nonatomic, readonly) bool shouldShowChatChrome;
@property (nonatomic, retain) NSURL *storeLaunchURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsQuickView;
@property (nonatomic, readonly) bool wantsDarkUI;
@property (nonatomic, readonly) bool wantsOpaqueUI;

- (void).cxx_destruct;
- (id)balloonPlugin;
- (id)balloonPluginDataSource;
- (long long)browserPresentationStyle;
- (id)conversationID;
- (void)dismiss;
- (id)init;
- (id)initWithBalloonPlugin:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (bool)isiMessage;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentationViewController;
- (id)sendDelegate;
- (void)setBalloonPluginDataSource:(id)arg1;
- (void)setConversationID:(id)arg1;
- (void)setIsiMessage:(bool)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setSendDelegate:(id)arg1;
- (bool)shouldShowChatChrome;
- (void)viewDidLoad;
- (bool)wantsDarkUI;
- (bool)wantsOpaqueUI;

@end
