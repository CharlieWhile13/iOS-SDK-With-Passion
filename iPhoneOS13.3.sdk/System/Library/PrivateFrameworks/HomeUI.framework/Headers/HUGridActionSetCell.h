//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridCell.h>

#import <HomeUI/HUAccessoryViewCellProtocol-Protocol.h>

@class HFItem, HUGridActionSetTitleAndDescriptionView, HUGridSceneCellLayoutOptions, HUIconView, HUPieProgressView, NAFuture, NSArray, UIView;

@interface HUGridActionSetCell : HUGridCell <HUAccessoryViewCellProtocol>
{
    HFItem *_item;
    NAFuture *_executeActionSetFuture;
    UIView *_accessoryView;
    HUGridActionSetTitleAndDescriptionView *_titleAndDescriptionView;
    HUGridSceneCellLayoutOptions *_sceneCellLayoutOptions;
    HUIconView *_iconView;
    HUPieProgressView *_progressView;
    NSArray *_actionSetCellConstraints;
    NAFuture *_internalExecuteActionSetFuture;
}

+ (Class)layoutOptionsClass;
+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) NAFuture *internalExecuteActionSetFuture; // @synthesize internalExecuteActionSetFuture=_internalExecuteActionSetFuture;
@property(retain, nonatomic) NSArray *actionSetCellConstraints; // @synthesize actionSetCellConstraints=_actionSetCellConstraints;
@property(retain, nonatomic) HUPieProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak HUGridSceneCellLayoutOptions *sceneCellLayoutOptions; // @synthesize sceneCellLayoutOptions=_sceneCellLayoutOptions;
@property(retain, nonatomic) HUGridActionSetTitleAndDescriptionView *titleAndDescriptionView; // @synthesize titleAndDescriptionView=_titleAndDescriptionView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) NAFuture *executeActionSetFuture; // @synthesize executeActionSetFuture=_executeActionSetFuture;
- (void)setItem:(id)arg1;
- (id)item;
// - (void).cxx_destruct;
- (void)updateConstraints;
- (void)_invalidateConstraints;
- (void)_updateLabelsWithTitle:(id)arg1 description:(id)arg2;
- (void)_updateLabels;
- (void)layoutOptionsDidChange;
- (void)updateUIWithAnimation:(BOOL)arg1;
- (void)_setupActionSetCell;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

