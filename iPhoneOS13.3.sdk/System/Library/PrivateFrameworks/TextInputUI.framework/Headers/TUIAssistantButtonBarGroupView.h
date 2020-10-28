//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIBarButtonItemGroup, _UIButtonBarButtonVisualProvider;
@protocol TUIButtonBarViewProvider;

@interface TUIAssistantButtonBarGroupView : UIView
{
    NSMutableArray *_visibleButtons;
    BOOL _collapsed;
    UIBarButtonItemGroup *_barButtonItemGroup;
    double _itemSpacing;
    id <TUIButtonBarViewProvider> _buttonProvider;
    _UIButtonBarButtonVisualProvider *_visualProvider;
}

@property(retain, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;
@property(nonatomic) __weak id <TUIButtonBarViewProvider> buttonProvider; // @synthesize buttonProvider=_buttonProvider;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic, getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property(retain, nonatomic) UIBarButtonItemGroup *barButtonItemGroup; // @synthesize barButtonItemGroup=_barButtonItemGroup;
// - (void).cxx_destruct;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)layoutSubviews;
- (id)_buttonBarItemViewForBarButtonItem:(id)arg1;
@property(readonly, nonatomic) NSArray *visibleButtons;
- (void)_ensureVisibleButtonsForVisibleItems;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (CGSize)_preferredSizeForItems:(id)arg1 fittingWidth:(double)arg2;
@property(readonly, nonatomic) BOOL containsFlexibleItems;
- (id)_visibleItems;
- (id)_visibleItemsAllowingCollapse:(BOOL)arg1;
- (BOOL)_canBeCollapsed;
- (id)initWithBarButtonItemGroup:(id)arg1 visualProvider:(id)arg2 buttonProvider:(id)arg3;

@end

