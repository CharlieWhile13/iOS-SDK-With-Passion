//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NCNotificationListSectionHeaderView, NSString, UIView, _UILegibilitySettings;

@protocol NCNotificationListSectionHeaderViewDelegate <NSObject>
- (_UILegibilitySettings *)legibilitySettingsForSectionHeaderView:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidDismissForceTouchView:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidPresentForceTouchView:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidBeginForceTouchInteraction:(NCNotificationListSectionHeaderView *)arg1;
- (UIView *)containerViewForHeaderViewPreviewInteractionPresentedContent:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidReceiveClearAllAction:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderView:(NCNotificationListSectionHeaderView *)arg1 didReceiveClearActionForSectionIdentifier:(NSString *)arg2;
- (void)sectionHeaderViewDidTransitionToClearState:(NCNotificationListSectionHeaderView *)arg1;
@end
