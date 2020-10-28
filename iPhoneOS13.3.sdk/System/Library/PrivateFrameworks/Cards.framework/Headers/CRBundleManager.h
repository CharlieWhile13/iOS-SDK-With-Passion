//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface CRBundleManager : NSObject
{
    NSMutableSet *_bundles;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (Class)bundleClass;
+ (id)bundleDirectoryName;
+ (id)bundleDirectoryPath;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_getBundlesOnCurrentQueueWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getBundlesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end

