//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PKFieldDetectorObserver-Protocol.h>

@class NSDictionary, NSDistributedNotificationCenter, NSSet, PKExpressPassInformation, PKFieldDetector, PKPass, PKPassLibrary, PKPaymentService;
@protocol NPKExpressPassControllerDelegate, OS_dispatch_queue;

@interface NPKExpressPassController : NSObject <PKFieldDetectorObserver>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _expressPassChangedNotifyToken;
    NSUInteger _transactionStatus;
    PKPass *_currentTransactionPass;
    NSSet *_expressPassesInformation;
    PKPaymentService *_queue_paymentService;
    PKPassLibrary *_passLibrary;
    NSDistributedNotificationCenter *_distributedNotificationCenter;
    id <NPKExpressPassControllerDelegate> _delegate;
    NSDictionary *_expressPasses;
    PKExpressPassInformation *_currentTransactionExpressPassInformation;
    PKFieldDetector *_fieldDetector;
}

@property(retain, nonatomic) PKFieldDetector *fieldDetector; // @synthesize fieldDetector=_fieldDetector;
@property(retain, nonatomic) PKExpressPassInformation *currentTransactionExpressPassInformation; // @synthesize currentTransactionExpressPassInformation=_currentTransactionExpressPassInformation;
@property(retain) NSDictionary *expressPasses; // @synthesize expressPasses=_expressPasses;
@property(retain) NSSet *expressPassesInformation; // @synthesize expressPassesInformation=_expressPassesInformation;
@property(retain, nonatomic) PKPass *currentTransactionPass; // @synthesize currentTransactionPass=_currentTransactionPass;
@property __weak id <NPKExpressPassControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;
- (void)_stopFieldDetector;
- (void)_startFieldDetector;
- (id)_expressPassesInformationWithTCIs:(id)arg1;
- (id)_expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1;
- (void)_queue_updateExpressPasses;
- (void)updateExpressPasses;
- (id)_queue_expressPassForTransactionApplicationIdentifier:(id)arg1;
- (BOOL)_hasNoTransactionStartOrEndNotificationForTechnologyType:(long long)arg1;
- (void)_handlePassesLibraryChangedNotification:(id)arg1;
- (void)_handleExitNearFieldNotification:(id)arg1;
- (void)_onqueue_transactionFailedWithApplicationIdentifier:(id)arg1;
- (void)_onqueue_transactionEndedWithApplicationIdentifier:(id)arg1;
- (void)_onqueue_transactionStartedWithApplicationIdentifier:(id)arg1;
- (void)_handleExpressTransactionFailedNotification:(id)arg1;
- (void)_handleExpressTransactionEndNotification:(id)arg1;
- (void)_handleExpressTransactionTimeOutNotification:(id)arg1;
- (void)_handleExpressTransactionStartNotification:(id)arg1;
- (void)_handleEnterNearFieldNotification:(id)arg1;
- (void)_stopListeningForExpressNotifications;
- (void)_startListeningForExpressNotifications;
- (void)_transitionToStatus:(NSUInteger)arg1 forExpressPass:(id)arg2 paymentApplicationIdentifier:(id)arg3;
@property(readonly, nonatomic) __weak NSDistributedNotificationCenter *distributedNotificationCenter; // @synthesize distributedNotificationCenter=_distributedNotificationCenter;
@property(readonly, nonatomic) __weak PKPassLibrary *passLibrary; // @synthesize passLibrary=_passLibrary;
- (id)_queue_paymentService;
- (void)reset;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)initWithPaymentService:(id)arg1 passLibrary:(id)arg2 distributedNotificationCenter:(id)arg3 delegate:(id)arg4;

@end

