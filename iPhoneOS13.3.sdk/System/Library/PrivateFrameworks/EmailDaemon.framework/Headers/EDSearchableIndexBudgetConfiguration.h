//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFPubliclyDescribable-Protocol.h>

@class NSString;

@interface EDSearchableIndexBudgetConfiguration : NSObject <EFPubliclyDescribable>
{
    BOOL _enableActivityBasedScheduling;
    BOOL _autoStartMaintenanceIndexing;
    BOOL _allowBacklogIndexingOnPower;
    double _time;
    double _periodDuration;
    long long _numberOfItemsToIndexOnResume;
}

+ (id)nonSchedulingBudgetConfiguration;
+ (id)defaultConfiguration;
@property(nonatomic) BOOL allowBacklogIndexingOnPower; // @synthesize allowBacklogIndexingOnPower=_allowBacklogIndexingOnPower;
@property(nonatomic) BOOL autoStartMaintenanceIndexing; // @synthesize autoStartMaintenanceIndexing=_autoStartMaintenanceIndexing;
@property(nonatomic) BOOL enableActivityBasedScheduling; // @synthesize enableActivityBasedScheduling=_enableActivityBasedScheduling;
@property(readonly, nonatomic) long long numberOfItemsToIndexOnResume; // @synthesize numberOfItemsToIndexOnResume=_numberOfItemsToIndexOnResume;
@property(readonly, nonatomic) double periodDuration; // @synthesize periodDuration=_periodDuration;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3;
- (id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3 enableActivityBasedScheduling:(BOOL)arg4 autoStartMaintenanceIndexing:(BOOL)arg5 allowBacklogIndexingOnPower:(BOOL)arg6;

@end
