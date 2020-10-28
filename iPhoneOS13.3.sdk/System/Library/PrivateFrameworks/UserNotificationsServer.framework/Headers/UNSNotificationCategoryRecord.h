//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UNSNotificationCategoryRecord : NSObject
{
    BOOL _hasCustomDismissAction;
    BOOL _hasCustomSilenceAction;
    BOOL _shouldAllowInCarPlay;
    BOOL _shouldAllowSpoken;
    BOOL _privacyOptionShowTitle;
    BOOL _privacyOptionShowSubtitle;
    BOOL _preventAutomaticRemovalFromRecent;
    BOOL _revealAdditionalContentWhenPresented;
    BOOL _preventAutomaticLock;
    BOOL _preventDismissWhenClosed;
    BOOL _presentFullScreenAlertOverList;
    BOOL _shouldAllowActionsInCarPlay;
    BOOL _shouldAllowPersistentBannersInCarPlay;
    BOOL _playMediaWhenRaised;
    BOOL _preventClearFromList;
    BOOL _alwaysDisplayNotificationsIndicator;
    BOOL _suppressDelayForForwardedNotifications;
    BOOL _suppressDismissActionInCarPlay;
    NSArray *_actions;
    NSString *_identifier;
    NSArray *_intentIdentifiers;
    NSArray *_minimalActions;
    NSString *_privateBody;
    NSString *_summaryFormat;
    NSString *_backgroundStyle;
    NSString *_listPriority;
}

@property(copy, nonatomic) NSString *listPriority; // @synthesize listPriority=_listPriority;
@property(copy, nonatomic) NSString *backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(copy, nonatomic) NSString *summaryFormat; // @synthesize summaryFormat=_summaryFormat;
@property(copy, nonatomic) NSString *privateBody; // @synthesize privateBody=_privateBody;
@property(nonatomic) BOOL suppressDismissActionInCarPlay; // @synthesize suppressDismissActionInCarPlay=_suppressDismissActionInCarPlay;
@property(nonatomic) BOOL suppressDelayForForwardedNotifications; // @synthesize suppressDelayForForwardedNotifications=_suppressDelayForForwardedNotifications;
@property(nonatomic) BOOL alwaysDisplayNotificationsIndicator; // @synthesize alwaysDisplayNotificationsIndicator=_alwaysDisplayNotificationsIndicator;
@property(nonatomic) BOOL preventClearFromList; // @synthesize preventClearFromList=_preventClearFromList;
@property(nonatomic) BOOL playMediaWhenRaised; // @synthesize playMediaWhenRaised=_playMediaWhenRaised;
@property(nonatomic) BOOL shouldAllowPersistentBannersInCarPlay; // @synthesize shouldAllowPersistentBannersInCarPlay=_shouldAllowPersistentBannersInCarPlay;
@property(nonatomic) BOOL shouldAllowActionsInCarPlay; // @synthesize shouldAllowActionsInCarPlay=_shouldAllowActionsInCarPlay;
@property(nonatomic) BOOL presentFullScreenAlertOverList; // @synthesize presentFullScreenAlertOverList=_presentFullScreenAlertOverList;
@property(nonatomic) BOOL preventDismissWhenClosed; // @synthesize preventDismissWhenClosed=_preventDismissWhenClosed;
@property(nonatomic) BOOL preventAutomaticLock; // @synthesize preventAutomaticLock=_preventAutomaticLock;
@property(nonatomic) BOOL revealAdditionalContentWhenPresented; // @synthesize revealAdditionalContentWhenPresented=_revealAdditionalContentWhenPresented;
@property(nonatomic) BOOL preventAutomaticRemovalFromRecent; // @synthesize preventAutomaticRemovalFromRecent=_preventAutomaticRemovalFromRecent;
@property(nonatomic) BOOL privacyOptionShowSubtitle; // @synthesize privacyOptionShowSubtitle=_privacyOptionShowSubtitle;
@property(nonatomic) BOOL privacyOptionShowTitle; // @synthesize privacyOptionShowTitle=_privacyOptionShowTitle;
@property(nonatomic) BOOL shouldAllowSpoken; // @synthesize shouldAllowSpoken=_shouldAllowSpoken;
@property(nonatomic) BOOL shouldAllowInCarPlay; // @synthesize shouldAllowInCarPlay=_shouldAllowInCarPlay;
@property(copy, nonatomic) NSArray *minimalActions; // @synthesize minimalActions=_minimalActions;
@property(copy, nonatomic) NSArray *intentIdentifiers; // @synthesize intentIdentifiers=_intentIdentifiers;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) BOOL hasCustomSilenceAction; // @synthesize hasCustomSilenceAction=_hasCustomSilenceAction;
@property(nonatomic) BOOL hasCustomDismissAction; // @synthesize hasCustomDismissAction=_hasCustomDismissAction;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

