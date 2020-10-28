//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, PBDataReader;

@interface GEODirectionsFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_alightNotificationFeedbacks;
    NSData *_directionResponseID;
    NSMutableArray *_guidanceFeedbacks;
    NSMutableArray *_modalitys;
    NSMutableArray *_stepFeedbacks;
    NSMutableArray *_trafficRerouteFeedbacks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_alightNotificationFeedbacks:1;
        unsigned int read_directionResponseID:1;
        unsigned int read_guidanceFeedbacks:1;
        unsigned int read_modalitys:1;
        unsigned int read_stepFeedbacks:1;
        unsigned int read_trafficRerouteFeedbacks:1;
        unsigned int wrote_alightNotificationFeedbacks:1;
        unsigned int wrote_directionResponseID:1;
        unsigned int wrote_guidanceFeedbacks:1;
        unsigned int wrote_modalitys:1;
        unsigned int wrote_stepFeedbacks:1;
        unsigned int wrote_trafficRerouteFeedbacks:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)modalityType;
+ (Class)guidanceFeedbackType;
+ (Class)alightNotificationFeedbackType;
+ (Class)trafficRerouteFeedbackType;
+ (Class)stepFeedbackType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)modalityAtIndex:(NSUInteger)arg1;
- (NSUInteger)modalitysCount;
- (void)_addNoFlagsModality:(id)arg1;
- (void)addModality:(id)arg1;
- (void)clearModalitys;
@property(retain, nonatomic) NSMutableArray *modalitys;
- (void)_readModalitys;
- (id)guidanceFeedbackAtIndex:(NSUInteger)arg1;
- (NSUInteger)guidanceFeedbacksCount;
- (void)_addNoFlagsGuidanceFeedback:(id)arg1;
- (void)addGuidanceFeedback:(id)arg1;
- (void)clearGuidanceFeedbacks;
@property(retain, nonatomic) NSMutableArray *guidanceFeedbacks;
- (void)_readGuidanceFeedbacks;
- (id)alightNotificationFeedbackAtIndex:(NSUInteger)arg1;
- (NSUInteger)alightNotificationFeedbacksCount;
- (void)_addNoFlagsAlightNotificationFeedback:(id)arg1;
- (void)addAlightNotificationFeedback:(id)arg1;
- (void)clearAlightNotificationFeedbacks;
@property(retain, nonatomic) NSMutableArray *alightNotificationFeedbacks;
- (void)_readAlightNotificationFeedbacks;
- (id)trafficRerouteFeedbackAtIndex:(NSUInteger)arg1;
- (NSUInteger)trafficRerouteFeedbacksCount;
- (void)_addNoFlagsTrafficRerouteFeedback:(id)arg1;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)clearTrafficRerouteFeedbacks;
@property(retain, nonatomic) NSMutableArray *trafficRerouteFeedbacks;
- (void)_readTrafficRerouteFeedbacks;
- (id)stepFeedbackAtIndex:(NSUInteger)arg1;
- (NSUInteger)stepFeedbacksCount;
- (void)_addNoFlagsStepFeedback:(id)arg1;
- (void)addStepFeedback:(id)arg1;
- (void)clearStepFeedbacks;
@property(retain, nonatomic) NSMutableArray *stepFeedbacks;
- (void)_readStepFeedbacks;
@property(retain, nonatomic) NSData *directionResponseID;
@property(readonly, nonatomic) BOOL hasDirectionResponseID;
- (void)_readDirectionResponseID;
- (id)initWithData:(id)arg1;
- (id)init;

@end

