//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CAMThumbnailGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *__generationQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_generationQueue; // @synthesize _generationQueue=__generationQueue;
// - (void).cxx_destruct;
- (CGImage )newBGRAImageOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingPixelBuffer:(struct __CVBuffer )arg3;
- (CGImage )newBGRAImageInOrientation:(long long)arg1 usingPixelBuffer:(struct __CVBuffer )arg2;
- (id)newJPEGDataInOrientation:(long long)arg1 usingPixelBuffer:(struct __CVBuffer )arg2;
- (CGImage )newBGRAImageInOrientation:(long long)arg1 usingSurface:(void )arg2;
- (CGImage )newBGRAImageOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingSurface:(void )arg3;
- (id)_neededColorspacePropertiesFromMetadata:(id)arg1;
- (id)newJPEGDataInOrientation:(long long)arg1 usingSurface:(void )arg2 withMetadata:(id)arg3;
- (id)newJPEGDataOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingSurface:(void )arg3 withMetadata:(id)arg4;
- (struct __CVBuffer )_newRotatedPixelBuffer:(struct __CVBuffer )arg1 withOrientation:(long long)arg2;
- (struct __CVBuffer )_newThumbnailOfFormat:(long long)arg1 inOrientation:(long long)arg2 withPixelFormat:(unsigned int)arg3 usingPixelBuffer:(struct __CVBuffer )arg4;
- (struct __CVBuffer )_newThumbnailOfSize:(CGSize)arg1 inOrientation:(long long)arg2 withPixelFormat:(unsigned int)arg3 usingPixelBuffer:(struct __CVBuffer )arg4;
- (void)dealloc;
- (id)init;

@end

