//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol OS_dispatch_queue;

@interface PPAppLaunchMonitorRegistrationContext : NSObject
{
    NSNumber *_token;
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _handler;
}

@property(readonly, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSNumber *token; // @synthesize token=_token;
// - (void).cxx_destruct;
- (id)initWithToken:(id)arg1 queue:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;

@end

