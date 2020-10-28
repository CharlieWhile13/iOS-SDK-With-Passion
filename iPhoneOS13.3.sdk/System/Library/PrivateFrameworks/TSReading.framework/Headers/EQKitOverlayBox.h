//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitBox.h>

@interface EQKitOverlayBox : EQKitBox
{
    EQKitBox *mBox;
    EQKitBox *mOverlayBox;
}

@property(readonly, nonatomic) EQKitBox *overlayBox; // @synthesize overlayBox=mOverlayBox;
@property(readonly, nonatomic) EQKitBox *box; // @synthesize box=mBox;
- (id)description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)p_getTransform:(CGAffineTransform )arg1 fromDescendant:(id)arg2;
- (BOOL)appendOpticalAlignToSpec:(struct Spec )arg1 offset:(CGPoint)arg2;
- (void)renderIntoContext:(CGContext )arg1 offset:(CGPoint)arg2;
- (CGRect)erasableBounds;
- (double)depth;
- (double)height;
- (double)width;
- (void)dealloc;
- (id)initWithBox:(id)arg1 overlayBox:(id)arg2;

@end

