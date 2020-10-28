//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EFResourcePool, NSLock, NSMapTable, NSMutableSet, _EDPersistenceDatabaseConnectionWrapper;
@protocol EDPersistenceDatabaseConnectionPoolDelegate;

@interface EDPersistenceDatabaseConnectionPool : NSObject
{
    NSLock *_cacheLock;
    NSMutableSet *_cache;
    NSUInteger _cacheSize;
    NSUInteger _cacheGeneration;
    NSLock *_checkoutLock;
    NSMapTable *_checkoutMap;
    NSLock *_writerLock;
    _EDPersistenceDatabaseConnectionWrapper *_writerConnection;
    int _writersWaiting;
    NSUInteger _maxConcurrentBackgroundReaders;
    int _backgroundReadersWaiting;
    EFResourcePool *_backgroundReaderResources;
    id <EDPersistenceDatabaseConnectionPoolDelegate> _delegate;
}

@property(readonly, nonatomic) NSUInteger maxConcurrentBackgroundReaders; // @synthesize maxConcurrentBackgroundReaders=_maxConcurrentBackgroundReaders;
@property(nonatomic) __weak id <EDPersistenceDatabaseConnectionPoolDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger writersWaiting;
@property(readonly, nonatomic) NSUInteger backgroundReadersWaiting;
- (NSUInteger)maxConcurrentReaders;
@property(nonatomic) NSUInteger cacheSize;
- (void)flush;
- (void)_unlockForConnectionType:(NSUInteger)arg1 resource:(id)arg2;
- (void)checkInConnection:(id)arg1;
- (BOOL)_lockForConnectionType:(NSUInteger)arg1 resource:(id )arg2;
- (id)_connectionWithType:(NSUInteger)arg1;
- (id)writerConnection;
- (id)readerConnection;
- (id)backgroundReaderConnection;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(NSUInteger)arg2;
- (id)init;

@end
