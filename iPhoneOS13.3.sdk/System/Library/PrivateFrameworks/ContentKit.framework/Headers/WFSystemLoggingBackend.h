//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/WFLoggingBackend-Protocol.h>

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface WFSystemLoggingBackend : NSObject <WFLoggingBackend>
{
    NSObject<OS_os_log> *_log;
}

// - (void).cxx_destruct;
- (void)logEvent:(id)arg1 withProperties:(id)arg2;
- (id)init;

@end
