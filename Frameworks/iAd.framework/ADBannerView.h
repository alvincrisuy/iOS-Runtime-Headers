/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class <ADBannerViewDelegate>, ADBannerController, ADBannerControllerRecipient, ADLocalAd, ADRemoteView, ADTapGestureRecognizer, NSSet, NSString, UIView;

@interface ADBannerView : UIView <ADBannerControllerRecipient, ADBannerControllerDelegate> {
    NSString *_advertisingSection;
    NSString *_authenticationUserName;
    BOOL _bannerLoaded;
    BOOL _bannerViewActionInProgress;
    ADBannerController *_controller;
    BOOL _createdForIBInternal;
    NSString *_currentContentSizeIdentifier;
    BOOL _delegateImplementsActionDidFinish;
    BOOL _delegateImplementsActionShouldBegin;
    BOOL _delegateImplementsDidLoadAd;
    BOOL _delegateImplementsError;
    UIView *_dimmerView;
    ADTapGestureRecognizer *_gestureRecognizer;
    BOOL _hasFailedHitTest;
    BOOL _hasRecentlyChangedSize;
    ADLocalAd *_localAd;
    int _previousOrientation;
    ADBannerControllerRecipient *_recipient;
    ADRemoteView *_remoteView;
    NSSet *_requiredContentSizeIdentifiers;
    <ADBannerViewDelegate> *_weakDelegate;
}

@property(copy) NSString * advertisingSection;
@property(copy) NSString * authenticationUserName;
@property(getter=isBannerLoaded,readonly) BOOL bannerLoaded;
@property(getter=isBannerViewActionInProgress) BOOL bannerViewActionInProgress;
@property(retain) ADBannerController * controller;
@property(readonly) BOOL createdForIBInternal;
@property(copy) NSString * currentContentSizeIdentifier;
@property <ADBannerViewDelegate> * delegate;
@property(readonly) BOOL delegateImplementsActionDidFinish;
@property(readonly) BOOL delegateImplementsActionShouldBegin;
@property(readonly) BOOL delegateImplementsDidLoadAd;
@property(readonly) BOOL delegateImplementsError;
@property(retain) UIView * dimmerView;
@property(retain) ADTapGestureRecognizer * gestureRecognizer;
@property BOOL hasFailedHitTest;
@property BOOL hasRecentlyChangedSize;
@property(retain) ADLocalAd * localAd;
@property int previousOrientation;
@property(retain) ADBannerControllerRecipient * recipient;
@property(retain) ADRemoteView * remoteView;
@property(copy) NSSet * requiredContentSizeIdentifiers;

+ (void)setServerURL:(id)arg1;
+ (struct CGSize { float x1; float x2; })sizeFromBannerContentSizeIdentifier:(id)arg1;

- (void)_addOurSubviews;
- (void)_bannerTapped:(id)arg1;
- (void)_commonInit;
- (void)_loadDebuggerFromPath:(id)arg1 portName:(id)arg2;
- (void)_orientationChanged;
- (void)_propagateFrame;
- (void)_propagateProperties;
- (void)_sanitizeAndForwardErrorToDelegate:(id)arg1;
- (void)_setContentSizeIdentifier:(id)arg1;
- (void)_updateSpecification;
- (void)addSubview:(id)arg1;
- (id)advertisingSection;
- (id)authenticationUserName;
- (void)bannerControllerDidBecomeAvailable:(id)arg1;
- (void)cancelBannerViewAction;
- (void)controller:(id)arg1 didFailWithError:(id)arg2;
- (id)controller;
- (void)controllerDidClose:(id)arg1;
- (void)controllerDidOpen:(id)arg1 withWindowContextId:(id)arg2;
- (BOOL)createdForIBInternal;
- (int)creativeType;
- (id)currentContentSizeIdentifier;
- (void)dealloc;
- (id)delegate;
- (BOOL)delegateImplementsActionDidFinish;
- (BOOL)delegateImplementsActionShouldBegin;
- (BOOL)delegateImplementsDidLoadAd;
- (BOOL)delegateImplementsError;
- (void)didMoveToWindow;
- (id)dimmerView;
- (void)encodeWithCoder:(id)arg1;
- (void)exchangeSubviewAtIndex:(int)arg1 withSubviewAtIndex:(int)arg2;
- (id)gestureRecognizer;
- (BOOL)hasFailedHitTest;
- (BOOL)hasRecentlyChangedSize;
- (id)initFromIBWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertSubview:(id)arg1 above:(id)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 atIndex:(int)arg2;
- (void)insertSubview:(id)arg1 below:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (BOOL)isBannerLoaded;
- (BOOL)isBannerViewActionInProgress;
- (BOOL)isVisible:(BOOL)arg1;
- (id)localAd;
- (int)previousOrientation;
- (id)recipient;
- (id)remoteView;
- (id)requiredContentSizeIdentifiers;
- (void)serverBannerViewDidFailToReceiveAd:(id)arg1 withError:(id)arg2;
- (void)serverBannerViewDidLoad:(id)arg1;
- (void)serverBannerViewWillLoad:(id)arg1;
- (void)serverStoryboardDidFinishFirstSignificantDraw:(id)arg1;
- (void)serverStoryboardDidTransitionOut:(id)arg1;
- (void)setAdvertisingSection:(id)arg1;
- (void)setAlpha:(float)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setBannerLoaded:(BOOL)arg1;
- (void)setBannerViewActionInProgress:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setController:(id)arg1;
- (void)setCurrentContentSizeIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmerView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setHasFailedHitTest:(BOOL)arg1;
- (void)setHasRecentlyChangedSize:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setLocalAd:(id)arg1;
- (void)setPreviousOrientation:(int)arg1;
- (void)setRecipient:(id)arg1;
- (void)setRemoteView:(id)arg1;
- (void)setRequiredContentSizeIdentifiers:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;

@end