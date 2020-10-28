//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARInputDeviceManager, CARObserverHashTable, CARSessionConfiguration, NSDictionary, NSNumber, NSString;

@interface CARSession : NSObject
{
    struct OpaqueFigEndpoint _endpoint;
    BOOL _isPaired;
    BOOL _authenticated;
    CARSessionConfiguration *_configuration;
    NSDictionary *_APEndPointInfo;
    NSString *_sourceVersion;
    CARInputDeviceManager *_inputDeviceManager;
    CARObserverHashTable *_observers;
}

@property(retain, nonatomic) CARObserverHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) CARInputDeviceManager *inputDeviceManager; // @synthesize inputDeviceManager=_inputDeviceManager;
@property(readonly, nonatomic, getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property(readonly, copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(readonly, copy, nonatomic) NSDictionary *APEndPointInfo; // @synthesize APEndPointInfo=_APEndPointInfo;
@property(readonly, nonatomic) BOOL isPaired; // @synthesize isPaired=_isPaired;
@property(readonly, nonatomic) CARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_newObserverAdded:(id)arg1;
- (void)sendCommand:(id)arg1 withParameters:(id)arg2;
- (void)_updateConfiguration;
- (void)_fetchAuthenticationStatus;
- (id)_endpointValueForKey:(struct __CFString )arg1;
- (struct OpaqueFigEndpoint )endpoint;
- (id)description;
- (void)takeScreenForConnection;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (BOOL)recognizingSpeech;
- (void)releaseTurnByTurnOwnership;
- (void)requestTurnByTurnOwnership;
- (NSUInteger)navigationOwner;
- (BOOL)carOwnsMainAudio;
- (BOOL)carOwnsScreen;
- (void)requestCarUIForURL:(id)arg1;
- (void)requestCarUI;
- (id)lastNavigatingBundleIdentifier;
- (id)systemNightMode;
- (id)MFiCertificateSerialNumber;
- (void)setInputMode:(NSUInteger)arg1 forInputDevice:(id)arg2;
@property(readonly, copy, nonatomic) NSNumber *electronicTollCollectionAvailable;
@property(readonly, copy, nonatomic) NSNumber *limitUserInterfaces;
@property(readonly, copy, nonatomic) NSNumber *nightMode;
- (id)_fig_safe_description;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint )arg1 requiresCarCapabilities:(BOOL)arg2;

@end

