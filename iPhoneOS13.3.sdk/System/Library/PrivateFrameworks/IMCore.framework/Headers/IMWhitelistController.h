//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMCore/TUCallProviderManagerDelegate-Protocol.h>

@class DMFApplicationPolicyMonitor, IMCommLimitsPolicyCache, NSMutableDictionary, NSSet, TUCallProviderManager;
@protocol OS_dispatch_queue;

@interface IMWhitelistController : NSObject <TUCallProviderManagerDelegate>
{
    TUCallProviderManager *_callProviderManager;
    NSObject<OS_dispatch_queue> *_screenTimeDispatchQueue;
    NSSet *_emergencyNumbersSet;
    IMCommLimitsPolicyCache *_policyCache;
    NSMutableDictionary *_bundleIDPolicyMap;
    DMFApplicationPolicyMonitor *_appPolicyMonitor;
}

+ (id)sharedInstance;
+ (id)STConversation;
+ (BOOL)isContactLimitsFeatureEnabled;
@property(retain, nonatomic) DMFApplicationPolicyMonitor *appPolicyMonitor; // @synthesize appPolicyMonitor=_appPolicyMonitor;
@property(retain, nonatomic) NSMutableDictionary *bundleIDPolicyMap; // @synthesize bundleIDPolicyMap=_bundleIDPolicyMap;
@property(retain, nonatomic) IMCommLimitsPolicyCache *policyCache; // @synthesize policyCache=_policyCache;
@property(retain, nonatomic) NSSet *emergencyNumbersSet; // @synthesize emergencyNumbersSet=_emergencyNumbersSet;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *screenTimeDispatchQueue; // @synthesize screenTimeDispatchQueue=_screenTimeDispatchQueue;
@property(retain, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
// - (void).cxx_destruct;
- (void)fetchScreenTimeAppPolicy;
- (BOOL)allowedToShowAppExtensionWithBundleIdentifier:(id)arg1;
- (void)providersChangedForProviderManager:(id)arg1;
- (id)conversationContextForChat:(id)arg1;
- (void)registerForScreenTimeNotifications;
- (void)_participantsForChatDidChange:(id)arg1;
- (void)_addObserversToChat:(id)arg1;
- (BOOL)allowedToShowConversationForChat:(id)arg1 sync:(BOOL)arg2;
- (BOOL)allowedToShowConversationWithHandleIDs:(id)arg1 sync:(BOOL)arg2 context:(id )arg3;
- (void)initializeContext:(id)arg1 participantIDsHash:(id)arg2;
- (void)reloadEmergencyNumbersSet;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (id)init;

@end

