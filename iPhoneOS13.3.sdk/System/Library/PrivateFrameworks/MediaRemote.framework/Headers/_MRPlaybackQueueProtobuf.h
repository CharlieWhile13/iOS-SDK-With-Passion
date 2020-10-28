//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueContextProtobuf;

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_contentItems;
    _MRPlaybackQueueContextProtobuf *_context;
    int _location;
    NSString *_queueIdentifier;
    NSString *_requestID;
    _MRNowPlayingPlayerPathProtobuf *_resolvedPlayerPath;
    BOOL _sendingPlaybackQueueTransaction;
    struct {
        unsigned int location:1;
        unsigned int sendingPlaybackQueueTransaction:1;
    } _has;
}

+ (Class)contentItemType;
@property(retain, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property(nonatomic) BOOL sendingPlaybackQueueTransaction; // @synthesize sendingPlaybackQueueTransaction=_sendingPlaybackQueueTransaction;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *resolvedPlayerPath; // @synthesize resolvedPlayerPath=_resolvedPlayerPath;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) _MRPlaybackQueueContextProtobuf *context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableArray *contentItems; // @synthesize contentItems=_contentItems;
@property(nonatomic) int location; // @synthesize location=_location;
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
@property(readonly, nonatomic) BOOL hasQueueIdentifier;
@property(nonatomic) BOOL hasSendingPlaybackQueueTransaction;
@property(readonly, nonatomic) BOOL hasResolvedPlayerPath;
@property(readonly, nonatomic) BOOL hasRequestID;
@property(readonly, nonatomic) BOOL hasContext;
- (id)contentItemAtIndex:(NSUInteger)arg1;
- (NSUInteger)contentItemsCount;
- (void)addContentItem:(id)arg1;
- (void)clearContentItems;
@property(nonatomic) BOOL hasLocation;

@end

