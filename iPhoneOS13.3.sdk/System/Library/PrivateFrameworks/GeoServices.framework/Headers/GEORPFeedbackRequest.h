//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class GEOABSecondPartyPlaceRequestClientMetaData, GEOPDAnalyticMetadata, GEOPDClientMetadata, GEORPClientCapabilities, GEORPDebugSettings, GEORPFeedbackRequestParameters, GEORPFeedbackUserInfo, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOABSecondPartyPlaceRequestClientMetaData *_abClientMetadata;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    GEOPDClientMetadata *_clientMetadata;
    GEORPDebugSettings *_debugSettings;
    NSMutableArray *_displayLanguages;
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;
    GEORPFeedbackUserInfo *_userInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _feedbackRequestType;
    struct {
        unsigned int has_feedbackRequestType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abClientMetadata:1;
        unsigned int read_analyticMetadata:1;
        unsigned int read_clientCapabilities:1;
        unsigned int read_clientMetadata:1;
        unsigned int read_debugSettings:1;
        unsigned int read_displayLanguages:1;
        unsigned int read_feedbackRequestParameters:1;
        unsigned int read_userInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_abClientMetadata:1;
        unsigned int wrote_analyticMetadata:1;
        unsigned int wrote_clientCapabilities:1;
        unsigned int wrote_clientMetadata:1;
        unsigned int wrote_debugSettings:1;
        unsigned int wrote_displayLanguages:1;
        unsigned int wrote_feedbackRequestParameters:1;
        unsigned int wrote_userInfo:1;
        unsigned int wrote_feedbackRequestType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)displayLanguageType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEORPDebugSettings *debugSettings;
@property(readonly, nonatomic) BOOL hasDebugSettings;
- (void)_readDebugSettings;
@property(retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *abClientMetadata;
@property(readonly, nonatomic) BOOL hasAbClientMetadata;
- (void)_readAbClientMetadata;
- (id)displayLanguageAtIndex:(NSUInteger)arg1;
- (NSUInteger)displayLanguagesCount;
- (void)_addNoFlagsDisplayLanguage:(id)arg1;
- (void)addDisplayLanguage:(id)arg1;
- (void)clearDisplayLanguages;
@property(retain, nonatomic) NSMutableArray *displayLanguages;
- (void)_readDisplayLanguages;
@property(retain, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property(readonly, nonatomic) BOOL hasClientCapabilities;
- (void)_readClientCapabilities;
@property(retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property(readonly, nonatomic) BOOL hasClientMetadata;
- (void)_readClientMetadata;
@property(retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property(readonly, nonatomic) BOOL hasAnalyticMetadata;
- (void)_readAnalyticMetadata;
@property(retain, nonatomic) GEORPFeedbackUserInfo *userInfo;
@property(readonly, nonatomic) BOOL hasUserInfo;
- (void)_readUserInfo;
@property(retain, nonatomic) GEORPFeedbackRequestParameters *feedbackRequestParameters;
@property(readonly, nonatomic) BOOL hasFeedbackRequestParameters;
- (void)_readFeedbackRequestParameters;
- (int)StringAsFeedbackRequestType:(id)arg1;
- (id)feedbackRequestTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedbackRequestType;
@property(nonatomic) int feedbackRequestType;
- (id)initWithData:(id)arg1;
- (id)init;
- (void)setPreferredEmailAddress:(id)arg1;
- (void)_initForSubmissionParameters;
- (id)initWithFeedbackRequestParameters:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5;

@end

