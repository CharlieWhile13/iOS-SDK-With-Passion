//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class HKObject;

@interface _HDDataDeletionJournalEntry : HDJournalEntry
{
    BOOL _restrictSource;
    HKObject *_dataObject;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
@property(readonly, nonatomic) BOOL restrictSource; // @synthesize restrictSource=_restrictSource;
@property(readonly, nonatomic) HKObject *dataObject; // @synthesize dataObject=_dataObject;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataObject:(id)arg1 restrictSource:(BOOL)arg2;

@end

