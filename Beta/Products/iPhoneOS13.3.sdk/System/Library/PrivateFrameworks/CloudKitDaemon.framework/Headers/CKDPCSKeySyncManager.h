/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSKeySyncManager : NSObject {
    NSObject<OS_dispatch_queue> * _keySyncQueue;
    NSMutableDictionary * _keySyncTrackerByServiceName;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *keySyncQueue;
@property (nonatomic, retain) NSMutableDictionary *keySyncTrackerByServiceName;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)createSyncTrackerForService:(id)arg1 manatee:(bool)arg2;
- (id)init;
- (id)keySyncQueue;
- (id)keySyncTrackerByServiceName;
- (void)performKeySyncWithSyncTracker:(id)arg1 testableSyncConfig:(unsigned long long)arg2 shouldThrottle:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)setKeySyncQueue:(id)arg1;
- (void)setKeySyncTrackerByServiceName:(id)arg1;
- (id)syncTrackerForService:(id)arg1 manatee:(bool)arg2 shortThrottlePeriod:(bool)arg3;
- (void)syncUserKeysForService:(id)arg1 serviceIsManatee:(bool)arg2 account:(id)arg3 shouldThrottle:(bool)arg4 testOverrideProvider:(id)arg5 completionHandler:(id /* block */)arg6;

@end