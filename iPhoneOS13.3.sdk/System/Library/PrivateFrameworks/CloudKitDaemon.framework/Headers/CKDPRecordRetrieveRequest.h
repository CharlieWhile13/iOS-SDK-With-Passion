//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class CKDPAssetsToDownload, CKDPRecordIdentifier, CKDPRecordRetrieveRequestRetrieveAssetURL, CKDPRequestedFields, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveRequest : PBRequest <NSCopying>
{
    CKDPAssetsToDownload *_assetsToDownload;
    NSString *_clientVersionETag;
    CKDPRecordRetrieveRequestRetrieveAssetURL *_getAssetURL;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPRequestedFields *_requestedFields;
    NSString *_versionETag;
    BOOL _shouldFailBatch;
    struct {
        unsigned int shouldFailBatch:1;
    } _has;
}

+ (id)options;
@property(nonatomic) BOOL shouldFailBatch; // @synthesize shouldFailBatch=_shouldFailBatch;
@property(retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) CKDPRecordRetrieveRequestRetrieveAssetURL *getAssetURL; // @synthesize getAssetURL=_getAssetURL;
@property(retain, nonatomic) NSString *clientVersionETag; // @synthesize clientVersionETag=_clientVersionETag;
@property(retain, nonatomic) NSString *versionETag; // @synthesize versionETag=_versionETag;
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
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
@property(nonatomic) BOOL hasShouldFailBatch;
@property(readonly, nonatomic) BOOL hasAssetsToDownload;
@property(readonly, nonatomic) BOOL hasGetAssetURL;
@property(readonly, nonatomic) BOOL hasClientVersionETag;
@property(readonly, nonatomic) BOOL hasVersionETag;
@property(readonly, nonatomic) BOOL hasRequestedFields;
@property(readonly, nonatomic) BOOL hasRecordIdentifier;

@end
