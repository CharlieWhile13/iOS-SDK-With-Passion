//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HDSQLiteDatabase, HDSQLiteDatabasePool, NSArray;

@protocol HDSQLiteDatabasePoolDelegate <NSObject>
- (void)databasePool:(HDSQLiteDatabasePool *)arg1 didFlushDatabases:(NSArray *)arg2;
- (HDSQLiteDatabase *)newDatabaseForDatabasePool:(HDSQLiteDatabasePool *)arg1 error:(id )arg2;
@end

