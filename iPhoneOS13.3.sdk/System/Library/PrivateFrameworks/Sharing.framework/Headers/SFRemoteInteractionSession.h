//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/SFXPCInterface-Protocol.h>

@class NSXPCConnection, SDRemoteInteractionAgent, SFDevice, SFSession;
@protocol OS_dispatch_queue;

@interface SFRemoteInteractionSession : NSObject <NSSecureCoding, SFXPCInterface>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFSession *_remoteSession;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    SFDevice *_peerDevice;
    id /* CDUnknownBlockType */ _remoteTextEventHandler;
    id /* CDUnknownBlockType */ _textSessionDidBegin;
    id /* CDUnknownBlockType */ _textSessionDidEnd;
    id /* CDUnknownBlockType */ _textSessionDidChange;
    SDRemoteInteractionAgent *_agent;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SDRemoteInteractionAgent *agent; // @synthesize agent=_agent;
@property(copy, nonatomic) id /* CDUnknownBlockType */ textSessionDidChange; // @synthesize textSessionDidChange=_textSessionDidChange;
@property(copy, nonatomic) id /* CDUnknownBlockType */ textSessionDidEnd; // @synthesize textSessionDidEnd=_textSessionDidEnd;
@property(copy, nonatomic) id /* CDUnknownBlockType */ textSessionDidBegin; // @synthesize textSessionDidBegin=_textSessionDidBegin;
@property(copy, nonatomic) id /* CDUnknownBlockType */ remoteTextEventHandler; // @synthesize remoteTextEventHandler=_remoteTextEventHandler;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (void)remoteInteractionSessionTextSessionDidChange:(id)arg1;
- (void)remoteInteractionSessionTextSessionDidEnd:(id)arg1;
- (void)remoteInteractionSessionTextSessionDidBegin:(id)arg1;
- (void)remoteInteractionSessionRemoteTextEvent:(id)arg1;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_sessionHandleEvent:(id)arg1;
- (void)_sessionSendPayload:(NSDictionary )arg1;
- (void)_sessionStart;
- (void)sendPayload:(NSDictionary )arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

