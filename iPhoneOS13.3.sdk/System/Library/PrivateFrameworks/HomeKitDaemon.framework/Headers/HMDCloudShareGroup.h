//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CKShare, HMDBackingStoreCacheShareGroup, HMDCloudCache, HMDCloudGroup, HMDCloudRecord, HMDCloudZone, NSMutableArray, NSString, NSUUID;

@interface HMDCloudShareGroup : HMFObject
{
    HMDCloudCache *_cache;
    HMDCloudZone *_cloudZone;
    NSUUID *_ownerID;
    NSUUID *_identifier;
    HMDCloudGroup *_cloudGroup;
    CKShare *_share;
    HMDBackingStoreCacheShareGroup *_backingStoreShareGroup;
    NSMutableArray *_recordNames;
}

+ (id)shortDescription;
+ (void)createShareGroupWithRootRecordName:(id)arg1 owner:(id)arg2 cloudGroup:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
@property(retain, nonatomic) NSMutableArray *recordNames; // @synthesize recordNames=_recordNames;
@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *backingStoreShareGroup; // @synthesize backingStoreShareGroup=_backingStoreShareGroup;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
@property(nonatomic) __weak HMDCloudGroup *cloudGroup; // @synthesize cloudGroup=_cloudGroup;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSUUID *ownerID; // @synthesize ownerID=_ownerID;
@property(nonatomic) __weak HMDCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(nonatomic) __weak HMDCloudCache *cache; // @synthesize cache=_cache;
// - (void).cxx_destruct;
- (void)shareOnlyDeleteCloudRecord:(id)arg1;
- (void)shareOnlyUpdateCloudRecord:(id)arg1;
- (void)deleteCloudRecord:(id)arg1;
- (void)deleteCloudRecordNames:(id)arg1;
- (void)updateCloudRecord:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)updateCloudRecord:(id)arg1;
- (void)addCloudRecord:(id)arg1;
- (id)cloudRecordWithObjectID:(id)arg1;
- (id)cloudRecordWithName:(id)arg1;
- (BOOL)isRootRecord:(id)arg1;
- (void)allDescendentsCloudRecordsForParentID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)cloudRecordsForParentID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_cloudRecordsForParentIDs:(id)arg1 recursive:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)cloudRecordWithObjectID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)cloudRecordWithName:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)cloudRecordWithNames:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchCloudRecordMap:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isRootRecordName:(id)arg1;
@property(readonly, nonatomic) HMDCloudRecord *rootRecord;
- (id)rootRecordModelObject;
- (id)rootRecordObjectID;
@property(readonly, nonatomic) NSUUID *parentIdentifier;
@property(readonly, nonatomic) NSString *rootRecordName;
- (id)description;
- (id)shortDescription;
- (id)initWithBackingStoreCacheShareGroup:(id)arg1 cloudGroup:(id)arg2;
- (id)init;

@end

