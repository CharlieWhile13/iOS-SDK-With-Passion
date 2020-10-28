//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface CEKLightingCubeAppearance : NSObject <NSCopying, NSMutableCopying>
{
    CGGradient _background;
    CGColor _topFill;
    CGGradient _topGlow;
    CGGradient _topMask;
    CGColor _bottomFill;
    CGGradient _bottomInnerGlow;
    CGGradient _bottomOuterGlow;
    CGGradient _bottomMask;
    CGColor _verticalFillColor;
    double _verticalFillFrontIntensity;
    double _verticalFillBackIntensity;
    CGGradient _topOver;
    CGColor _stroke;
}

+ (id)appearanceFrom:(id)arg1 to:(id)arg2 progress:(double)arg3;
@property(readonly, nonatomic) CGColor stroke; // @synthesize stroke=_stroke;
@property(readonly, nonatomic) CGGradient topOver; // @synthesize topOver=_topOver;
@property(readonly, nonatomic) double verticalFillFrontIntensity; // @synthesize verticalFillFrontIntensity=_verticalFillFrontIntensity;
@property(readonly, nonatomic) double verticalFillBackIntensity; // @synthesize verticalFillBackIntensity=_verticalFillBackIntensity;
@property(readonly, nonatomic) CGColor verticalFillColor; // @synthesize verticalFillColor=_verticalFillColor;
@property(readonly, nonatomic) CGGradient bottomMask; // @synthesize bottomMask=_bottomMask;
@property(readonly, nonatomic) CGGradient bottomOuterGlow; // @synthesize bottomOuterGlow=_bottomOuterGlow;
@property(readonly, nonatomic) CGGradient bottomInnerGlow; // @synthesize bottomInnerGlow=_bottomInnerGlow;
@property(readonly, nonatomic) CGColor bottomFill; // @synthesize bottomFill=_bottomFill;
@property(readonly, nonatomic) CGGradient topMask; // @synthesize topMask=_topMask;
@property(readonly, nonatomic) CGGradient topGlow; // @synthesize topGlow=_topGlow;
@property(readonly, nonatomic) CGColor topFill; // @synthesize topFill=_topFill;
@property(readonly, nonatomic) CGGradient background; // @synthesize background=_background;
- (void)dealloc;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithStroke:(CGColor )arg1;

@end

