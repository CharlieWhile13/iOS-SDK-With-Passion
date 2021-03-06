//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImage, VUIScoreboardLayout;
@protocol VUIScorecardViewDelegate;

__attribute__((visibility("hidden")))
@interface VUIScorecardView : UIView
{
    BOOL _didCalculatedSize;
    BOOL _delegateRespondsToBackgroundImageForScorecardViewMaterial;
    BOOL _delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex;
    id <VUIScorecardViewDelegate> _delegate;
    VUIScoreboardLayout *_scoreboardLayout;
    double _interitemSpacing;
    NSArray *_rowScoreValueSizes;
    NSArray *_columnWidths;
    NSArray *_rowHeights;
    UIImage *_darkMaterialImage;
    CGSize _scorecardSize;
}

@property(nonatomic) BOOL delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex; // @synthesize delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex=_delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex;
@property(nonatomic) BOOL delegateRespondsToBackgroundImageForScorecardViewMaterial; // @synthesize delegateRespondsToBackgroundImageForScorecardViewMaterial=_delegateRespondsToBackgroundImageForScorecardViewMaterial;
@property(retain, nonatomic) UIImage *darkMaterialImage; // @synthesize darkMaterialImage=_darkMaterialImage;
@property(retain, nonatomic) NSArray *rowHeights; // @synthesize rowHeights=_rowHeights;
@property(retain, nonatomic) NSArray *columnWidths; // @synthesize columnWidths=_columnWidths;
@property(retain, nonatomic) NSArray *rowScoreValueSizes; // @synthesize rowScoreValueSizes=_rowScoreValueSizes;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) CGSize scorecardSize; // @synthesize scorecardSize=_scorecardSize;
@property(nonatomic) BOOL didCalculatedSize; // @synthesize didCalculatedSize=_didCalculatedSize;
@property(retain, nonatomic) VUIScoreboardLayout *scoreboardLayout; // @synthesize scoreboardLayout=_scoreboardLayout;
@property(nonatomic) __weak id <VUIScorecardViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (CGSize)_calculateMetricsOfScorecard;
- (void)drawRect:(CGRect)arg1;
- (void)_calculateColumnSpacing;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)invalidateData;

@end

