//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSString;

@interface PKProtobufPaymentInstrumentThumbnailRequest : PBRequest <NSCopying>
{
    double _height;
    double _width;
    NSString *_manifestHash;
    NSString *_passIdentifier;
    struct {
        unsigned int height:1;
        unsigned int width:1;
    } _has;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(retain, nonatomic) NSString *passIdentifier; // @synthesize passIdentifier=_passIdentifier;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasHeight;
@property(nonatomic) BOOL hasWidth;
@property(readonly, nonatomic) BOOL hasManifestHash;
@property(readonly, nonatomic) BOOL hasPassIdentifier;

@end

