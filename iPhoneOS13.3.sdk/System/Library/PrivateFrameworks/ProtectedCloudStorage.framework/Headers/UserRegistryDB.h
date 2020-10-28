//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

@interface UserRegistryDB : NSObject
{
    struct sqlite3 _sqliteHandle;
    struct sqlite3_stmt _recordIDStatment;
    struct sqlite3_stmt _replaceStatment;
    struct sqlite3_stmt _deleteStatment;
    struct sqlite3_stmt _insertWatch;
    struct sqlite3_stmt _updateWatch;
    struct sqlite3_stmt _insertMirrorKey;
    struct sqlite3_stmt _updateMirrorKey;
    struct sqlite3_stmt _markMirrorKey;
    struct sqlite3_stmt _deleteMirrorKeys;
    struct sqlite3_stmt _resetCurrentMirrorKey;
    struct sqlite3_stmt _insertEscrowKey;
    struct sqlite3_stmt _updateEscrowKey;
    struct sqlite3_stmt _deleteEscrowKey;
    struct sqlite3_stmt _queryEscrowKey;
    struct sqlite3_stmt _queryEscrowKeysAll;
    struct sqlite3_stmt _insertWatchKey;
    struct sqlite3_stmt _queryMissingKeys;
    struct sqlite3_stmt _queryWatches;
    NSObject<OS_os_log> *_oslog;
    NSString *_dsid;
}

@property(retain) NSString *dsid; // @synthesize dsid=_dsid;
@property(retain) NSObject<OS_os_log> *oslog; // @synthesize oslog=_oslog;
@property struct sqlite3_stmt queryWatches; // @synthesize queryWatches=_queryWatches;
@property struct sqlite3_stmt queryMissingKeys; // @synthesize queryMissingKeys=_queryMissingKeys;
@property struct sqlite3_stmt insertWatchKey; // @synthesize insertWatchKey=_insertWatchKey;
@property struct sqlite3_stmt queryEscrowKeysAll; // @synthesize queryEscrowKeysAll=_queryEscrowKeysAll;
@property struct sqlite3_stmt queryEscrowKey; // @synthesize queryEscrowKey=_queryEscrowKey;
@property struct sqlite3_stmt deleteEscrowKey; // @synthesize deleteEscrowKey=_deleteEscrowKey;
@property struct sqlite3_stmt updateEscrowKey; // @synthesize updateEscrowKey=_updateEscrowKey;
@property struct sqlite3_stmt insertEscrowKey; // @synthesize insertEscrowKey=_insertEscrowKey;
@property struct sqlite3_stmt resetCurrentMirrorKey; // @synthesize resetCurrentMirrorKey=_resetCurrentMirrorKey;
@property struct sqlite3_stmt deleteMirrorKeys; // @synthesize deleteMirrorKeys=_deleteMirrorKeys;
@property struct sqlite3_stmt markMirrorKey; // @synthesize markMirrorKey=_markMirrorKey;
@property struct sqlite3_stmt updateMirrorKey; // @synthesize updateMirrorKey=_updateMirrorKey;
@property struct sqlite3_stmt insertMirrorKey; // @synthesize insertMirrorKey=_insertMirrorKey;
@property struct sqlite3_stmt updateWatch; // @synthesize updateWatch=_updateWatch;
@property struct sqlite3_stmt insertWatch; // @synthesize insertWatch=_insertWatch;
@property struct sqlite3_stmt deleteStatment; // @synthesize deleteStatment=_deleteStatment;
@property struct sqlite3_stmt replaceStatment; // @synthesize replaceStatment=_replaceStatment;
@property struct sqlite3_stmt recordIDStatment; // @synthesize recordIDStatment=_recordIDStatment;
@property struct sqlite3 sqliteHandle; // @synthesize sqliteHandle=_sqliteHandle;
// - (void).cxx_destruct;
- (id)missingKeysFromDevice:(id)arg1 type:(int)arg2;
- (id)syncDevices;
- (BOOL)syncedKeyToDevice:(id)arg1 type:(int)arg2 device:(id)arg3;
- (BOOL)updateSyncDevice:(id)arg1 seen:(id)arg2 version:(id)arg3;
- (id)queryEscrowKeys;
- (id)queryEscrowKey:(id)arg1;
- (BOOL)deleteEscrowKey:(id)arg1;
- (BOOL)updateEscrowKey:(id)arg1 escrowBlob:(id)arg2;
- (BOOL)setEscrowKey:(id)arg1 escrowBlob:(id)arg2;
- (BOOL)deleteMirrorKeys:(int)arg1;
- (BOOL)updateMirrorKey:(id)arg1 service:(int)arg2 type:(int)arg3 newType:(int)arg4 current:(BOOL)arg5;
- (BOOL)markMirrorKey:(int)arg1 type:(int)arg2;
- (BOOL)setMirrorKey:(id)arg1 service:(int)arg2 type:(int)arg3 publicIdentity:(id)arg4;
- (BOOL)deleteRecordID:(id)arg1;
- (BOOL)replaceRecordID:(id)arg1 data:(id)arg2 publicKey:(id)arg3;
- (id)getRecordIDData:(id)arg1;
- (BOOL)replaceConfigRecord:(id)arg1 data:(id)arg2;
- (id)getConfigData:(id)arg1;
- (BOOL)replaceRecord:(id)arg1 type:(int)arg2 data:(id)arg3 publicKey:(id)arg4;
- (id)getData:(id)arg1 type:(int)arg2;
- (BOOL)endTransaction:(BOOL)arg1;
- (BOOL)beginExclusiveTransaction;
- (BOOL)deleteRecordAll;
- (BOOL)setupDatabase;
- (BOOL)prepare:(const char )arg1 statement:(struct sqlite3_stmt )arg2;
- (void)dealloc;
- (id)initWithDSID:(id)arg1;

@end

