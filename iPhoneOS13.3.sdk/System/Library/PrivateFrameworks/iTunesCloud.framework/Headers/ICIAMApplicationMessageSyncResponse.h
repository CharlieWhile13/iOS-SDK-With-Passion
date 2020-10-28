//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface ICIAMApplicationMessageSyncResponse : PBCodable <NSCopying>
{
    NSString *_bundleID;
    NSMutableArray *_syncCommands;
}

+ (Class)syncCommandsType;
@property(retain, nonatomic) NSMutableArray *syncCommands; // @synthesize syncCommands=_syncCommands;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
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
- (id)syncCommandsAtIndex:(NSUInteger)arg1;
- (NSUInteger)syncCommandsCount;
- (void)addSyncCommands:(id)arg1;
- (void)clearSyncCommands;
@property(readonly, nonatomic) BOOL hasBundleID;

@end

