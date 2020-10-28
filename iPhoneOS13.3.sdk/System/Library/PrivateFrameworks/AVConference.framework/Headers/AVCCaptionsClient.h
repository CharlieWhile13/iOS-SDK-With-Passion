//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient;
@protocol AVCCaptionsClientDelegate, OS_dispatch_queue;

@interface AVCCaptionsClient : NSObject
{
    long long _streamToken;
    id _delegate;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(readonly) long long streamToken; // @synthesize streamToken=_streamToken;
- (void)configureCaptions:(id)arg1;
- (void)enableCaptions:(BOOL)arg1;
@property(readonly) BOOL captionsSupported;
@property(readonly) BOOL captionsEnabled;
@property(readonly) id <AVCCaptionsClientDelegate> delegate;
- (void)deregisterBlocksForNotifications;
- (void)registerBlocksForNotifications;
- (void)disconnect;
- (BOOL)connect;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 streamToken:(long long)arg2;

@end

