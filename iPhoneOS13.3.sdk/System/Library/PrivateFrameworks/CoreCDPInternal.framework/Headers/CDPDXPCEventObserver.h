//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CDPDXPCEventObserver : NSObject
{
    NSMutableArray *_eventListeners;
}

+ (id)sharedObserver;
// - (void).cxx_destruct;
- (void)_setupDistributedListener;
- (void)_setupDarwinListener;
- (void)start;
- (void)registerListener:(id)arg1;

@end

