//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface SBReverseCountedSemaphore : NSObject
{
    NSObject<OS_dispatch_group> *_group;
}

// - (void).cxx_destruct;
- (void)wait;
- (void)decrement;
- (void)increment;
- (id)init;

@end
