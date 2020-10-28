//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBDeviceApplicationSceneHandleObserver-Protocol.h>
#import <SpringBoard/SBFloatingApplicationLiveContentOverlayView-Protocol.h>
#import <SpringBoard/SBUISizeObservingViewDelegate-Protocol.h>

@class FBDisplayLayoutElement, SBFHomeGrabberSettings, SBFloatingApplicationLiveContentWindow, SBMedusaDecoratedDeviceApplicationSceneViewController, SBSceneViewStatusBarAssertion, SBUISizeObservingView, SBWindowSelfHostWrapper, UIView;

@interface SBFloatingApplicationSceneLiveContentOverlayView : NSObject <SBFloatingApplicationLiveContentOverlayView, SBDeviceApplicationSceneHandleObserver, SBUISizeObservingViewDelegate>
{
    BOOL _wantsMinificationFilter;
    BOOL _liveContentRasterizationDisabled;
    BOOL _asynchronousRenderingTemporarilyDisabled;
    long long _rasterizationStyle;
    SBFloatingApplicationLiveContentWindow *_window;
    SBWindowSelfHostWrapper *_windowHostWrapper;
    SBUISizeObservingView *_sizeObservingView;
    SBMedusaDecoratedDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    SBSceneViewStatusBarAssertion *_statusBarAssertion;
    SBFHomeGrabberSettings *_grabberSettings;
    FBDisplayLayoutElement *_displayLayoutElement;
}

@property(readonly, nonatomic) BOOL asynchronousRenderingTemporarilyDisabled; // @synthesize asynchronousRenderingTemporarilyDisabled=_asynchronousRenderingTemporarilyDisabled;
@property(readonly, nonatomic) BOOL liveContentRasterizationDisabled; // @synthesize liveContentRasterizationDisabled=_liveContentRasterizationDisabled;
@property(readonly, nonatomic) BOOL wantsMinificationFilter; // @synthesize wantsMinificationFilter=_wantsMinificationFilter;
@property(readonly, nonatomic) FBDisplayLayoutElement *displayLayoutElement; // @synthesize displayLayoutElement=_displayLayoutElement;
@property(readonly, nonatomic) SBFHomeGrabberSettings *grabberSettings; // @synthesize grabberSettings=_grabberSettings;
@property(readonly, nonatomic) SBSceneViewStatusBarAssertion *statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property(readonly, nonatomic) SBMedusaDecoratedDeviceApplicationSceneViewController *deviceApplicationSceneViewController; // @synthesize deviceApplicationSceneViewController=_deviceApplicationSceneViewController;
@property(readonly, nonatomic) SBUISizeObservingView *sizeObservingView; // @synthesize sizeObservingView=_sizeObservingView;
@property(readonly, nonatomic) SBWindowSelfHostWrapper *windowHostWrapper; // @synthesize windowHostWrapper=_windowHostWrapper;
@property(readonly, nonatomic) SBFloatingApplicationLiveContentWindow *window; // @synthesize window=_window;
// - (void).cxx_destruct;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)_updateContentWindowFrameFromView:(id)arg1;
- (void)_updateLiveContentRasterization;
- (void)noteNeedsLayoutUpdateFor180DegreeRotation;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2;
@property(readonly, nonatomic) long long rasterizationStyle; // @synthesize rasterizationStyle=_rasterizationStyle;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1;
- (void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) UIView *contentOverlayView;
- (void)sizeObservingView:(id)arg1 didChangeSize:(CGSize)arg2;
- (void)invalidate;
- (void)configureWithWorkspaceEntity:(id)arg1 referenceFrame:(CGRect)arg2 interfaceOrientation:(long long)arg3;
- (id)contentViewController;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

@end
