//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SIMToolkitUI/STKAlertSessionResponseProvider-Protocol.h>

@class NSDictionary;
@protocol OS_dispatch_queue, OS_os_log;

@interface _STKUSSDResponseProvider : NSObject <STKAlertSessionResponseProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    struct __CTServerConnection _connection;
    NSDictionary *_options;
    BOOL _hasSentResponse;
    NSObject<OS_os_log> *_logger;
}

// - (void).cxx_destruct;
- (void)sendResponse:(long long)arg1 withStringResult:(id)arg2;
- (void)sendResponse:(long long)arg1;
@property(readonly, nonatomic) BOOL hasSentResponse;
@property(readonly, nonatomic) NSObject<OS_os_log> *logger;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 connection:(struct __CTServerConnection )arg2 options:(id)arg3 logger:(id)arg4;

@end

