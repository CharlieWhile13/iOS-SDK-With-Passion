//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NAPromise-Protocol.h>

@class NSError, NSMutableArray, NSString;

@interface NAFuture : NSObject <NAPromise>
{
//     struct os_unfair_lock_s _lock;
    BOOL _finished;
    NSMutableArray *_completionBlocks;
    id _resultValue;
    NSError *_resultError;
    NSString *_descriptor;
}

+ (id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3;
+ (void)_setShouldEnforceThreadSafety:(BOOL)arg1;
+ (id)futureWithErrorOnlyHandlerAdapterBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)futureWithCompletionHandlerAdapterBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)_chainFuturesWithFutureStack:(id)arg1;
+ (id)chainFutures:(id)arg1;
+ (id)combineAllFutures:(id)arg1 ignoringErrors:(BOOL)arg2 scheduler:(id)arg3;
+ (id)combineAllFutures:(id)arg1 scheduler:(id)arg2;
+ (id)combineAllFutures:(id)arg1;
+ (id)lazyFutureWithBlock:(id /* CDUnknownBlockType */)arg1 scheduler:(id)arg2;
+ (id)lazyFutureWithBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)futureWithBlock:(id /* CDUnknownBlockType */)arg1 scheduler:(id)arg2;
+ (id)futureWithBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)futureWithNoResult;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithResult:(id)arg1;
@property(copy, nonatomic) NSString *descriptor; // @synthesize descriptor=_descriptor;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)recover:(id /* CDUnknownBlockType */)arg1;
- (id)reschedule:(id)arg1;
- (id)flatMap:(id /* CDUnknownBlockType */)arg1;
- (void)willAddCompletionBlock;
- (id)addCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)addFailureBlock:(id /* CDUnknownBlockType */)arg1;
- (id)addSuccessBlock:(id /* CDUnknownBlockType */)arg1;
- (id /* CDUnknownBlockType */)errorOnlyCompletionHandlerAdapter;
- (id /* CDUnknownBlockType */)completionHandlerAdapter;
- (BOOL)finishWithNoResult;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (void)didCancel;
- (BOOL)cancel;
- (BOOL)_queue_isCancelled;
@property(readonly, getter=isCancelled) BOOL cancelled;
@property(readonly, getter=isFinished) BOOL finished;
- (id)initWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (id)recoverIgnoringError;

@end

