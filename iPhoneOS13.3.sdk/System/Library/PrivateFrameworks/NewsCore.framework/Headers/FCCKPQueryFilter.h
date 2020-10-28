//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class FCCKPRecordFieldIdentifier, FCCKPRecordFieldValue;

@interface FCCKPQueryFilter : PBCodable <NSCopying>
{
    FCCKPRecordFieldIdentifier *_fieldName;
    FCCKPRecordFieldValue *_fieldValue;
    int _type;
    CDStruct_f953fb60 _has;
}

@property(retain, nonatomic) FCCKPRecordFieldValue *fieldValue; // @synthesize fieldValue=_fieldValue;
@property(retain, nonatomic) FCCKPRecordFieldIdentifier *fieldName; // @synthesize fieldName=_fieldName;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL hasFieldValue;
@property(readonly, nonatomic) BOOL hasFieldName;
- (void)dealloc;

@end

