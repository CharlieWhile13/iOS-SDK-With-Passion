//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <ControlCenterUIKit/CCUIContentModuleTopLevelGestureProvider-Protocol.h>
#import <ControlCenterUIKit/CCUIGroupRendering-Protocol.h>
#import <ControlCenterUIKit/CCUITouchContinuationProviding-Protocol.h>

@class CALayer, CCUICAPackageDescription, CCUICAPackageView, MTVisualStylingProvider, NSArray, NSString, UIImage, UIImageView;

@interface CCUIBaseSliderView : UIControl <CCUIGroupRendering, CCUITouchContinuationProviding, CCUIContentModuleTopLevelGestureProvider>
{
    UIImageView *_glyphImageView;
    CCUICAPackageView *_glyphPackageView;
    CCUICAPackageView *_compensatingGlyphPackageView;
    MTVisualStylingProvider *_visualStylingProvider;
    BOOL _didConfigureGlyphPackageView;
    BOOL _glyphVisible;
    BOOL _interactiveWhenUnexpanded;
    float _value;
    UIImage *_glyphImage;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    double _glyphScale;
}

@property(nonatomic) double glyphScale; // @synthesize glyphScale=_glyphScale;
@property(nonatomic, getter=isInteractiveWhenUnexpanded) BOOL interactiveWhenUnexpanded; // @synthesize interactiveWhenUnexpanded=_interactiveWhenUnexpanded;
@property(nonatomic, getter=isGlyphVisible) BOOL glyphVisible; // @synthesize glyphVisible=_glyphVisible;
@property(retain, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property(retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // @synthesize glyphPackageDescription=_glyphPackageDescription;
@property(retain, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(nonatomic) float value; // @synthesize value=_value;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CGPoint glyphCenter;
- (void)_setGlyphState:(id)arg1;
- (void)_configureCompensatingGlyphPackageView:(id)arg1;
- (void)_configureGlyphPackageView:(id)arg1;
- (id)_newGlyphPackageView;
- (void)_updateGlyphImageViewVisualStyling;
- (id)viewForTouchContinuation;
@property(readonly, nonatomic) NSArray *topLevelBlockingGestureRecognizers;
@property(readonly, nonatomic) CALayer *punchOutRootLayer;
@property(readonly, nonatomic) NSArray *punchOutRootLayers;
@property(readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (double)sliderLengthForValue:(float)arg1;
- (double)sliderHeightForValue:(float)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

