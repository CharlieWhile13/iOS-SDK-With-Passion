//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PIAdjustmentController.h>

@interface PICropAdjustmentController : PIAdjustmentController
{
}

+ (id)originalCropKey;
+ (id)smartKey;
+ (id)yawKey;
+ (id)pitchKey;
+ (id)angleKey;
+ (id)constraintHeightKey;
+ (id)constraintWidthKey;
+ (id)heightKey;
+ (id)widthKey;
+ (id)yOriginKey;
+ (id)xOriginKey;
@property(nonatomic, getter=isOriginalCrop) BOOL originalCrop;
@property(nonatomic, getter=isSmart) BOOL smart;
- (BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2;
@property(nonatomic) BOOL autoCropped;
@property(nonatomic) double yawRadians;
@property(nonatomic) double yaw;
@property(nonatomic) double pitchRadians;
@property(nonatomic) double pitch;
@property(nonatomic) double angleRadians;
@property(nonatomic) double angle;
@property(nonatomic) long long constraintHeight;
@property(nonatomic) long long constraintWidth;
@property(nonatomic) CGRect cropRect;
- (BOOL)isCropIdentityForImageSize:(CGSize)arg1;
- (BOOL)isCropConstrained;
- (BOOL)isGeometryIdentityForImageSize:(CGSize)arg1;
- (id)visualInputKeys;
- (id)initWithAdjustment:(id)arg1;

@end

