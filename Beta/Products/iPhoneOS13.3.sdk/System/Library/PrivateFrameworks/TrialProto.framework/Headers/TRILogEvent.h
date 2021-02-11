/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

@interface TRILogEvent : PBCodable <NSCopying> {
    TRILogContext * _context;
    TRIDenormalizedEvent * _denormalizedEvent;
}

@property (nonatomic, retain) TRILogContext *context;
@property (nonatomic, retain) TRIDenormalizedEvent *denormalizedEvent;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic, readonly) bool hasDenormalizedEvent;

// Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto

- (void).cxx_destruct;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)denormalizedEvent;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContext;
- (bool)hasDenormalizedEvent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDenormalizedEvent:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Trial.framework/Trial

+ (id)contextWithTrackingId:(id)arg1 projectId:(int)arg2;
+ (id)currentTime;
+ (id)eventWithTrackingId:(id)arg1 projectId:(int)arg2;

@end