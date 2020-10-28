//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSampleEntity.h>

@interface HDActivityCacheEntity : HDSampleEntity
{
}

+ (BOOL)isConcreteEntity;
+ (BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* CDUnknownBlockType */)arg5;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id )arg5 insertHandler:(id /* CDUnknownBlockType */)arg6;
+ (BOOL)supportsObjectMerging;
+ (id)activityCacheForIndex:(long long)arg1 profile:(id)arg2 encodingOptions:(id)arg3 error:(id )arg4;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id )arg5;
+ (id)indices;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 )columnDefinitionsWithCount:(NSUInteger )arg1;
+ (id)databaseTable;

@end

