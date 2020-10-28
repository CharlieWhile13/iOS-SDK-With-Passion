//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface PREUMResponseItem : PBCodable <NSCopying>
{
    unsigned int _modelId;
    unsigned int _replyTextId;
    unsigned int _responseClassId;
    BOOL _isCustomResponse;
    struct {
        unsigned int modelId:1;
        unsigned int replyTextId:1;
        unsigned int responseClassId:1;
        unsigned int isCustomResponse:1;
    } _has;
}

@property(nonatomic) BOOL isCustomResponse; // @synthesize isCustomResponse=_isCustomResponse;
@property(nonatomic) unsigned int replyTextId; // @synthesize replyTextId=_replyTextId;
@property(nonatomic) unsigned int responseClassId; // @synthesize responseClassId=_responseClassId;
@property(nonatomic) unsigned int modelId; // @synthesize modelId=_modelId;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsCustomResponse;
@property(nonatomic) BOOL hasReplyTextId;
@property(nonatomic) BOOL hasResponseClassId;
@property(nonatomic) BOOL hasModelId;

@end

