//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKGame, NSData;

@protocol GKExtensionHostProtocol <NSObject>
@property(retain, nonatomic) GKGame *game;
- (void)messageFromExtension:(NSData *)arg1;

@optional
- (void)remoteViewControllerIsFinishing;
- (void)remoteViewControllerIsCanceling;
@end

