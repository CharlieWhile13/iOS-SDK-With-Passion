//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUMutableWarningSet : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_warnings;
}

// - (void).cxx_destruct;
- (BOOL)hasWarningsOfKind:(long long)arg1;
- (id)warningsOfKind:(long long)arg1;
- (id)popAllWarningsIfContainsWarningPassingTest:(id /* CDUnknownBlockType */)arg1;
- (id)popAllWarnings;
- (BOOL)containsWarningPassingTest:(id /* CDUnknownBlockType */)arg1;
- (id)warningsPassingTest:(id /* CDUnknownBlockType */)arg1;
- (void)addWarning:(id)arg1;
- (void)unionSet:(id)arg1;
@property(readonly) NSUInteger count;
- (id)initWithSet:(id)arg1;
- (id)init;

@end

