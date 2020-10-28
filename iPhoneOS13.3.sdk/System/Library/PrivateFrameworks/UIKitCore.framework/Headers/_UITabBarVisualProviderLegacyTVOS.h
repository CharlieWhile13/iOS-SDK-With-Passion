//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITabBarVisualProvider.h>

@class UIMotionEffect, UIScrollView, UIView, _UIBarBackground, _UIBarBackgroundLayoutLegacy;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProviderLegacyTVOS : _UITabBarVisualProvider
{
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_accessoryView;
    UIScrollView *_itemsScrollView;
    UIView *_focusedItemHighlightView;
    UIMotionEffect *_focusedItemHighlightMotionEffect;
}

// - (void).cxx_destruct;
- (id)_focusedItemHighlightView;
- (void)_shim_updateTabBarItemView:(id)arg1;
- (void)_shim_layoutItemsOnly;
- (void)_shim_updateFocusHighlightVisibility;
- (void)_shim_setShadowHidden:(BOOL)arg1;
- (BOOL)_shim_shadowHidden;
- (void)_shim_setShadowAlpha:(double)arg1;
- (double)_shim_shadowAlpha;
- (id)_shim_accessoryView;
- (void)_shim_setAccessoryView:(id)arg1;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)_focusedItemHighlightViewIsVisible;
- (void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)arg1 visible:(BOOL)arg2;
- (void)_setFocusedItemHightlightVisible:(BOOL)arg1;
- (void)_updateFocusedItemHighlightFrame;
- (void)_updateHighlightMotionEffect;
- (id)preferredFocusedView;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateBackgroundGroupName;
- (void)_updateBackground;
- (void)_layoutTabBarItems;
- (void)_configureItems:(id)arg1;
- (id)_parentViewForItems;
- (void)_updateAccessoryView;
- (CGRect)_shadowFrameForBounds:(CGRect)arg1 height:(double)arg2;
- (CGRect)_layoutRegion;
- (CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (id)createViewForTabBarItem:(id)arg1;
- (void)changeLayout;
- (void)changeAppearance;
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(BOOL)arg5;
- (void)teardown;
- (void)prepare;

@end

