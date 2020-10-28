//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/CEKBadgeViewDelegate-Protocol.h>

@class CAMElapsedTimeView, CAMFlashBadge, CAMFocusLockBadge, CAMLivePhotoBadge, NSMutableDictionary, NSString;
@protocol CAMBadgeTrayDelegate;

@interface CAMBadgeTray : UIView <CEKBadgeViewDelegate>
{
    id <CAMBadgeTrayDelegate> _delegate;
    NSUInteger _visibleBadges;
    NSString *_contentSize;
    NSMutableDictionary *__badgeMap;
}

@property(readonly, nonatomic) NSMutableDictionary *_badgeMap; // @synthesize _badgeMap=__badgeMap;
@property(retain, nonatomic) NSString *contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) NSUInteger visibleBadges; // @synthesize visibleBadges=_visibleBadges;
@property(nonatomic) __weak id <CAMBadgeTrayDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)badgeViewDidChangeIntrinsicContentSize:(id)arg1;
- (void)_updateBadgesVisibilityForVisibleBadges:(NSUInteger)arg1;
- (void)_loadBadgesIfNeededForTypes:(NSUInteger)arg1;
- (void)_forBadgeTypeInBadgeTypes:(NSUInteger)arg1 do:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)_badgeFontStyle;
- (id)_createControlForType:(NSUInteger)arg1;
@property(readonly, nonatomic) CAMElapsedTimeView *elapsedTimeView;
@property(readonly, nonatomic) CAMFocusLockBadge *focusLockBadge;
@property(readonly, nonatomic) CAMLivePhotoBadge *livePhotoBadge;
@property(readonly, nonatomic) CAMFlashBadge *flashBadge;
- (void)setVisibleBadges:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)_layoutBadges:(NSUInteger)arg1 withVisibleBadges:(NSUInteger)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

