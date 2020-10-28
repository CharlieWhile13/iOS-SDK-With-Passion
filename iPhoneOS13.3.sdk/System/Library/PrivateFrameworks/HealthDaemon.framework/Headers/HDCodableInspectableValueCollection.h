//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class HDCodableMedicalCodingList, NSMutableArray;

@interface HDCodableInspectableValueCollection : PBCodable <NSCopying>
{
    long long _collectionType;
    NSMutableArray *_collections;
    HDCodableMedicalCodingList *_elementTags;
    struct {
        unsigned int collectionType:1;
    } _has;
}

+ (Class)collectionType;
@property(retain, nonatomic) HDCodableMedicalCodingList *elementTags; // @synthesize elementTags=_elementTags;
@property(retain, nonatomic) NSMutableArray *collections; // @synthesize collections=_collections;
@property(nonatomic) long long collectionType; // @synthesize collectionType=_collectionType;
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
@property(readonly, nonatomic) BOOL hasElementTags;
- (id)collectionAtIndex:(NSUInteger)arg1;
- (NSUInteger)collectionsCount;
- (void)addCollection:(id)arg1;
- (void)clearCollections;
@property(nonatomic) BOOL hasCollectionType;

@end

