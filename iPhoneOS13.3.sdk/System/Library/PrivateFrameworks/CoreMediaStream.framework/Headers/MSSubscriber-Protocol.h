//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MSSubscribedStream, NSArray;
@protocol MSSubscriberDelegate;

@protocol MSSubscriber
@property(nonatomic) id <MSSubscriberDelegate> delegate;
- (void)stop;
- (void)abort;
- (MSSubscribedStream *)ownSubscribedStream;
- (NSArray *)subscribedStreams;
- (void)retrieveAssets:(NSArray *)arg1;
- (void)checkForOutstandingActivities;
- (void)checkForNewAssetCollections;
- (void)resetSync;
@end

