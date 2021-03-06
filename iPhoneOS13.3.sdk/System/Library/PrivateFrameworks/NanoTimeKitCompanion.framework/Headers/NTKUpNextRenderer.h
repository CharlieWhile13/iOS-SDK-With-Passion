//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARenderer;
@protocol MTLTexture;

@interface NTKUpNextRenderer : NSObject
{
    CARenderer *_renderer;
    struct __IOSurface _ioSurface;
    id <MTLTexture> _texture;
}

// - (void).cxx_destruct;
- (void)dealloc;
- (struct __IOSurface )newSurfaceWithWidth:(double)arg1 height:(double)arg2;
- (id)renderView:(id)arg1;

@end

