//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NNMKMessage, NSError, NSNumber, NSString, NSValue;
@protocol NNMKSyncStateManagerDelegate;

@protocol NNMKSyncStateManager <NSObject>
@property(nonatomic) __weak id <NNMKSyncStateManagerDelegate> delegate;
- (BOOL)pairedDeviceSupportsStandaloneMode;
- (BOOL)pairedDeviceSupportsMultipleMailboxes;
- (BOOL)willPresentNotificationForMessage:(NNMKMessage *)arg1;
- (BOOL)pairedDeviceSupportsMailContentProtectedChannel;
- (NSNumber *)pairedDeviceScreenScale;
- (NSValue *)pairedDeviceScreenSize;
- (NSString *)pairingStorePath;
- (BOOL)isInitialSyncRestricted;
- (void)reportInitialSyncDidFailWithError:(NSError *)arg1;
- (void)reportInitialSyncDidComplete;
- (void)reportInitialSyncDidCompleteSending;
- (void)reportInitialSyncProgress:(double)arg1;
@end

