//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAImageTransform-Protocol.h>

@protocol IPAImageGeometry;

@interface IPAImageTransform : NSObject <IPAImageTransform>
{
    id <IPAImageGeometry> _inputGeometry;
    id <IPAImageGeometry> _intrinsicGeometry;
}

+ (id)compositeTransforms:(id)arg1;
+ (id)identityTransformForGeometry:(id)arg1;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)canAlignToPixelsExactly;
- (struct Vector2d)mapVector:(struct Vector2d)arg1;
- (id)inverseTransform;
- (id)intrinsicGeometry;
- (CGPoint)mapPoint:(CGPoint)arg1;
- (id)inputGeometry;
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2;
- (id)init;

@end

