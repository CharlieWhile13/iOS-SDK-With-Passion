//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSessionID.h>


@class NSNumber, NSString;

@interface HMDCameraSnapshotSessionID : HMDCameraSessionID <NSCopying>
{
    BOOL _snapshotRequestForBulletin;
    NSString *_snapshotCharacteristicEventUUID;
    NSUInteger _snapshotReason;
    NSNumber *_streamingTier;
}

@property(readonly) NSNumber *streamingTier; // @synthesize streamingTier=_streamingTier;
@property(readonly, getter=isSnapshotRequestForBulletin) BOOL snapshotRequestForBulletin; // @synthesize snapshotRequestForBulletin=_snapshotRequestForBulletin;
@property(readonly) NSUInteger snapshotReason; // @synthesize snapshotReason=_snapshotReason;
@property(readonly) NSString *snapshotCharacteristicEventUUID; // @synthesize snapshotCharacteristicEventUUID=_snapshotCharacteristicEventUUID;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithAccessory:(id)arg1 message:(id)arg2;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 cameraSessionAppID:(id)arg3 descriptionString:(id)arg4 spiClient:(BOOL)arg5 snapshotReason:(NSUInteger)arg6 snapshotRequestForBulletin:(BOOL)arg7 snapshotCharacteristicEventUUID:(id)arg8 streamingTier:(id)arg9;

@end

