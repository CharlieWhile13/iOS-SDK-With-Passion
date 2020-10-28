//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDMixing-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDImageAdjustments : NSObject <NSCopying, NSMutableCopying, TSDMixing>
{
    double mExposure;
    double mSaturation;
    double mContrast;
    double mHighlights;
    double mShadows;
    double mSharpness;
    double mDenoise;
    double mTemperature;
    double mTint;
    double mBottomLevel;
    double mTopLevel;
    double mGamma;
    BOOL mEnhance;
    BOOL mRepresentsSageAdjustments;
}

+ (BOOL)canMixWithNilObjects;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)imageAdjustmentsWithoutEnhance;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL representsSageAdjustments;
@property(readonly, nonatomic) BOOL enhance;
@property(readonly, nonatomic) double gamma;
@property(readonly, nonatomic) double topLevel;
@property(readonly, nonatomic) double bottomLevel;
@property(readonly, nonatomic) double tint;
@property(readonly, nonatomic) double temperature;
@property(readonly, nonatomic) double denoise;
@property(readonly, nonatomic) double sharpness;
@property(readonly, nonatomic) double shadows;
@property(readonly, nonatomic) double highlights;
@property(readonly, nonatomic) double contrast;
@property(readonly, nonatomic) double saturation;
@property(readonly, nonatomic) double exposure;
- (id)init;
- (void)saveToArchive:(struct ImageAdjustmentsArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ImageAdjustmentsArchive )arg1 unarchiver:(id)arg2;
- (void)i_initFromDefaultArchive;

@end

