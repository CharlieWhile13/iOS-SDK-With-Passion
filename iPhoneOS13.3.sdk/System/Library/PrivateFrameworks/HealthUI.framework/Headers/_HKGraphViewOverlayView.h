//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIGraphicsImageRenderer;

@interface _HKGraphViewOverlayView : UIImageView
{
    UIGraphicsImageRenderer *_imageRenderer;
}

@property(retain, nonatomic) UIGraphicsImageRenderer *imageRenderer; // @synthesize imageRenderer=_imageRenderer;
// - (void).cxx_destruct;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)drawContentUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_updateRendererSize:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

