//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMDUnpairedHAPAccessoryProgressHandler : HMFObject
{
    NSUUID *_accessoryUUID;
    id /* CDUnknownBlockType */ _progressHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
// - (void).cxx_destruct;
- (id)initWithAccessoryUUID:(id)arg1 progressHandler:(id /* CDUnknownBlockType */)arg2;

@end

