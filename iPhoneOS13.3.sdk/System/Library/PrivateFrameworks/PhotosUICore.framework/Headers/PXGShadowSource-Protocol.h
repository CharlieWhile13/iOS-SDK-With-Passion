//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class NSShadow, PXGLayout;

@protocol PXGShadowSource <PXGLayoutContentSource>
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (NSShadow *)shadowForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
@end

