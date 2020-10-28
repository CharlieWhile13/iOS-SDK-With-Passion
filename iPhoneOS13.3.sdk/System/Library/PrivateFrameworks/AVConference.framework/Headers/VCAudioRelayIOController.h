//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIOControllerControl-Protocol.h>

@class NSMutableArray, VCAudioRelay, VCAudioRelayIOControllerSettings;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioRelayIOController : NSObject <VCAudioIOControllerControl>
{
    unsigned int _relayType;
    unsigned int _relayIOType;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_allClients;
    NSMutableArray *_startingIOClients;
    VCAudioRelay *_relay;
    struct _VCAudioIOControllerIOState _sinkData;
    struct _VCAudioIOControllerIOState _sourceData;
    VCAudioRelayIOControllerSettings *_currentSettings;
}

+ (id)sharedInstanceSafeViewClientFacing;
+ (id)sharedInstanceSafeViewRemoteFacing;
+ (id)sharedInstanceClientFacing;
+ (id)sharedInstanceRemoteFacing;
+ (void)initializeStateStrings;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo )arg1;
- (void)updateClient:(id)arg1;
- (void)stopClient:(id)arg1;
- (void)startClient:(id)arg1;
- (void)flushEventQueue:(struct opaqueCMSimpleQueue )arg1;
- (void)processEventQueue:(struct AudioEventQueue_t )arg1 clientList:(id)arg2;
- (BOOL)updateStateWithClient:(id)arg1;
- (BOOL)stateRunningWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int )arg3;
- (BOOL)stateStartingWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int )arg3;
- (void)addStartingClient:(id)arg1 controllerSettings:(id)arg2;
- (BOOL)statePrepareWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int )arg3;
- (BOOL)handleTransitionPrepareToStarting;
- (BOOL)stateIdleWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int )arg3;
- (void)unregisterClientIO:(struct _VCAudioIOControllerClientIO )arg1 controllerIO:(struct _VCAudioIOControllerIOState )arg2;
- (void)registerClientIO:(struct _VCAudioIOControllerClientIO )arg1 controllerIO:(struct _VCAudioIOControllerIOState )arg2;
- (void)resetAudioTimestamps;
- (id)newRelayIOWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)startRelayIO:(id)arg1;
- (id)newControllerSettingsWithNewClient:(id)arg1;
- (void)_cleanupDeadClients;
- (BOOL)removeClient:(id)arg1;
- (BOOL)addClient:(id)arg1;
- (void)removeAllClientsForIO:(struct _VCAudioIOControllerIOState )arg1;
- (struct _VCAudioIOControllerIOState )sourceIO;
- (struct _VCAudioIOControllerIOState )sinkIO;
- (void)unloadRelay;
- (void)loadRelay;
- (void)dealloc;
- (id)initWithRelayType:(unsigned int)arg1 relayIOType:(unsigned int)arg2;

@end

