//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConversationKit/_TtC15ConversationKit22ConversationController.h>

#import <ConversationKit/AVCRemoteVideoClientDelegate-Protocol.h>

@interface _TtC15ConversationKit22ConversationController (ConversationKit2) <AVCRemoteVideoClientDelegate>
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 videoDidDegrade:(BOOL)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(BOOL)arg2;
- (void)remoteVideoClient:(id)arg1 videoDidSuspend:(BOOL)arg2;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;
@end

