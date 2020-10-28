//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"


@class NSArray, NSLayoutConstraint, UIInterfaceAction, UILabel;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionLabelsPropertyView : UIView <UIInterfaceActionDisplayPropertyObserver>
{
    NSLayoutConstraint *_leadingLabelLeadingConstraint;
    NSLayoutConstraint *_leadingLabelVerticalPositionConstraint;
    NSLayoutConstraint *_trailingLabelTrailingConstraint;
    NSLayoutConstraint *_trailingLabelVerticalPositionConstraint;
    NSLayoutConstraint *_interLabelSpacingConstraint;
    UILabel *_classificationLabel;
    UILabel *_titleLabel;
    NSArray *_labelConstraints;
    UIInterfaceAction *_action;
}

@property(readonly, nonatomic) UIInterfaceAction *action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (id)_newLabel;
- (id)_classificationLabelIfVisible;
- (void)_reloadContentClassificationLabelDisplayProperties;
- (void)_reloadContentForTitleDisplayProperties;
- (id)_interfaceActionViewState;
- (void)_applyVisualStyleToLabels;
- (void)_applyVisualStyle;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)tintColorDidChange;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (id)_visualStyle;
- (void)dealloc;
- (id)initWithAction:(id)arg1;

@end

