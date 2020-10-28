//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCAssistantConnection, MPCAssistantDiscovery;

@interface MPCAssistantSendCommand : NSObject
{
    MPCAssistantConnection *_connection;
    MPCAssistantDiscovery *_discovery;
}

// - (void).cxx_destruct;
- (void )_findEndpointFromEndpoints:(id)arg1 byGroupLeader:(id)arg2;
- (BOOL)_isAnyDeviceControllable:(id)arg1;
- (void)_sendCommand:(unsigned int)arg1 path:(void )arg2 options:(id)arg3 queue:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)_sendCommand:(unsigned int)arg1 withOptions:(id)arg2 toEndpoint:(void )arg3 toDestination:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)_formGroupAndSendCommand:(unsigned int)arg1 withOptions:(id)arg2 toExternalDestination:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 toEndpointDestination:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 toLocalDestination:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)init;

@end

