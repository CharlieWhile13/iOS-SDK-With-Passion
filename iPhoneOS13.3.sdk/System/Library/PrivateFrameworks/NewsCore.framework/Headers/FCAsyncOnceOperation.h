//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFMutexLock;
@protocol FCOperationCanceling><FCOperationPrioritizing, OS_dispatch_group;

@interface FCAsyncOnceOperation : NSObject
{
    BOOL _finished;
    BOOL _succeeded;
    id /* CDUnknownBlockType */ _workBlock;
    NSUInteger _interest;
    NSObject<OS_dispatch_group> *_activeGroup;
    id <FCOperationCanceling><FCOperationPrioritizing> _activeOperation;
    long long _relativePriority;
    NFMutexLock *_lock;
}

@property(retain, nonatomic) NFMutexLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long relativePriority; // @synthesize relativePriority=_relativePriority;
@property(retain, nonatomic) id <FCOperationCanceling><FCOperationPrioritizing> activeOperation; // @synthesize activeOperation=_activeOperation;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *activeGroup; // @synthesize activeGroup=_activeGroup;
@property(nonatomic) NSUInteger interest; // @synthesize interest=_interest;
@property(nonatomic) BOOL succeeded; // @synthesize succeeded=_succeeded;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
@property(copy, nonatomic) id /* CDUnknownBlockType */ workBlock; // @synthesize workBlock=_workBlock;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL finishedExecutingWithFailure;
@property(readonly, nonatomic) BOOL finishedExecuting;
- (id)executeWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithBlock:(id /* CDUnknownBlockType */)arg1;

@end

