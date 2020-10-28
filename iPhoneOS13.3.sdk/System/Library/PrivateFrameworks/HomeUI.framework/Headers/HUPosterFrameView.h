//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HFPosterFrameImageObserver-Protocol.h>

@class CALayer, HMCameraClip, UIActivityIndicatorView;

@interface HUPosterFrameView : UIView <HFPosterFrameImageObserver>
{
    BOOL _loading;
    BOOL _requestInProgress;
    BOOL _shouldShowLineSeparator;
    UIActivityIndicatorView *_inProgressSpinner;
    CALayer *_posterFrameLayer;
    CALayer *_lineSeparator;
    HMCameraClip *_clip;
    double _timeOffset;
}

+ (id)posterFrameView;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(nonatomic) __weak HMCameraClip *clip; // @synthesize clip=_clip;
@property(retain, nonatomic) CALayer *lineSeparator; // @synthesize lineSeparator=_lineSeparator;
@property(retain, nonatomic) CALayer *posterFrameLayer; // @synthesize posterFrameLayer=_posterFrameLayer;
@property(retain, nonatomic) UIActivityIndicatorView *inProgressSpinner; // @synthesize inProgressSpinner=_inProgressSpinner;
@property(nonatomic) BOOL shouldShowLineSeparator; // @synthesize shouldShowLineSeparator=_shouldShowLineSeparator;
@property(nonatomic, getter=isRequestInProgress) BOOL requestInProgress; // @synthesize requestInProgress=_requestInProgress;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
// - (void).cxx_destruct;
- (void)displayImageForClip:(id)arg1 atTimeOffset:(double)arg2;
- (void)manager:(id)arg1 didFindImage:(id)arg2 atTimeOffset:(double)arg3 forClip:(id)arg4;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;

@end

