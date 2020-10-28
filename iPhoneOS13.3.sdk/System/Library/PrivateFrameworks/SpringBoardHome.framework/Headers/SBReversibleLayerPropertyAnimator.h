//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSInvalidatable-Protocol.h>

@class BSAnimationSettings, CALayer, NSMutableArray, NSString;

@interface SBReversibleLayerPropertyAnimator : NSObject <CAAnimationDelegate, BSInvalidatable>
{
    BOOL _started;
    BOOL _invalidated;
    BOOL _reversedWithNewSettings;
    CALayer *_layer;
    NSString *_keyPath;
    double _initialValue;
    double _targetValue;
    BSAnimationSettings *_currentAnimationSettings;
    id /* CDUnknownBlockType */ _completion;
    NSUInteger _reversalCount;
    NSUInteger _outstandingCAAnimationCompletionCount;
    NSString *_forwardAnimationKey;
    NSString *_forwardOffsetAnimationKey;
    NSMutableArray *_reversalAnimationKeys;
}

@property(retain, nonatomic) NSMutableArray *reversalAnimationKeys; // @synthesize reversalAnimationKeys=_reversalAnimationKeys;
@property(copy, nonatomic) NSString *forwardOffsetAnimationKey; // @synthesize forwardOffsetAnimationKey=_forwardOffsetAnimationKey;
@property(copy, nonatomic) NSString *forwardAnimationKey; // @synthesize forwardAnimationKey=_forwardAnimationKey;
@property(nonatomic) NSUInteger outstandingCAAnimationCompletionCount; // @synthesize outstandingCAAnimationCompletionCount=_outstandingCAAnimationCompletionCount;
@property(nonatomic, getter=hasReversedWithNewSettings) BOOL reversedWithNewSettings; // @synthesize reversedWithNewSettings=_reversedWithNewSettings;
@property(nonatomic) NSUInteger reversalCount; // @synthesize reversalCount=_reversalCount;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(copy, nonatomic) BSAnimationSettings *currentAnimationSettings; // @synthesize currentAnimationSettings=_currentAnimationSettings;
@property(nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic, getter=hasStarted) BOOL started; // @synthesize started=_started;
@property(readonly, nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@property(readonly, nonatomic) double initialValue; // @synthesize initialValue=_initialValue;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
// - (void).cxx_destruct;
- (void)_fireCompletionIfNecessary;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (double)_outputPercentCompleteForAnimation:(id)arg1 inputPercentComplete:(double)arg2;
- (double)_inputPercentCompleteForAnimation:(id)arg1 outputPercentComplete:(double)arg2 precision:(double)arg3;
- (double)_percentCompleteForAnimation:(id)arg1 time:(double)arg2;
- (id)_animationWithSettings:(id)arg1;
- (id)_additiveAnimationForKeyPath:(id)arg1 withSettings:(id)arg2 beginTime:(id)arg3 fromRelativeValue:(double)arg4 toRelativeValue:(double)arg5;
- (void)_animateFromRelativeValue:(double)arg1 toRelativeValue:(double)arg2 withSettings:(id)arg3 beginTime:(id)arg4;
- (void)_animateFromValue:(double)arg1 toValue:(double)arg2 withSettings:(id)arg3 beginTime:(id)arg4;
- (void)_reverseWithSettings:(id)arg1 directionChangeSettings:(id)arg2 headStart:(double)arg3;
- (void)reverseWithSettings:(id)arg1 directionChangeSettings:(id)arg2 headStart:(double)arg3;
- (void)reverse;
@property(readonly, nonatomic, getter=hasReversed) BOOL reversed;
@property(readonly, nonatomic, getter=isGoingForward) BOOL goingForward;
- (void)animateWithSettings:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)invalidate;
- (id)initWithLayer:(id)arg1 keyPath:(id)arg2 initialValue:(double)arg3 targetValue:(double)arg4;

@end

