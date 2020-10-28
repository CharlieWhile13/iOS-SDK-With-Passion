//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying>
{
    NSMutableArray *_paymentSummaryItems;
    NSString *_remotePaymentRequestIdentifier;
    NSString *_selectedAID;
    NSMutableArray *_shippingMethods;
    unsigned int _status;
    CDStruct_47fe53f2 _has;
}

+ (Class)shippingMethodsType;
+ (Class)paymentSummaryItemsType;
@property(retain, nonatomic) NSString *selectedAID; // @synthesize selectedAID=_selectedAID;
@property(retain, nonatomic) NSMutableArray *shippingMethods; // @synthesize shippingMethods=_shippingMethods;
@property(retain, nonatomic) NSMutableArray *paymentSummaryItems; // @synthesize paymentSummaryItems=_paymentSummaryItems;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *remotePaymentRequestIdentifier; // @synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier;
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
@property(readonly, nonatomic) BOOL hasSelectedAID;
- (id)shippingMethodsAtIndex:(NSUInteger)arg1;
- (NSUInteger)shippingMethodsCount;
- (void)addShippingMethods:(id)arg1;
- (void)clearShippingMethods;
- (id)paymentSummaryItemsAtIndex:(NSUInteger)arg1;
- (NSUInteger)paymentSummaryItemsCount;
- (void)addPaymentSummaryItems:(id)arg1;
- (void)clearPaymentSummaryItems;
@property(nonatomic) BOOL hasStatus;
@property(readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;

@end
