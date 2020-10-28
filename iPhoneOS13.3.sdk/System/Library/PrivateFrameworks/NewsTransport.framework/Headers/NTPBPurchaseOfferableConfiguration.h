//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NTPBPurchaseOfferableConfiguration : PBCodable <NSCopying>
{
    NSString *_purchaseId;
    BOOL _allowsPublisherPadApp;
    BOOL _allowsPublisherPhoneApp;
    BOOL _allowsPublisherWebSite;
    BOOL _preferredOffer;
    struct {
        unsigned int allowsPublisherPadApp:1;
        unsigned int allowsPublisherPhoneApp:1;
        unsigned int allowsPublisherWebSite:1;
        unsigned int preferredOffer:1;
    } _has;
}

@property(nonatomic) BOOL preferredOffer; // @synthesize preferredOffer=_preferredOffer;
@property(nonatomic) BOOL allowsPublisherWebSite; // @synthesize allowsPublisherWebSite=_allowsPublisherWebSite;
@property(nonatomic) BOOL allowsPublisherPadApp; // @synthesize allowsPublisherPadApp=_allowsPublisherPadApp;
@property(nonatomic) BOOL allowsPublisherPhoneApp; // @synthesize allowsPublisherPhoneApp=_allowsPublisherPhoneApp;
@property(retain, nonatomic) NSString *purchaseId; // @synthesize purchaseId=_purchaseId;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPreferredOffer;
@property(nonatomic) BOOL hasAllowsPublisherWebSite;
@property(nonatomic) BOOL hasAllowsPublisherPadApp;
@property(nonatomic) BOOL hasAllowsPublisherPhoneApp;
@property(readonly, nonatomic) BOOL hasPurchaseId;
- (void)dealloc;

@end

