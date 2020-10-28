//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSHashTable, _TVPlaybackFadeAnimator, _UIProgressiveBlurPresentationAnimator;

@interface TVModalPresenter : NSObject <UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate>
{
    NSHashTable *__presentationControllers;
    _UIProgressiveBlurPresentationAnimator *_presentingAnimator;
    _UIProgressiveBlurPresentationAnimator *_dismissingAnimator;
    _TVPlaybackFadeAnimator *_playbackAnimator;
}

+ (id)_viewControllerForResponder:(id)arg1;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissAllViewControllersWithAnimation:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)dismissViewControllerWithResponder:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 options:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)presentViewController:(id)arg1 forResponder:(id)arg2 options:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
@property(readonly, copy, nonatomic) NSArray *presentedViewControllers;
@property(readonly, nonatomic) NSHashTable *_presentationControllers;
- (id)init;

@end

