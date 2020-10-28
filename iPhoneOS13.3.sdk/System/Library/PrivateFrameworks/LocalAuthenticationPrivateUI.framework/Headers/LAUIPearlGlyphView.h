//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIColor;
@protocol LAUIPearlGlyphViewDelegate;

@interface LAUIPearlGlyphView : UIView
{
    BOOL _inApplicationContext;
    BOOL _hideFace;
    BOOL _paused;
    BOOL _feedbackEnabled;
    BOOL _wireframeEnabled;
    long long _style;
    UIColor *_finishedColor;
    long long _state;
    CALayer *_contentLayer;
    id <LAUIPearlGlyphViewDelegate> _delegate;
    CDStruct_14d5dc5e _modelTransform;
}

+ (id)sharedStaticResources;
@property(nonatomic) CDStruct_14d5dc5e modelTransform; // @synthesize modelTransform=_modelTransform;
@property(nonatomic, getter=isWireframeEnabled) BOOL wireframeEnabled; // @synthesize wireframeEnabled=_wireframeEnabled;
@property(nonatomic) __weak id <LAUIPearlGlyphViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(nonatomic) BOOL feedbackEnabled; // @synthesize feedbackEnabled=_feedbackEnabled;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) BOOL hideFace; // @synthesize hideFace=_hideFace;
@property(readonly, nonatomic) UIColor *finishedColor; // @synthesize finishedColor=_finishedColor;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) BOOL inApplicationContext; // @synthesize inApplicationContext=_inApplicationContext;
// - (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;

@end

