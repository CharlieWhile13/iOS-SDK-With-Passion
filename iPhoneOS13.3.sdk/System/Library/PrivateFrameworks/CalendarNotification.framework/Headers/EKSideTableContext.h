//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@class NSString;

@interface EKSideTableContext : NSManagedObjectContext
{
    NSString *_path;
}

+ (id)sideTableContext;
// - (void).cxx_destruct;
- (id)_persistentStoreCoordinator;
- (id)_managedObjectModel;
- (BOOL)_removeSqliteFiles;
- (id)_urlForPersistentStore;
- (id)_pathForPersistentStore;
- (id)rootDirectory;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)settingForKey:(id)arg1;
- (id)_settingForKey:(id)arg1;
- (BOOL)refiringAlarmAlreadyExists:(int)arg1;
- (id)refiringAlarms;
- (id)delayedProximityAlarms;
- (id)alarmsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)nextAlarmFireTime;
- (id)insertNewAlarm;
- (void)deleteAllAlarms;
- (id)_alarmsMatchingPredicate:(id)arg1;
- (id)initWithConcurrencyType:(NSUInteger)arg1;

@end

