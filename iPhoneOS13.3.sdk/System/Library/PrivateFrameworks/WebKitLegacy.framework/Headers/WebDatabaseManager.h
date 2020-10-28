//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebDatabaseManager : NSObject
{
}

+ (void)scheduleEmptyDatabaseRemoval;
+ (void)removeEmptyDatabaseFiles;
+ (id)sharedWebDatabaseManager;
- (void)setIDBPerOriginQuota:(NSUInteger)arg1;
- (void)deleteAllIndexedDatabases;
- (BOOL)deleteDatabase:(id)arg1 withOrigin:(id)arg2;
- (BOOL)deleteOrigin:(id)arg1;
- (void)deleteAllDatabases;
- (id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2;
- (id)databasesWithOrigin:(id)arg1;
- (id)origins;
- (id)init;

@end

