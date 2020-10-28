//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUImageModifier.h>

@class UIGradient;

@interface SUReflectionImageModifier : SUImageModifier
{
    UIGradient *_gradient;
    double _reflectionHeight;
}

@property(nonatomic) double reflectionHeight; // @synthesize reflectionHeight=_reflectionHeight;
@property(retain, nonatomic) UIGradient *gradient; // @synthesize gradient=_gradient;
- (void)drawAfterImageForContext:(CGContext )arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3;
- (CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3;
- (CGSize)finalSizeForSize:(CGSize)arg1 originalSize:(CGSize)arg2;
- (void)dealloc;

@end

