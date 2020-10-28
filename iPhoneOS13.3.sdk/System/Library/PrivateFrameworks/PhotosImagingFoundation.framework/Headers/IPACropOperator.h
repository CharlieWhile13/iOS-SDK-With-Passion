//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPACropOperator : IPAGeometryOperator
{
    CGRect _cropRect;
}

+ (id)operatorWithIdentifier:(id)arg1 cropRect:(CGRect)arg2;
+ (id)operatorWithCropRect:(CGRect)arg1;
- (id)description;
- (id)transformForGeometry:(id)arg1;

@end

