//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection, NSMutableDictionary;

@interface _EDThreadPersistence_StatementCache : NSObject
{
    EDPersistenceDatabaseConnection *_connection;
    NSMutableDictionary *_preparedStatements;
}

@property(readonly, nonatomic) NSMutableDictionary *preparedStatements; // @synthesize preparedStatements=_preparedStatements;
@property(readonly, nonatomic) EDPersistenceDatabaseConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (id)preparedStatementForQueryString:(id)arg1;
- (id)initWithConnection:(id)arg1;

@end
