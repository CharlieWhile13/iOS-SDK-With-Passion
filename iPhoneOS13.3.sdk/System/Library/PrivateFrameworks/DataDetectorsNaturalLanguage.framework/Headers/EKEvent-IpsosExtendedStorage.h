//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKEvent.h>

@class IPEventClassificationType, IPMessageUnit, NSArray;

@interface EKEvent (IpsosExtendedStorage)
- (id)ipsos_betterDescription;
@property NSUInteger ipsos_eventAttributes;
@property NSUInteger ipsos_eventStatus;
@property double ipsos_experimentalConfidence;
@property double ipsos_confidence;
@property(readonly) double ipsos_duration;
@property NSUInteger ipsos_usedBubblesCount;
@property BOOL ipsos_disableTimeAdjustment;
@property BOOL ipsos_allDayPreferred;
@property(retain) IPMessageUnit *ipsos_messageUnit;
@property(retain) NSArray *ipsos_dataFeatures;
@property(retain) IPEventClassificationType *ipsos_eventClassificationType;
@property BOOL ipsos_isTimeOffset;
@property BOOL ipsos_isEventTimeOnlyAndReferrengingToSentDate;
@property BOOL ipsos_isDateTimeTenseDependent;
@property BOOL ipsos_timeNeedsMeridianGuess;
@property BOOL ipsos_usesDefaultClassificationTypeStartTime;
@property BOOL ipsos_isEndTimeApproximate;
@property BOOL ipsos_isTimeApproximate;
@end

