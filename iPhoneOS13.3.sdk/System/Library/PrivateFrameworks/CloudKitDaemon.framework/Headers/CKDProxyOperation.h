//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

#import <CloudKitDaemon/CKDOperationInfoDelegate-Protocol.h>

@class CKOperationResult;

__attribute__((visibility("hidden")))
@interface CKDProxyOperation : CKDOperation <CKDOperationInfoDelegate>
{
    BOOL _didHandleCancel;
    id /* CDUnknownBlockType */ _operationProgressedBlock;
    CKOperationResult *_cachedResult;
}

@property(nonatomic) BOOL didHandleCancel; // @synthesize didHandleCancel=_didHandleCancel;
@property(retain, nonatomic) CKOperationResult *cachedResult; // @synthesize cachedResult=_cachedResult;
@property(copy, nonatomic) id /* CDUnknownBlockType */ operationProgressedBlock; // @synthesize operationProgressedBlock=_operationProgressedBlock;
// - (void).cxx_destruct;
- (id)operationResult;
- (void)_cancelOnCallbackQueueIfNecessary;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)operationWithID:(id)arg1 didComplete:(id)arg2;
- (void)operationWithID:(id)arg1 didProgress:(id)arg2;
- (void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;
- (void)main;
- (BOOL)isProxyOperation;
- (BOOL)shouldCheckAppVersion;
@property(readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

@end

