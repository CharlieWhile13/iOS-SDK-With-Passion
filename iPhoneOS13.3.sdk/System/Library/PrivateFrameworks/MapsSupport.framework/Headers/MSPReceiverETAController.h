//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPSharedTripRelayDelegate-Protocol.h>
#import <MapsSupport/MSPSharedTripStorageDelegate-Protocol.h>

@class MSPSharedTripBlacklist, MSPSharedTripRelay, MapsNotificationCenter, NSArray, NSMutableDictionary, NSTimer;
@protocol MSPReceiverETAControllerDelegate;

__attribute__((visibility("hidden")))
@interface MSPReceiverETAController : NSObject <MSPSharedTripStorageDelegate, MSPSharedTripRelayDelegate>
{
    NSMutableDictionary *_sharedSessions;
    NSMutableDictionary *_sharedNavStates;
    NSMutableDictionary *_temporaryNavStates;
    MapsNotificationCenter *_mapsNotificationCenter;
    MSPSharedTripRelay *_idsRelay;
    MSPSharedTripBlacklist *_blockedList;
    NSTimer *_cleanupTimer;
    id <MSPReceiverETAControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MSPReceiverETAControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)groupSessionEnded:(id)arg1;
- (void)groupSession:(id)arg1 participantDidLeave:(id)arg2;
- (void)groupSession:(id)arg1 participantDidJoin:(id)arg2;
- (void)storageController:(id)arg1 updatedSharedTripGroupStorage:(id)arg2;
- (void)relay:(id)arg1 sharingClosed:(id)arg2;
- (void)relay:(id)arg1 receiveData:(id)arg2 info:(id)arg3 fromID:(id)arg4;
- (void)_cleanGroup:(id)arg1;
- (BOOL)_cleanUpNecessaryForGroup:(id)arg1;
- (void)_cleanupIfNecessary;
- (void)_updateDelegateWithUpdateState:(id)arg1 to:(id)arg2 freshAvailable:(BOOL)arg3;
- (void)_updateData:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;
- (BOOL)_allowMessageWithState:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;
- (void)updateContacts;
- (void)_resolveContactIfNeeded:(id)arg1 fromId:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_showOrUpdateNotificationIfNeeded:(id)arg1;
- (void)blockSharedTrip:(id)arg1;
- (void)unsubscribeFromUpdatesToSharedTrip:(id)arg1;
- (void)subscribeToUpdatesToSharedTrip:(id)arg1;
@property(readonly, nonatomic) NSArray *allTrips;
- (void)cleanTimer;
- (void)_setNotificationCenter:(id)arg1;
- (void)dealloc;
- (id)initWithRelay:(id)arg1;

@end

