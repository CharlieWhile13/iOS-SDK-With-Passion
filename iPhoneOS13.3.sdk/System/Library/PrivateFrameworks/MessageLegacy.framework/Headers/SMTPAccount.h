//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageLegacy/DeliveryAccount.h>

@class MFSMTPConnection, NSTimer;

@interface SMTPAccount : DeliveryAccount
{
    Class _deliveryClass;
    MFSMTPConnection *_connection;
    NSTimer *_timer;
    long long _lastTimerSetTime;
    unsigned int _supportsPipelining:1;
    unsigned int _supportsOutboxCopy:1;
    unsigned int _useCellDataOnly:1;
}

+ (BOOL)isCommonPortNumber:(unsigned int)arg1;
+ (id)saslProfileName;
+ (unsigned int)defaultPortNumber;
+ (void)registerAppleServiceDeliveryHostname:(id)arg1;
+ (id)newDefaultInstance;
+ (id)displayedShortAccountTypeString;
+ (id)displayedAccountTypeString;
+ (void )legacyKeychainProtocol;
+ (id)accountTypeString;
- (void)dealloc;
- (BOOL)canBeFallbackAccount;
- (BOOL)_isAppleServiceDeliveryHostname:(id)arg1;
- (void)releaseAllForcedConnections;
- (void)releaseAllConnections;
- (void)checkInConnection:(id)arg1;
- (void)setTimer;
- (void)connectionExpired:(id)arg1;
- (void)disconnect:(id)arg1;
- (id)authenticatedConnection:(BOOL)arg1;
- (struct __CFString )connectionServiceType;
- (void)setSupportsOutboxCopy:(BOOL)arg1;
- (BOOL)supportsOutboxCopy;
- (void)setSupportsPipelining:(BOOL)arg1;
- (BOOL)supportsPipelining;
- (id)errorForResponse:(id)arg1;
- (id)customAuthenticationErrorStringForError:(id)arg1 authScheme:(id)arg2;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)preferredAuthScheme;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (id)alternateConnectionSettings;
- (id)insecureConnectionSettings;
- (id)secureConnectionSettings;
- (id)connectionSettingsForAuthentication:(BOOL)arg1 secure:(id)arg2 insecure:(id)arg3;
- (id)_defaultSettingsWithPort:(unsigned int)arg1 useSSL:(BOOL)arg2 directSSL:(BOOL)arg3;
- (Class)connectionClass;
- (id)serviceName;
- (void)setDeliveryClass:(Class)arg1;
- (Class)deliveryClass;
- (id)certUIService;

@end

