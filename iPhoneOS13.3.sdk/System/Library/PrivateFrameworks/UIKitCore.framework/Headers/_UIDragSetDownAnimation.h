//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDragSetDownItemAnimationDelegate-Protocol.h>

@class CADisplayLink, NSArray, UIViewPropertyAnimator, UIWindow, _UIDragSetDownAnimationWindow;

@interface _UIDragSetDownAnimation : NSObject <_UIDragSetDownItemAnimationDelegate>
{
    NSArray *_itemAnimations;
    id /* CDUnknownBlockType */ _completion;
    BOOL _hasBegun;
    _UIDragSetDownAnimationWindow *_window;
    CADisplayLink *_displayLink;
    UIViewPropertyAnimator *_remainingItemsPropertyAnimator;
}

+ (id /* CDUnknownBlockType */)defaultDropAnimationForPlatterView:(id)arg1;
+ (id /* CDUnknownBlockType */)defaultMultiItemAnimationForPlatterView:(id)arg1;
+ (id /* CDUnknownBlockType */)defaultSingleItemAnimationForPlatterView:(id)arg1;
+ (id)defaultSetDownPropertyAnimator;
// - (void).cxx_destruct;
- (void)_allItemAnimationsCompleted;
- (void)itemAnimationCompleted:(id)arg1;
- (void)itemAnimationReachedTarget:(id)arg1;
- (void)updateInFlightAnimationTick:(id)arg1;
- (void)begin;
- (void)updateTargetedDragPreview:(id)arg1 forDragItem:(id)arg2;
- (void)updateVisibleDroppedItems:(id)arg1;
@property(readonly, nonatomic) UIWindow *window;
- (id)initWithVisibleDroppedItems:(id)arg1 items:(id)arg2 forSource:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;

@end

