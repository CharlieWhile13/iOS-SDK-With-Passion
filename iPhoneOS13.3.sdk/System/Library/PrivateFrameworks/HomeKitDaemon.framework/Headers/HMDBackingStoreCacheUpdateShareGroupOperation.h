//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class CKShare, HMDBackingStoreCacheShareGroup, NSArray;

@interface HMDBackingStoreCacheUpdateShareGroupOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheShareGroup *_record;
    CKShare *_share;
    NSArray *_users;
}

@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *record; // @synthesize record=_record;
// - (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithShareGroup:(id)arg1 share:(id)arg2 users:(id)arg3 resultBlock:(id /* CDUnknownBlockType */)arg4;

@end

