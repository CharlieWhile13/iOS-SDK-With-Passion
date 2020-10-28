//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDKnobTracker.h>

@class NSTimer, TSWPEditingController, TSWPTextMagnifierRanged;

@interface TSWPTextKnobTracker : TSDKnobTracker
{
    TSWPEditingController *_editingController;
    NSRange _rangeAtStart;
    int _selectionType;
    NSUInteger _headCharAtStart;
    NSUInteger _tailCharAtStart;
    BOOL _multiTap;
    NSTimer *_textMagnifierTimer;
    TSWPTextMagnifierRanged *_magnifier;
    BOOL _doneTracking;
    BOOL _knobMoved;
    BOOL _didShowMagnifier;
    BOOL _ignoreNextCall;
}

+ (const struct TSWPLineFragment )p_lineFragmentForCharIndex:(NSUInteger)arg1 knobTag:(NSUInteger)arg2 selectionType:(int)arg3 rep:(id)arg4;
@property(nonatomic) BOOL ignoreNextCall; // @synthesize ignoreNextCall=_ignoreNextCall;
@property(readonly, nonatomic) BOOL didShowMagnifier; // @synthesize didShowMagnifier=_didShowMagnifier;
@property(retain, nonatomic) TSWPEditingController *editingController; // @synthesize editingController=_editingController;
- (double)unscaledStartAutoscrollThreshold;
- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(id)arg1;
- (id)icc;
- (void)updateAfterAutoscroll:(id)arg1 atPoint:(CGPoint)arg2;
- (NSRange)adjustSelectionRange:(NSRange)arg1 forStorage:(id)arg2;
- (BOOL)fixupWordSelection;
- (BOOL)shouldHideOtherKnobs;
- (NSUInteger)p_charIndexForKnob:(NSUInteger)arg1 selection:(id)arg2;
- (void)p_fixUpWordSelection;
- (BOOL)p_newTailCharIndex:(NSUInteger)arg1 isPastHeadCharIndex:(NSUInteger)arg2 rep:(id)arg3;
- (BOOL)p_newHeadCharIndex:(NSUInteger)arg1 isPastTailCharIndex:(NSUInteger)arg2 rep:(id)arg3;
- (void)p_setSelectionFromPoint:(CGPoint)arg1;
- (void)p_stopMagnifyingWithAnimation:(BOOL)arg1;
- (void)p_magnifyWithTarget:(id)arg1 magnificationPoint:(CGPoint)arg2 offset:(CGPoint)arg3 animated:(BOOL)arg4 delayed:(BOOL)arg5;
- (void)p_startMagnifying;
- (id)p_rangedMagnifier;
- (BOOL)p_isMagnifyingVerticalText;
- (void)p_cleanupWhenDone;
- (void)endMovingKnob;
- (void)moveKnobToCanvasPosition:(CGPoint)arg1;
- (double)delay;
- (void)dealloc;
- (id)initWithRep:(id)arg1 knob:(id)arg2;

@end

