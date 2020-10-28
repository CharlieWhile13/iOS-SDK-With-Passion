//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLResource-Protocol.h>

@protocol MTLBuffer, MTLResource, MTLTexture;

@protocol MTLTexture <MTLResource>
@property(readonly, nonatomic) CDStruct_a06f635e swizzle;
@property(readonly) BOOL allowGPUOptimizedContents;
@property(readonly) BOOL isSparse;
@property(readonly) NSUInteger tailSizeInBytes;
@property(readonly) NSUInteger firstMipmapInTail;
@property(readonly, getter=isFramebufferOnly) BOOL framebufferOnly;
@property(readonly) NSUInteger usage;
@property(readonly) NSUInteger arrayLength;
@property(readonly) NSUInteger sampleCount;
@property(readonly) NSUInteger mipmapLevelCount;
@property(readonly) NSUInteger depth;
@property(readonly) NSUInteger height;
@property(readonly) NSUInteger width;
@property(readonly) NSUInteger pixelFormat;
@property(readonly) NSUInteger textureType;
@property(readonly) NSUInteger iosurfacePlane;
@property(readonly) struct __IOSurface iosurface;
@property(readonly) NSUInteger bufferBytesPerRow;
@property(readonly) NSUInteger bufferOffset;
@property(readonly) id <MTLBuffer> buffer;
@property(readonly) NSUInteger parentRelativeSlice;
@property(readonly) NSUInteger parentRelativeLevel;
@property(readonly) id <MTLTexture> parentTexture;
@property(readonly) id <MTLResource> rootResource;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(NSUInteger)arg1;
- (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(NSUInteger)arg2 withBytes:(const void )arg3 bytesPerRow:(NSUInteger)arg4;
- (void)getBytes:(void )arg1 bytesPerRow:(NSUInteger)arg2 fromRegion:(CDStruct_caaed6bc)arg3 mipmapLevel:(NSUInteger)arg4;
- (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(NSUInteger)arg2 slice:(NSUInteger)arg3 withBytes:(const void )arg4 bytesPerRow:(NSUInteger)arg5 bytesPerImage:(NSUInteger)arg6;
- (void)getBytes:(void )arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 fromRegion:(CDStruct_caaed6bc)arg4 mipmapLevel:(NSUInteger)arg5 slice:(NSUInteger)arg6;
@end
