//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUbiquitousKeyValueStore;
@protocol DOCTagRegistryDelegate, OS_dispatch_queue;

@interface DOCTagRegistryICloudDataSource : NSObject
{
    NSUbiquitousKeyValueStore *_store;
    NSObject *_iCloudToken;
    NSObject<OS_dispatch_queue> *_workingQueue;
    id <DOCTagRegistryDelegate> _delegate;
}

@property(nonatomic) __weak id <DOCTagRegistryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(retain, nonatomic) NSObject *iCloudToken; // @synthesize iCloudToken=_iCloudToken;
@property(retain, nonatomic) NSUbiquitousKeyValueStore *store; // @synthesize store=_store;
// - (void).cxx_destruct;
- (long long)iCloudTagSerialNumber;
- (long long)iCloudTagVersion;
- (id)iCloudTags;
- (id)iCloudTagsDictionary;
- (void)isICloudAvailableWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)iCloudTokenWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)writeTagsToCloud;
- (void)readTagsFromCloud:(BOOL)arg1;
- (void)syncTagsWithCloud:(BOOL)arg1 isICloudAvailable:(BOOL)arg2;
- (void)syncTagsWithCloud:(BOOL)arg1;
- (void)kvsStoreDidChange:(id)arg1;
- (void)ubiquityIdentityDidChange;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

