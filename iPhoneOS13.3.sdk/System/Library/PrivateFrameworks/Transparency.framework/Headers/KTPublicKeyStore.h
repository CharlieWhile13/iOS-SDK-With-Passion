//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, TransparencyManagedDataStore;

@interface KTPublicKeyStore : NSObject
{
    BOOL _forceRefresh;
    NSDictionary *_applicationKeyStores;
    NSArray *_applications;
    TransparencyManagedDataStore *_dataStore;
}

@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property BOOL forceRefresh; // @synthesize forceRefresh=_forceRefresh;
@property(retain) NSArray *applications; // @synthesize applications=_applications;
@property(retain) NSDictionary *applicationKeyStores; // @synthesize applicationKeyStores=_applicationKeyStores;
// - (void).cxx_destruct;
@property(readonly) BOOL ready;
- (void)clearApplicationState:(id)arg1 error:(id )arg2;
- (id)initWithDataStore:(id)arg1;
- (BOOL)configureWithDisk:(id )arg1;
- (void)configureWithClient:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)configureWithClient:(id)arg1 ignoreCachedKeys:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)fetchKeyStore:(id)arg1 application:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)createApplicationKeyStore:(id)arg1 keyStoreResponse:(id)arg2 error:(id )arg3;
- (id)createApplicationKeyStore:(id)arg1 keyStoreData:(id)arg2 error:(id )arg3;
- (BOOL)saveDiskApplicationKeyStore:(id)arg1 error:(id )arg2;
- (BOOL)hasApplicationPublicKeyStoreOnDisk:(id)arg1 error:(id )arg2;
- (BOOL)clearDiskApplicationKeyStore:(id)arg1 error:(id )arg2;
- (BOOL)writePublicKeyStoreToDisk:(id)arg1 error:(id )arg2;
- (id)readPublicKeyStoreFromDisk:(id )arg1;
- (id)copyKeyStoreState;
- (id)copyMetadata;

@end

