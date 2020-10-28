//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface MNTracePlaybackDetails : PBCodable <NSCopying>
{
    double _currentPosition;
    double _pedestrianTraceStartRelativeTimestamp;
    double _traceDuration;
    NSMutableArray *_bookmarks;
    int _eventType;
    NSString *_pedestrianTracePath;
    unsigned int _recordedBookmarkID;
    NSString *_tracePath;
    struct {
        unsigned int currentPosition:1;
        unsigned int pedestrianTraceStartRelativeTimestamp:1;
        unsigned int traceDuration:1;
        unsigned int eventType:1;
        unsigned int recordedBookmarkID:1;
    } _has;
}

+ (Class)bookmarkType;
@property(nonatomic) double pedestrianTraceStartRelativeTimestamp; // @synthesize pedestrianTraceStartRelativeTimestamp=_pedestrianTraceStartRelativeTimestamp;
@property(retain, nonatomic) NSString *pedestrianTracePath; // @synthesize pedestrianTracePath=_pedestrianTracePath;
@property(nonatomic) unsigned int recordedBookmarkID; // @synthesize recordedBookmarkID=_recordedBookmarkID;
@property(retain, nonatomic) NSMutableArray *bookmarks; // @synthesize bookmarks=_bookmarks;
@property(nonatomic) double currentPosition; // @synthesize currentPosition=_currentPosition;
@property(nonatomic) double traceDuration; // @synthesize traceDuration=_traceDuration;
@property(retain, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
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
@property(nonatomic) BOOL hasPedestrianTraceStartRelativeTimestamp;
@property(readonly, nonatomic) BOOL hasPedestrianTracePath;
@property(nonatomic) BOOL hasRecordedBookmarkID;
- (id)bookmarkAtIndex:(NSUInteger)arg1;
- (NSUInteger)bookmarksCount;
- (void)addBookmark:(id)arg1;
- (void)clearBookmarks;
@property(nonatomic) BOOL hasCurrentPosition;
@property(nonatomic) BOOL hasTraceDuration;
@property(readonly, nonatomic) BOOL hasTracePath;
- (int)StringAsEventType:(id)arg1;
- (id)eventTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasEventType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;

@end

