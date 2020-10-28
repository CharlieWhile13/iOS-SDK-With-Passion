//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pegasus/PGPictureInPictureExportedInterface-Protocol.h>

@class NSArray, NSString, NSXPCConnection, PGHostedWindow, PGSetterThrottler, UIViewController;
@protocol OS_dispatch_queue, PGPictureInPictureProxyDelegate, PGPictureInPictureViewController;

@interface PGPictureInPictureProxy : NSObject <PGPictureInPictureExportedInterface>
{
    CGSize _preferredContentSize;
    CGRect _initialLayerFrame;
    NSString *_sceneSessionPersistentIdentifier;
    BOOL _isPictureInPicturePossible;
    BOOL _isPictureInPictureActive;
    BOOL _isPictureInPictureSuspended;
    BOOL _pictureInPictureShouldStartWhenEnteringBackground;
    BOOL _pictureInPictureWasStartedWhenEnteringBackground;
    BOOL _shouldCancelActivePictureInPictureOnStart;
    BOOL _shouldPullCancellationPolicyOnStart;
    id _windowSceneActivationStateObserver;
    double _playbackProgress;
    double _playbackRate;
    NSArray *_loadedTimeRanges;
    PGSetterThrottler *_playbackProgressSetterThrottler;
    PGSetterThrottler *_loadedTimeRangesSetterThrottler;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    PGHostedWindow *_hostedWindow;
    UIViewController *_rootViewController;
    BOOL _isStartingStoppingOrCancellingPictureInPicture;
    BOOL _isHostedWindowSizeChangeDuringPinchGesture;
    id <PGPictureInPictureProxyDelegate> _delegate;
    struct {
        unsigned int pictureInPictureProxyInterfaceOrientationForTransitionAnimation:1;
        unsigned int pictureInPictureProxyViewFrameForTransitionAnimation:1;
        unsigned int pictureInPictureProxyViewControllerWindowForTransitionAnimation:1;
        unsigned int pictureInPictureProxy_willStartPictureInPictureWithAnimationType:1;
        unsigned int pictureInPictureProxy_didStartPictureInPictureWithAnimationType:1;
        unsigned int pictureInPictureProxy_failedToStartPictureInPictureWithAnimationType_error:1;
        unsigned int pictureInPictureProxy_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:1;
        unsigned int pictureInPictureProxy_willStopPictureInPictureWithAnimationType_reason:1;
        unsigned int pictureInPictureProxy_didStopPictureInPictureWithAnimationType_reason:1;
        unsigned int pictureInPictureProxyPictureInPictureInterruptionBegan:1;
        unsigned int pictureInPictureProxyPictureInPictureInterruptionEnded:1;
    } _delegateRespondsTo;
    long long _controlsStyle;
    UIViewController<PGPictureInPictureViewController> *_viewController;
}

+ (id)pictureInPictureProxyWithControlsStyle:(long long)arg1 viewController:(id)arg2;
+ (void)_updatePictureInPictureActive:(BOOL)arg1;
+ (BOOL)isPictureInPictureActive;
+ (BOOL)isPictureInPictureSupported;
@property(readonly, nonatomic) UIViewController<PGPictureInPictureViewController> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
// - (void).cxx_destruct;
- (oneway void)actionButtonTapped;
- (oneway void)hostedWindowSizeChangeEnded;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)updateHostedWindowSize:(CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4;
- (oneway void)pictureInPictureCancelled;
- (oneway void)pictureInPictureResumed;
- (oneway void)pictureInPictureSuspended;
- (oneway void)pictureInPictureInterruptionEnded;
- (oneway void)pictureInPictureInterruptionBegan;
- (oneway void)updatePictureInPicturePossible:(BOOL)arg1;
- (oneway void)pictureInPictureCancelRequestedAnimated:(BOOL)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (oneway void)pictureInPictureStopRequestedAnimated:(BOOL)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (oneway void)pictureInPictureStartRequestedAnimated:(BOOL)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_stopObservingWindowSceneActivationState;
- (void)_updateAutoPIPSettingsAndNotifyRemoteObject;
- (void)_updateAutoPIPSettingsAndNotifyRemoteObjectIfNeeded;
- (id)_expectedScene;
- (void)_executeDelegateCallbackBlock:(id /* CDUnknownBlockType */)arg1 assumeApplicationActive:(BOOL)arg2;
- (id)_sourceScene;
- (BOOL)_isViewControllerWindowSceneActive;
- (id)_sceneSessionPersistentIdentifierForTransitionAnimationAssumeApplicationActive:(BOOL)arg1;
- (CGRect)_viewFrameForTransitionAnimationAssumeApplicationActive:(BOOL)arg1;
- (long long)_interfaceOrientationForTransitionAnimationAssumeApplicationActive:(BOOL)arg1;
- (void)_stopPictureInPictureAnimated:(BOOL)arg1 restoreUserInterface:(BOOL)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_didStartWithSuccess:(BOOL)arg1 animationType:(long long)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_actuallyStartAnimated:(BOOL)arg1 animationType:(long long)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_setupStart:(BOOL)arg1 animationType:(long long)arg2 initialLayerFrame:(CGRect)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_manageStartAnimated:(BOOL)arg1 cancelActiveOnStart:(BOOL)arg2 competionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_updateCancellationPolicyWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_startPictureInPictureAnimated:(BOOL)arg1 enteringBackground:(BOOL)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)setControlsStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)rotateContentContainer:(long long)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)setPlaybackProgress:(double)arg1 playbackRate:(double)arg2;
- (void)stopPictureInPictureAndRestoreUserInterface:(BOOL)arg1;
- (void)startPictureInPicture;
- (void)windowSceneForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewController;
- (void)viewFrameForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewController;
- (void)preferredContentSizeDidChangeForViewController;
- (void)setLoadedTimeRanges:(id)arg1;
- (id)loadedTimeRanges;
- (double)playbackRate;
- (double)playbackProgress;
@property(readonly, nonatomic) BOOL pictureInPictureWasStartedWhenEnteringBackground;
@property(nonatomic) BOOL pictureInPictureShouldStartWhenEnteringBackground;
@property(readonly, nonatomic, getter=isPictureInPictureSuspended) BOOL pictureInPictureSuspended;
@property(readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property(readonly, nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property(nonatomic) __weak id <PGPictureInPictureProxyDelegate> delegate;
- (void)dealloc;
- (id)init;
- (id)initWithControlsStyle:(long long)arg1 viewController:(id)arg2;

@end

