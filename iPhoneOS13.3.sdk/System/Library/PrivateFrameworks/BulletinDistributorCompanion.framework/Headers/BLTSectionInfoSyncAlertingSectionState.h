//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface BLTSectionInfoSyncAlertingSectionState : NSObject
{
    NSUInteger _state;
    id /* CDUnknownBlockType */ _clientCompletion;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ clientCompletion; // @synthesize clientCompletion=_clientCompletion;
@property(nonatomic) NSUInteger state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (id)description;

@end

