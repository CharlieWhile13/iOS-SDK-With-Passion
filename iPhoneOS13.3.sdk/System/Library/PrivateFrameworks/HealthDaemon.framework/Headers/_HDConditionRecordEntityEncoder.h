//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/_HDMedicalRecordEntityEncoder.h>

@interface _HDConditionRecordEntityEncoder : _HDMedicalRecordEntityEncoder
{
}

- (BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow )arg3 error:(id )arg4;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow )arg2 error:(id )arg3;
- (id)createBareObject;
- (id)orderedProperties;

@end

