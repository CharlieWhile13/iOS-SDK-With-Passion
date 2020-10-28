//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTDictionarySerializable-Protocol.h>
#import <MobileTimer/MTScheduleable-Protocol.h>
#import <MobileTimer/MTSerializable-Protocol.h>
#import <MobileTimer/NAEquatable-Protocol.h>

@class MTIntentAlarm, MTSound, NSDate, NSNumber, NSString, NSURL, NSUUID;

@interface MTAlarm : NSObject <MTScheduleable, MTDictionarySerializable, MTSerializable, NAEquatable, NSSecureCoding, NSCopying, NSMutableCopying>
{
    BOOL _sleepSchedule;
    BOOL _bedtimeDoNotDisturb;
    BOOL _timeInBedTracking;
    BOOL _enabled;
    BOOL _sleepAlarm;
    BOOL _allowsSnooze;
    NSUUID *_alarmID;
    NSUInteger _hour;
    NSUInteger _minute;
    NSUInteger _bedtimeHour;
    NSUInteger _bedtimeMinute;
    NSNumber *_bedtimeReminder;
    NSUInteger _bedtimeDoNotDisturbOptions;
    NSUInteger _repeatSchedule;
    NSUInteger _playOptions;
    NSDate *_lastModifiedDate;
    NSString *_title;
    MTSound *_sound;
    NSDate *_snoozeFireDate;
    NSDate *_bedtimeSnoozeFireDate;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSUInteger _dismissedAction;
    NSDate *_bedtimeFiredDate;
    NSDate *_bedtimeDismissedDate;
    NSUInteger _bedtimeDismissedAction;
    NSDate *_keepOffUntilDate;
    NSUInteger _onboardingVersion;
    id /* CDUnknownBlockType */ _currentDateProvider;
}

+ (id)mostRecentlyUpdatedAlarmForAlarms:(id)arg1;
+ (id)descriptionForPlayOptions:(NSUInteger)arg1;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_date:(id)arg1 isOnDay:(long long)arg2 calendar:(id)arg3;
+ (BOOL)_isInternalBuild;
+ (NSUInteger)defaultBedtimeDoNotDisturbOptions;
+ (NSUInteger)defaultPlayOptionsIsSleepAlarm:(BOOL)arg1;
+ (NSUInteger)defaultPlayOptions;
+ (id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2 bedtimeHour:(long long)arg3 bedtimeMinute:(long long)arg4;
+ (id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2;
+ (id)sleepAlarm;
+ (id)alarmWithHour:(NSUInteger)arg1 minute:(NSUInteger)arg2;
+ (id)alarm;
+ (id)propertiesAffectingNotification;
+ (id)propertiesAffectingSnooze;
+ (id)propertiesAffectingBedtime;
+ (id)propertiesAffectingWaketime;
@property(copy, nonatomic) id /* CDUnknownBlockType */ currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(nonatomic) NSUInteger onboardingVersion; // @synthesize onboardingVersion=_onboardingVersion;
@property(copy, nonatomic) NSDate *keepOffUntilDate; // @synthesize keepOffUntilDate=_keepOffUntilDate;
@property(nonatomic) NSUInteger bedtimeDismissedAction; // @synthesize bedtimeDismissedAction=_bedtimeDismissedAction;
@property(copy, nonatomic) NSDate *bedtimeDismissedDate; // @synthesize bedtimeDismissedDate=_bedtimeDismissedDate;
@property(copy, nonatomic) NSDate *bedtimeFiredDate; // @synthesize bedtimeFiredDate=_bedtimeFiredDate;
@property(nonatomic) NSUInteger dismissedAction; // @synthesize dismissedAction=_dismissedAction;
@property(copy, nonatomic) NSDate *dismissedDate; // @synthesize dismissedDate=_dismissedDate;
@property(copy, nonatomic) NSDate *firedDate; // @synthesize firedDate=_firedDate;
@property(copy, nonatomic) NSDate *bedtimeSnoozeFireDate; // @synthesize bedtimeSnoozeFireDate=_bedtimeSnoozeFireDate;
@property(copy, nonatomic) NSDate *snoozeFireDate; // @synthesize snoozeFireDate=_snoozeFireDate;
@property(copy, nonatomic) MTSound *sound; // @synthesize sound=_sound;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(nonatomic) BOOL allowsSnooze; // @synthesize allowsSnooze=_allowsSnooze;
@property(nonatomic, getter=isSleepAlarm) BOOL sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(nonatomic) NSUInteger playOptions; // @synthesize playOptions=_playOptions;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) NSUInteger repeatSchedule; // @synthesize repeatSchedule=_repeatSchedule;
@property(nonatomic) BOOL timeInBedTracking; // @synthesize timeInBedTracking=_timeInBedTracking;
@property(nonatomic) NSUInteger bedtimeDoNotDisturbOptions; // @synthesize bedtimeDoNotDisturbOptions=_bedtimeDoNotDisturbOptions;
@property(nonatomic) BOOL bedtimeDoNotDisturb; // @synthesize bedtimeDoNotDisturb=_bedtimeDoNotDisturb;
@property(nonatomic) BOOL sleepSchedule; // @synthesize sleepSchedule=_sleepSchedule;
@property(copy, nonatomic) NSNumber *bedtimeReminder; // @synthesize bedtimeReminder=_bedtimeReminder;
@property(nonatomic) NSUInteger bedtimeMinute; // @synthesize bedtimeMinute=_bedtimeMinute;
@property(nonatomic) NSUInteger bedtimeHour; // @synthesize bedtimeHour=_bedtimeHour;
@property(nonatomic) NSUInteger minute; // @synthesize minute=_minute;
@property(nonatomic) NSUInteger hour; // @synthesize hour=_hour;
@property(readonly, nonatomic) NSUUID *alarmID; // @synthesize alarmID=_alarmID;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)serializeWithSerializer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_updatePropertiesFromDeserializer:(id)arg1;
- (id)initFromDeserializer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_copyStateOntoAlarm:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)_isEqualToAlarm:(id)arg1 checkLastModified:(BOOL)arg2;
- (BOOL)isEqualToAlarm:(id)arg1;
- (BOOL)isEqualIgnoringLastModifiedDate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)_nextDateHelperWithDate:(id)arg1 calendar:(id)arg2;
- (id)_earliestTriggerDateForDate:(id)arg1;
- (id)_nextBedtimeTriggersHelperWithDate:(id)arg1 wakeUpDate:(id)arg2 inclusionOptions:(NSUInteger)arg3 calendar:(id)arg4;
- (id)nextTriggersAfterDate:(id)arg1 inclusionOptions:(NSUInteger)arg2;
- (id)nextTriggersAfterDate:(id)arg1 includeSnooze:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3;
- (id)nextTriggersAfterDate:(id)arg1 includeBedtime:(BOOL)arg2;
- (id)nextTriggersAfterDate:(id)arg1;
- (id)nextTriggerAfterDate:(id)arg1 ofType:(NSUInteger)arg2;
- (id)nextTriggerAfterDate:(id)arg1 includeSnooze:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3;
- (id)nextTriggerAfterDate:(id)arg1 includeBedtimeNotification:(BOOL)arg2;
- (id)nextTriggerAfterDate:(id)arg1;
- (id)nextTrigger;
- (id)nextFireDateAfterDate:(id)arg1 includeBedtimeNotification:(BOOL)arg2;
- (id)nextFireDateAfterDate:(id)arg1;
@property(readonly, nonatomic) NSDate *nextFireDate;
- (long long)compare:(id)arg1;
- (double)sleepDurationSeconds;
@property(readonly, nonatomic) NSUInteger sleepDuration;
@property(readonly, nonatomic) NSString *displayTitle;
@property(readonly, nonatomic, getter=isFiring) BOOL firing;
- (BOOL)isBedtimeSnoozed;
@property(readonly, nonatomic, getter=isSnoozed) BOOL snoozed;
@property(readonly, nonatomic) BOOL repeats;
@property(readonly, nonatomic) NSURL *alarmURL;
- (id)bedtimeComponents;
- (id)dateComponents;
- (id)alarmIDString;
@property(nonatomic) NSUInteger bedtimeReminderMinutes;
@property(readonly, nonatomic) BOOL playsOnThisDevice;
- (id)initWithHour:(NSUInteger)arg1 minute:(NSUInteger)arg2 currentDateProvider:(id /* CDUnknownBlockType */)arg3;
- (id)initWithHour:(NSUInteger)arg1 minute:(NSUInteger)arg2;
- (id)_initCommon;
- (id)initWithCurrentTimeFromCurrentDateProvider:(id /* CDUnknownBlockType */)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)upcomingTriggersAfterDate:(id)arg1;
- (BOOL)shouldBeScheduled;
- (id)identifier;
@property(readonly, nonatomic) MTIntentAlarm *intentAlarm;
- (id)timeObject;
- (id)intentLabel;
- (id)alarmIDIntentObject;
- (id)alarmIntentDisplayString;
- (BOOL)confirmedLastBedtimeReminder;
- (id)nextExpectedBedtimeDateAfterDate:(id)arg1;
- (id)nextExpectedWakeUpDateAfterDate:(id)arg1;

@end

