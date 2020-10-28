//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CBPeripheral, NSData, NSMapTable, NSMutableDictionary, NSNumber, NSString;

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : HMFObject
{
    BOOL _notifyingCharacteristicUpdated;
    BOOL _monitorState;
    double _lastSeen;
    CBPeripheral *_peripheral;
    NSNumber *_statusFlags;
    NSNumber *_stateNumber;
    NSNumber *_configNumber;
    NSNumber *_categoryIdentifier;
    NSString *_identifier;
    NSData *_setupHash;
    NSUInteger _advertisementFormat;
    NSMutableDictionary *_cachedDescriptors;
    NSMapTable *_cachedCharacteristicSignatures;
    NSMapTable *_cachedServiceSignatures;
    NSUInteger _connectionPriority;
}

@property(nonatomic) NSUInteger connectionPriority; // @synthesize connectionPriority=_connectionPriority;
@property(nonatomic) BOOL monitorState; // @synthesize monitorState=_monitorState;
@property(readonly, nonatomic) NSMapTable *cachedServiceSignatures; // @synthesize cachedServiceSignatures=_cachedServiceSignatures;
@property(readonly, nonatomic) NSMapTable *cachedCharacteristicSignatures; // @synthesize cachedCharacteristicSignatures=_cachedCharacteristicSignatures;
@property(readonly, nonatomic) NSMutableDictionary *cachedDescriptors; // @synthesize cachedDescriptors=_cachedDescriptors;
@property(nonatomic) BOOL notifyingCharacteristicUpdated; // @synthesize notifyingCharacteristicUpdated=_notifyingCharacteristicUpdated;
@property(nonatomic) NSUInteger advertisementFormat; // @synthesize advertisementFormat=_advertisementFormat;
@property(readonly, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) NSNumber *configNumber; // @synthesize configNumber=_configNumber;
@property(retain, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(retain, nonatomic) NSNumber *statusFlags; // @synthesize statusFlags=_statusFlags;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(readonly, nonatomic) double lastSeen; // @synthesize lastSeen=_lastSeen;
// - (void).cxx_destruct;
- (id)description;
- (void)updatePairedPeripheralConfiguration:(BOOL)arg1 connectionPriority:(NSUInteger)arg2;
- (id)initRecentlySeenPairedBTLEPeripheral:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 identifier:(id)arg6 advertisementFormat:(NSUInteger)arg7 setupHash:(id)arg8;

@end

