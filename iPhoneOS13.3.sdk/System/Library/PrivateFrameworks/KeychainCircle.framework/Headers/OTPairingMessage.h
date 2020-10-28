//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class OTApplicantToSponsorRound2M1, OTSOSMessage, OTSponsorToApplicantRound1M2, OTSponsorToApplicantRound2M2;

__attribute__((visibility("hidden")))
@interface OTPairingMessage : PBCodable <NSCopying>
{
    OTSponsorToApplicantRound1M2 *_epoch;
    OTApplicantToSponsorRound2M1 *_prepare;
    OTSOSMessage *_sosPairingMessage;
    OTSponsorToApplicantRound2M2 *_voucher;
}

@property(retain, nonatomic) OTSOSMessage *sosPairingMessage; // @synthesize sosPairingMessage=_sosPairingMessage;
@property(retain, nonatomic) OTSponsorToApplicantRound2M2 *voucher; // @synthesize voucher=_voucher;
@property(retain, nonatomic) OTApplicantToSponsorRound2M1 *prepare; // @synthesize prepare=_prepare;
@property(retain, nonatomic) OTSponsorToApplicantRound1M2 *epoch; // @synthesize epoch=_epoch;
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
@property(readonly, nonatomic) BOOL hasSosPairingMessage;
@property(readonly, nonatomic) BOOL hasVoucher;
@property(readonly, nonatomic) BOOL hasPrepare;
@property(readonly, nonatomic) BOOL hasEpoch;

@end

