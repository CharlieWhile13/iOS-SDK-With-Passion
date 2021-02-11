/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@interface SYDRemotePreferencesSource : NSObject {
    struct __CFDictionary { } * _cache;
    SYDClient * _client;
    struct __CFDictionary { } * _configurationDictionary;
    struct __CFSet { } * _dirtyKeys;
    NSMutableDictionary * _externalChanges;
    bool  _forceNextSynchronization;
    long long  _generationCount;
    long long  _initialSyncChangeCount;
    NSObject<OS_os_transaction> * _isExecutingForClient;
    unsigned char  _isInitialSync;
    double  _lastAccess;
    long long  _lastGenerationFromDisk;
    NSObject<OS_dispatch_source> * _memoryWarningSource;
    bool  _memoryWarningSourceEnabled;
    struct __CFString { } * _preferenceID;
    NSObject<OS_dispatch_queue> * _protectionQueue;
    id /* block */  _registrationBlock;
    NSObject<OS_dispatch_queue> * _registrationQueue;
    long long  _storageChangeCount;
    struct __CFURL { } * _urlOnDisk;
}

+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+ (bool)alwaysUseKVSOnCloudKit;
+ (void)initialize;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)arg1;
+ (void)noteAccountChanges:(id)arg1;
+ (void)resetAllApplicationsWithCompletionHandler:(id /* block */)arg1;
+ (void)setAlwaysUseKVSOnCloudKit:(bool)arg1;

- (void).cxx_destruct;
- (void)_cachePlistFromDisk;
- (void)_createMemoryWarningSource;
- (void)_didReceiveMemoryWarning;
- (void)_forceRegistrationNow;
- (void)_locked_syd_end_transaction;
- (void)_locked_syd_start_transaction;
- (void)_storeConfiguration:(struct __CFDictionary { }*)arg1;
- (unsigned char)_synchronizeForced:(unsigned char)arg1;
- (id)_warningSource;
- (long long)configurationValueForKey:(struct __CFString { }*)arg1;
- (struct __CFDictionary { }*)copyConfigurationDictionary;
- (struct __CFDictionary { }*)copyDictionary;
- (id)copyExternalChangesWithChangeCount:(long long*)arg1;
- (struct __CFArray { }*)copyKeyList;
- (void)dealloc;
- (void)discardExternalChangesForChangeCount:(long long)arg1;
- (long long)generationCount;
- (void*)getValueForKey:(struct __CFString { }*)arg1;
- (unsigned char)hasExternalChanges;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 shared:(bool)arg2;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 storeID:(struct __CFString { }*)arg2 shared:(bool)arg3;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 storeID:(struct __CFString { }*)arg2 shared:(bool)arg3 additionalSource:(bool)arg4;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 storeID:(struct __CFString { }*)arg2 shared:(bool)arg3 additionalSource:(bool)arg4 containerPath:(struct __CFString { }*)arg5;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 storeID:(struct __CFString { }*)arg2 shared:(bool)arg3 additionalSource:(bool)arg4 containerPath:(struct __CFString { }*)arg5 storeType:(long long)arg6;
- (unsigned char)isInitialSync;
- (long long)maximumDataLengthPerKey;
- (long long)maximumKeyCount;
- (long long)maximumKeyLength;
- (long long)maximumTotalDataLength;
- (void)ping;
- (void)registerForSynchronizedDefaults;
- (void)scheduleRemoteSynchronization;
- (id)serverSideDebugDescription;
- (void)setCache:(struct __CFDictionary { }*)arg1;
- (void)setDefaultsConfiguration:(id)arg1;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)synchronizationWithCompletionHandler:(id /* block */)arg1;
- (unsigned char)synchronize;
- (unsigned char)synchronizeForced:(unsigned char)arg1;
- (void)unregisterForSynchronizedDefaults;
- (void)updateConfiguration;

@end