//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDBulletinBoardNotificationServiceGroup, HMDService, HMFMessageDispatcher, NSObject, NSPredicate, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDBulletinBoardNotification : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState>
{
    BOOL _enabled;
    NSPredicate *_condition;
    HMDBulletinBoardNotificationServiceGroup *_notificationServiceGroup;
    NSUUID *_targetUUID;
    HMDService *_service;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (BOOL)supportsBulletinNotificationGroup:(id)arg1;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak HMDService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSPredicate *condition; // @synthesize condition=_condition;
// - (void).cxx_destruct;
- (id)dumpState;
@property(retain, nonatomic) HMDBulletinBoardNotificationServiceGroup *notificationServiceGroup; // @synthesize notificationServiceGroup=_notificationServiceGroup;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_handleBulletinBoardNotificationCommitRequest:(id)arg1;
- (void)configureBulletinNotification;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_registerNotificationHandlers;
- (void)configureMsgDispatcher:(id)arg1;
- (id)logIdentifier;
@property(readonly, copy, nonatomic) NSUUID *targetUUID; // @synthesize targetUUID=_targetUUID;
- (void)dealloc;
- (id)initWithService:(id)arg1;
- (id)init;

@end

