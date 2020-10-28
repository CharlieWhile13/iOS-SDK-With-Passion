//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableArray, NSMutableDictionary, NSString;
@protocol _PASSqliteErrorHandlerProtocol;

@interface _PASSqliteDatabase : NSObject
{
    struct sqlite3 _db;
    int _transactionDepth;
    BOOL _transactionRolledback;
    struct atomic_flag _isClosed;
    NSObject<_PASSqliteErrorHandlerProtocol> *_errorHandler;
    NSString *_filename;
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_statementsToFinalizeAsync;
    BOOL _currentExclusivity;
    NSMutableDictionary *_explainedQueryForPlan;
    NSCache *_explainedQueriesLogged;
    struct __sFILE {
        char _field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void _field8;
        /* void * CDUnknownFunctionPointerType _field9 */;
        /* void * CDUnknownFunctionPointerType _field10 */;
        /* void * CDUnknownFunctionPointerType _field11 */;
        /* void * CDUnknownFunctionPointerType _field12 */;
        struct __sbuf _field13;
        struct __sFILEX _field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } _explainedQueriesLogFile;
    BOOL _isInMemory;
    long long _contentProtectionType;
}

+ (id)corruptionMarkerPathForPath:(id)arg1;
+ (void)runDebugCommand:(const char )arg1 onDbWithHandle:(id)arg2;
+ (void)truncateDatabaseAtPath:(id)arg1;
+ (id)randomlyNamedInMemoryPathWithBaseName:(id)arg1;
+ (id)inMemoryPath;
+ (BOOL)isInMemoryPath:(id)arg1;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id )arg2;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id )arg2 errorHandler:(id)arg3;
+ (id)sqliteDatabaseInMemoryWithError:(id )arg1;
+ (id)sqliteDatabaseInMemoryWithError:(id )arg1 errorHandler:(id)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 contentProtection:(long long)arg2 error:(id )arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 contentProtection:(long long)arg2 errorHandler:(id)arg3 error:(id )arg4;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id )arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id )arg2 errorHandler:(id)arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id )arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id )arg3 errorHandler:(id)arg4;
+ (id)recreateCorruptDatabase:(id)arg1 withContentProtection:(long long)arg2;
+ (id)initializeDatabase:(id)arg1 withProtection:(BOOL)arg2 newDatabaseCreated:(BOOL )arg3;
+ (id)initializeDatabase:(id)arg1 withContentProtection:(long long)arg2 newDatabaseCreated:(BOOL )arg3;
+ (id)initializeDatabase:(id)arg1 withContentProtection:(long long)arg2 newDatabaseCreated:(BOOL )arg3 errorHandler:(id)arg4;
+ (BOOL)contentProtectionTypeRequiresDeviceToHaveBeenUnlockedOnce:(long long)arg1;
+ (BOOL)contentProtectionTypeRequiresDeviceToBeUnlocked:(long long)arg1;
@property(readonly, nonatomic) long long contentProtectionType; // @synthesize contentProtectionType=_contentProtectionType;
@property(readonly, nonatomic) BOOL isInMemory; // @synthesize isInMemory=_isInMemory;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
// - (void).cxx_destruct;
- (void)disableQueryPlanLogging;
- (BOOL)enableQueryPlanLoggingWithPath:(id)arg1;
- (id)languageForFTSTable:(id)arg1;
- (void)finalizeLater:(struct sqlite3_stmt )arg1;
- (void)withDbLockExecuteBlock:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)numberOfRowsInTable:(id)arg1;
- (BOOL)hasIndexNamed:(id)arg1;
- (BOOL)hasColumnOnTable:(id)arg1 named:(id)arg2;
- (id)tablesWithColumnNamed:(id)arg1;
- (BOOL)hasTableNamed:(id)arg1;
- (BOOL)setUserVersion:(unsigned int)arg1;
- (unsigned int)userVersion;
- (BOOL)createSnapshot:(id)arg1;
- (id)description;
- (BOOL)_transactionWithExclusivity:(BOOL)arg1 transaction:(id /* CDUnknownBlockType */)arg2;
- (void)_txnEnd;
- (void)_txnRollback;
- (void)_txnBeginExclusive;
- (void)_txnBegin;
- (BOOL)frailReadTransaction:(id /* CDUnknownBlockType */)arg1;
- (void)readTransaction:(id /* CDUnknownBlockType */)arg1;
- (BOOL)frailWriteTransaction:(id /* CDUnknownBlockType */)arg1;
- (void)writeTransaction:(id /* CDUnknownBlockType */)arg1;
- (void)clearCaches;
- (id)selectColumns:(id)arg1 fromTable:(id)arg2 whereClause:(id)arg3 onPrep:(id /* CDUnknownBlockType */)arg4 onError:(id /* CDUnknownBlockType */)arg5;
- (void)insertIntoTable:(id)arg1 dictionary:(id)arg2;
- (void)insertOrReplaceIntoTable:(id)arg1 dictionary:(id)arg2 onError:(id /* CDUnknownBlockType */)arg3;
- (void)updateTable:(id)arg1 dictionary:(id)arg2 whereClause:(id)arg3 onError:(id /* CDUnknownBlockType */)arg4;
- (BOOL)prepAndRunNonDataQueries:(id)arg1 onError:(id /* CDUnknownBlockType */)arg2;
- (void)_prepAndRunQuery:(id)arg1 columns:(id)arg2 dictionary:(id)arg3 onError:(id /* CDUnknownBlockType */)arg4;
- (BOOL)prepAndRunQuery:(id)arg1 onPrep:(id /* CDUnknownBlockType */)arg2 onRow:(id /* CDUnknownBlockType */)arg3 onError:(id /* CDUnknownBlockType */)arg4;
- (BOOL)prepQuery:(id)arg1 onPrep:(id /* CDUnknownBlockType */)arg2 onError:(id /* CDUnknownBlockType */)arg3;
- (void)_logQueryPlanForQuery:(id)arg1;
- (BOOL)runQuery:(id)arg1 onRow:(id /* CDUnknownBlockType */)arg2;
- (BOOL)runQuery:(id)arg1 onRow:(id /* CDUnknownBlockType */)arg2 onError:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) struct sqlite3 handle;
- (long long)lastInsertRowId;
- (void)simulateOnDiskDatabase;
- (void)closePermanently;
- (void)dealloc;
- (id)init;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id )arg3;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id )arg3 errorHandler:(id)arg4;
- (void)placeCorruptionMarker;
- (BOOL)handleError:(long long)arg1 sqliteError:(int)arg2 forQuery:(id)arg3 onError:(id /* CDUnknownBlockType */)arg4;
- (id)dbErrorWithCode:(NSUInteger)arg1 sqliteReturnValue:(int)arg2 lastErrno:(int)arg3 query:(id)arg4;
- (id)freeSpace;

@end

