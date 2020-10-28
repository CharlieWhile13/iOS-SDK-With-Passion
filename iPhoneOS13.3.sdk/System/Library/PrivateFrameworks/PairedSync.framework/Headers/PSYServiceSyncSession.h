//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRDevice, NSUUID, PSYSyncCoordinator;
@protocol OS_dispatch_queue, PSYServiceSyncSessionDelegate;

@interface PSYServiceSyncSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isComplete;
    BOOL _supportsMigrationSync;
    BOOL _complete;
    NRDevice *_pairedDevice;
    NSUUID *_sessionIdentifier;
    PSYSyncCoordinator *_syncCoordinator;
    NSUInteger _switchID;
    NSUInteger _syncSessionType;
    id <PSYServiceSyncSessionDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property(nonatomic) __weak id <PSYServiceSyncSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSUInteger syncSessionType; // @synthesize syncSessionType=_syncSessionType;
@property(nonatomic) NSUInteger switchID; // @synthesize switchID=_switchID;
@property(nonatomic) __weak PSYSyncCoordinator *syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property(retain, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NRDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
// - (void).cxx_destruct;
- (void)reportProgress:(double)arg1;
- (void)syncDidFailWithError:(id)arg1;
- (void)syncDidComplete;
- (void)syncDidCompleteSending;
- (id)initWithQueue:(id)arg1 supportsMigrationSync:(BOOL)arg2;

@end

