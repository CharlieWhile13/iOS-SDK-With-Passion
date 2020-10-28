//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKBubbleSet, MISSING_TYPE, NSDictionary, UIView;

@interface _GKBubbleFlowPathTransitionInfo : NSObject
{
    double _startTime;
    double _duration;
    GKBubbleSet *_bubbles;
    long long _focusBubbleType;
    UIView *_effectiveView;
    MISSING_TYPE *_bubbleStartPositionsByType[12];
    BOOL _couldUseFallbackAnimator;
    NSDictionary *_auxiliaryInfo;
    MISSING_TYPE *_bubbleEndPositionsByType[12];
    long long _newlyVisibleBubbles;
}

@property(retain, nonatomic) NSDictionary *auxiliaryInfo; // @synthesize auxiliaryInfo=_auxiliaryInfo;
@property(nonatomic) BOOL couldUseFallbackAnimator; // @synthesize couldUseFallbackAnimator=_couldUseFallbackAnimator;
@property(nonatomic) long long focusBubbleType; // @synthesize focusBubbleType=_focusBubbleType;
@property(nonatomic) long long newlyVisibleBubbles; // @synthesize newlyVisibleBubbles=_newlyVisibleBubbles;
@property(nonatomic) GKBubbleSet *bubbles; // @synthesize bubbles=_bubbles;
@property(nonatomic) UIView *effectiveView; // @synthesize effectiveView=_effectiveView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)description;
- (void)dealloc;
- (id)init;

@end

