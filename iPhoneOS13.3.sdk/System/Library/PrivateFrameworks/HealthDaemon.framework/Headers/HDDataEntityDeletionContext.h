//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, HDSQLiteDatabase, NSMutableDictionary, NSMutableSet, NSNumber, NSSet;

@interface HDDataEntityDeletionContext : NSObject
{
    HDProfile *_profile;
    NSMutableDictionary *_deleteStatementsByClassName;
    NSMutableDictionary *_deletedObjectProvenanceIDsByOriginalProvenanceID;
    NSMutableDictionary *_localSourceIDsByOriginalSourceID;
    NSMutableSet *_deletedObjectTypeSet;
    BOOL _insertDeletedObjects;
    BOOL _callWillDeleteFromDatabase;
    HDSQLiteDatabase *_database;
    id /* CDUnknownBlockType */ _recursiveDeleteAuthorizationBlock;
    NSNumber *_lastInsertedDeletedObjectPersistentID;
    NSUInteger _deletedObjectCount;
}

@property(readonly, nonatomic) NSUInteger deletedObjectCount; // @synthesize deletedObjectCount=_deletedObjectCount;
@property(readonly, copy, nonatomic) NSSet *deletedObjectTypeSet; // @synthesize deletedObjectTypeSet=_deletedObjectTypeSet;
@property(readonly, nonatomic) NSNumber *lastInsertedDeletedObjectPersistentID; // @synthesize lastInsertedDeletedObjectPersistentID=_lastInsertedDeletedObjectPersistentID;
@property(nonatomic) BOOL callWillDeleteFromDatabase; // @synthesize callWillDeleteFromDatabase=_callWillDeleteFromDatabase;
@property(nonatomic) BOOL insertDeletedObjects; // @synthesize insertDeletedObjects=_insertDeletedObjects;
@property(copy, nonatomic) id /* CDUnknownBlockType */ recursiveDeleteAuthorizationBlock; // @synthesize recursiveDeleteAuthorizationBlock=_recursiveDeleteAuthorizationBlock;
@property(readonly, nonatomic) HDSQLiteDatabase *database; // @synthesize database=_database;
// - (void).cxx_destruct;
- (void)finish;
- (id)_localSourceIDForSourceID:(id)arg1 error:(id )arg2;
- (id)_provenanceIDForDeletedObjectWithOriginalProvenanceID:(id)arg1 error:(id )arg2;
- (BOOL)deleteObjectWithPersistentID:(long long)arg1 objectUUID:(id)arg2 entityClass:(Class)arg3 objectType:(id)arg4 provenanceIdentifier:(id)arg5 deletionDate:(id)arg6 error:(id )arg7;
- (BOOL)_deleteAssociatedObjectsForPersistentID:(long long)arg1 entityClass:(Class)arg2 deletionDate:(id)arg3 error:(id )arg4;
- (BOOL)deleteObjectWithPersistentID:(long long)arg1 entityClass:(Class)arg2 error:(id )arg3;
- (id)initWithProfile:(id)arg1 database:(id)arg2;

@end

