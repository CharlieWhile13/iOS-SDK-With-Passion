//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKSubscription.h>

#import <HomeKitBackingStore/HMBModelObjectStorage-Protocol.h>

@interface CKSubscription (HMBCloudExtensions) <HMBModelObjectStorage>
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(NSUInteger)arg2 error:(id )arg3;
- (id)hmbEncodeForStorageLocation:(NSUInteger)arg1 error:(id )arg2;
@end

