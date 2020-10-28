//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDHomeAdministratorHandler, NSObject, NSUUID;
@protocol HMFMessageReceiver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMDHomeAdministratorReceiver : HMFObject <HMFLogging, HMFMessageReceiver>
{
    id <HMFMessageReceiver> _receiver;
    HMDHomeAdministratorHandler *_handler;
}

+ (id)logCategory;
@property(readonly) __weak HMDHomeAdministratorHandler *handler; // @synthesize handler=_handler;
@property(readonly) __weak id <HMFMessageReceiver> receiver; // @synthesize receiver=_receiver;
// - (void).cxx_destruct;
- (id)logIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)__handleMessage:(id)arg1;
- (void)registerForMessage:(id)arg1 policies:(id)arg2;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithReceiver:(id)arg1 handler:(id)arg2;

@end
