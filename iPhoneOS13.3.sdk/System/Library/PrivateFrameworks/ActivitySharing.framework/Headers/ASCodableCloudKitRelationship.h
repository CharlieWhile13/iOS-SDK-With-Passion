//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, NSString;

@interface ASCodableCloudKitRelationship : PBCodable <NSCopying>
{
    long long _eventCount;
    NSMutableArray *_addresses;
    NSString *_cloudKitAddress;
    NSMutableArray *_events;
    NSString *_incomingHandshakeToken;
    NSString *_outgoingHandshakeToken;
    NSString *_preferredReachableAddress;
    NSString *_preferredReachableService;
    unsigned int _supportedPhoneFeatures;
    unsigned int _supportedWatchFeatures;
    NSData *_uuid;
    struct {
        unsigned int eventCount:1;
        unsigned int supportedPhoneFeatures:1;
        unsigned int supportedWatchFeatures:1;
    } _has;
}

+ (Class)eventsType;
+ (Class)addressesType;
@property(nonatomic) unsigned int supportedWatchFeatures; // @synthesize supportedWatchFeatures=_supportedWatchFeatures;
@property(nonatomic) unsigned int supportedPhoneFeatures; // @synthesize supportedPhoneFeatures=_supportedPhoneFeatures;
@property(nonatomic) long long eventCount; // @synthesize eventCount=_eventCount;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSString *preferredReachableService; // @synthesize preferredReachableService=_preferredReachableService;
@property(retain, nonatomic) NSString *preferredReachableAddress; // @synthesize preferredReachableAddress=_preferredReachableAddress;
@property(retain, nonatomic) NSMutableArray *addresses; // @synthesize addresses=_addresses;
@property(retain, nonatomic) NSString *cloudKitAddress; // @synthesize cloudKitAddress=_cloudKitAddress;
@property(retain, nonatomic) NSString *outgoingHandshakeToken; // @synthesize outgoingHandshakeToken=_outgoingHandshakeToken;
@property(retain, nonatomic) NSString *incomingHandshakeToken; // @synthesize incomingHandshakeToken=_incomingHandshakeToken;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSupportedWatchFeatures;
@property(nonatomic) BOOL hasSupportedPhoneFeatures;
@property(nonatomic) BOOL hasEventCount;
- (id)eventsAtIndex:(NSUInteger)arg1;
- (NSUInteger)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
@property(readonly, nonatomic) BOOL hasPreferredReachableService;
@property(readonly, nonatomic) BOOL hasPreferredReachableAddress;
- (id)addressesAtIndex:(NSUInteger)arg1;
- (NSUInteger)addressesCount;
- (void)addAddresses:(id)arg1;
- (void)clearAddresses;
@property(readonly, nonatomic) BOOL hasCloudKitAddress;
@property(readonly, nonatomic) BOOL hasOutgoingHandshakeToken;
@property(readonly, nonatomic) BOOL hasIncomingHandshakeToken;
@property(readonly, nonatomic) BOOL hasUuid;

@end

