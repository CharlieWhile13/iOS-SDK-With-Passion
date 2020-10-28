//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLExpandedPlatterView.h>

#import <UserNotificationsUIKit/NCCustomContentContainingLookView-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationContentViewDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationStaticContentAccepting-Protocol.h>

@class NCNotificationContentView, NSString, UITapGestureRecognizer;

@interface NCNotificationLongLookView : PLExpandedPlatterView <UIGestureRecognizerDelegate, NCNotificationContentViewDelegate, NCNotificationStaticContentAccepting, NCCustomContentContainingLookView>
{
    NCNotificationContentView *_notificationContentView;
    UITapGestureRecognizer *_lookViewTapGestureRecognizer;
    BOOL _hidesNotificationContent;
    NSUInteger _customContentLocation;
}

@property(nonatomic) BOOL hidesNotificationContent; // @synthesize hidesNotificationContent=_hidesNotificationContent;
@property(nonatomic) NSUInteger customContentLocation; // @synthesize customContentLocation=_customContentLocation;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)adjustForContentSizeCategoryChange;
@property(nonatomic) BOOL adjustsFontForContentSizeCategory;
- (void)notificationContentView:(id)arg1 willInteractWithURL:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(nonatomic) NSUInteger maximumNumberOfSecondaryLargeTextLines;
@property(nonatomic) NSUInteger maximumNumberOfSecondaryTextLines;
@property(nonatomic) NSUInteger maximumNumberOfPrimaryLargeTextLines;
@property(nonatomic) NSUInteger maximumNumberOfPrimaryTextLines;
- (BOOL)_lookViewTapGestureRecognizerShouldReceiveTouch:(id)arg1;
- (void)layoutSubviews;
- (void)_layoutCustomContentViewInRelationToContentView;
- (void)_layoutCustomContentView;
- (void)_layoutNotificationContentView;
- (CGSize)_contentViewSize;
- (CGRect)_mainContentViewFrame;
- (CGRect)_actionsViewFrame;
- (void)_configureLookViewTapGestureRecognizerIfNecessary;
- (void)_configureNotificationContentViewIfNecessary;
- (void)_configureCustomContentView;
- (long long)lookStyle;
- (CGSize)_contentSizeThatFitsContentWithSizeExcludingActions:(CGSize)arg1;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *primarySubtitleText;
@property(copy, nonatomic) NSString *primaryText;
- (void)_updateTopMargin;
@property(nonatomic) CGSize customContentSize;
@property(readonly, nonatomic) UITapGestureRecognizer *lookViewTapGestureRecognizer;

@end

