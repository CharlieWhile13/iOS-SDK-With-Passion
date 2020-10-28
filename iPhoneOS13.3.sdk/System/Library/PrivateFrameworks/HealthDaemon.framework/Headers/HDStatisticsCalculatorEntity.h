//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDStatisticsCalculatorEntity : HDHealthEntity
{
}

+ (id)uniquedColumns;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 )columnDefinitionsWithCount:(NSUInteger )arg1;
+ (long long)protectionClass;
+ (id)ownerEntityReferenceColumn;
+ (Class)ownerEntityClass;
+ (id)databaseTable;
+ (BOOL)enumerateStatisticsForOwner:(id)arg1 transaction:(id)arg2 error:(id )arg3 block:(id /* CDUnknownBlockType */)arg4;
+ (BOOL)deleteStatisticsForOwner:(id)arg1 type:(id)arg2 transaction:(id)arg3 error:(id )arg4;
+ (BOOL)setCalculator:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id )arg5;
+ (BOOL)setStatistics:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id )arg5;
+ (id)calculatorForOwner:(id)arg1 type:(id)arg2 anchor:(id )arg3 transaction:(id)arg4 error:(id )arg5;
+ (id)statisticsForOwner:(id)arg1 type:(id)arg2 anchor:(id )arg3 transaction:(id)arg4 error:(id )arg5;

@end

