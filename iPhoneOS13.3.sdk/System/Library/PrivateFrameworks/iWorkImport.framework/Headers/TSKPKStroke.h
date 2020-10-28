//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, PKInk, PKStroke;

__attribute__((visibility("hidden")))
@interface TSKPKStroke : NSObject <NSCopying>
{
    NSUInteger _hash;
    double _pencilAnnotationDrawingScale;
    PKStroke *_internalPencilKitStroke;
    NSArray *_locations;
}

+ (NSUInteger)p_pointsCountOfStroke:(id)arg1;
+ (CGPoint)p_locationAtIndex:(NSUInteger)arg1 ofStroke:(id)arg2;
+ (id)p_copyOfPKStroke:(id)arg1;
+ (id)substrokeOfStroke:(id)arg1 withRange:(NSRange)arg2;
+ (id)strokesForPKStrokes:(id)arg1 withPencilAnnotationDrawingScale:(double)arg2;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) PKStroke *internalPencilKitStroke; // @synthesize internalPencilKitStroke=_internalPencilKitStroke;
@property(readonly, nonatomic) double pencilAnnotationDrawingScale; // @synthesize pencilAnnotationDrawingScale=_pencilAnnotationDrawingScale;
// - (void).cxx_destruct;
- (BOOL)isUnderlineStrokeWithVerticalTextLayout:(BOOL)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)strokeByTransformingStrokeWithTransform:(CGAffineTransform)arg1;
@property(readonly, nonatomic) PKStroke *pencilKitStroke;
- (void)enumerateUnscaledPointsWithDistanceStep:(double)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)subStrokeFromStartIndex:(NSUInteger)arg1 toEndIndex:(NSUInteger)arg2 adjustingStart:(BOOL)arg3 andAdjustingEnd:(BOOL)arg4 toEdgesOfRect:(CGRect)arg5;
@property(readonly, nonatomic) NSUInteger pointsCount;
- (id)substrokeWithRange:(NSRange)arg1;
- (double)timestampAtIndex:(NSUInteger)arg1;
- (CGPoint)unscaledLocationAtIndex:(NSUInteger)arg1;
- (CGPoint)locationAtIndex:(NSUInteger)arg1;
- (CGRect)strokePointsFrame;
- (CGRect)unscaledStrokePointsFrame;
- (CGRect)p_incorrectPencilKitFastFrame;
@property(readonly, nonatomic) CGRect incorrectUnscaledFastFrame;
@property(readonly, nonatomic) PKInk *ink;
- (double)timestampForLastPointInStroke;
- (double)timestampForFirstPointInStroke;
@property(readonly, nonatomic) double timestamp;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPKStroke:(id)arg1 pencilAnnotationDrawingScale:(double)arg2;

@end

