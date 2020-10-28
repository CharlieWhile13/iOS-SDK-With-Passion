//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VideoUtil : NSObject
{
}

+ (unsigned int)videoCodecForPayload:(int)arg1;
+ (struct __CFString )typeIdentifierForImageType:(int)arg1;
+ (long long)compareVideoAspectRatioSizeA:(CGSize)arg1 toSizeB:(CGSize)arg2;
+ (int)setupBufferPool:(struct __CVPixelBufferPool )arg1 width:(double)arg2 height:(double)arg3;
+ (CGRect)adjustFaceBounds:(CGRect)arg1 fromOriginalBufferSize:(CGSize)arg2 toCroppedBufferSize:(CGSize)arg3;
+ (void)adjustFaceMetadataForPixelBuffer:(struct __CVBuffer )arg1 originalWidth:(NSUInteger)arg2 originalHeight:(NSUInteger)arg3;
+ (long long)videoResolutionForWidth:(int)arg1 height:(int)arg2;
+ (CGSize)getBestCaptureSizeForEncodingSize:(CGSize)arg1;
+ (CGSize)sizeForVideoResolution:(long long)arg1;
+ (id)convertPixelBuffer:(struct __CVBuffer )arg1 toImageType:(int)arg2 withAssetIdentifier:(id)arg3 cameraStatusBits:(unsigned char)arg4;

@end

