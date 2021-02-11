/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPResponseOperation : PBCodable <NSCopying> {
    CKDPArchiveRecordsResponse * _archiveRecordsResponse;
    CKDPAssetUploadTokenRetrieveResponse * _assetUploadTokenRetrieveResponse;
    CKDPBundlesForContainerResponse * _bundlesForContainerResponse;
    CKDPDeleteContainerResponse * _deleteContainerResponse;
    CKDPFetchArchivedRecordsResponse * _fetchArchivedRecordsResponse;
    CKDPCodeFunctionInvokeResponse * _functionInvokeResponse;
    struct { 
        unsigned int operationCost : 1; 
    }  _has;
    CKDPResponseOperationHeader * _header;
    CKDPMarkAssetBrokenResponse * _markAssetBrokenResponse;
    CKDPNotificationMarkReadResponse * _notificationMarkReadResponse;
    CKDPNotificationSyncResponse * _notificationSyncResponse;
    unsigned int  _operationCost;
    CKDPQueryRetrieveResponse * _queryRetrieveResponse;
    CKDPRecordDeleteResponse * _recordDeleteResponse;
    CKDPRecordResolveTokenResponse * _recordResolveTokenResponse;
    CKDPRecordRetrieveChangesResponse * _recordRetrieveChangesResponse;
    CKDPRecordRetrieveResponse * _recordRetrieveResponse;
    CKDPRecordRetrieveVersionsResponse * _recordRetrieveVersionsResponse;
    CKDPRecordSaveResponse * _recordSaveResponse;
    CKDPOperation * _response;
    CKDPResponseOperationResult * _result;
    CKDPSetBadgeCountResponse * _setBadgeCountResponse;
    CKDPShareAcceptResponse * _shareAcceptResponse;
    CKDPShareVettingInitiateResponse * _shareVettingInitiateResponse;
    CKDPSubscriptionCreateResponse * _subscriptionCreateResponse;
    CKDPSubscriptionDeleteResponse * _subscriptionDeleteResponse;
    CKDPSubscriptionRetrieveResponse * _subscriptionRetrieveResponse;
    CKDPTokenRegistrationResponse * _tokenRegistrationResponse;
    CKDPTokenUnregistrationResponse * _tokenUnregistrationResponse;
    CKDPUpdateMissingAssetStatusResponse * _updateMissingAssetStatusResponse;
    CKDPUserAvailableQuotaResponse * _userAvailableQuotaResponse;
    CKDPUserPrivacySettingsBatchLookupResponse * _userPrivacySettingsBatchLookupResponse;
    CKDPUserPrivacySettingsResetResponse * _userPrivacySettingsResetResponse;
    CKDPUserPrivacySettingsRetrieveResponse * _userPrivacySettingsRetrieveResponse;
    CKDPUserPrivacySettingsUpdateResponse * _userPrivacySettingsUpdateResponse;
    CKDPUserQueryResponse * _userQueryResponse;
    CKDPUserRetrieveResponse * _userRetrieveResponse;
    CKDPWebAuthTokenRetrieveResponse * _webAuthTokenRetrieveResponse;
    CKDPZoneDeleteResponse * _zoneDeleteResponse;
    CKDPZoneRetrieveChangesResponse * _zoneRetrieveChangesResponse;
    CKDPZoneRetrieveResponse * _zoneRetrieveResponse;
    CKDPZoneSaveResponse * _zoneSaveResponse;
}

@property (nonatomic, retain) CKDPArchiveRecordsResponse *archiveRecordsResponse;
@property (nonatomic, retain) CKDPAssetUploadTokenRetrieveResponse *assetUploadTokenRetrieveResponse;
@property (nonatomic, retain) CKDPBundlesForContainerResponse *bundlesForContainerResponse;
@property (nonatomic, retain) CKDPDeleteContainerResponse *deleteContainerResponse;
@property (nonatomic, retain) CKDPFetchArchivedRecordsResponse *fetchArchivedRecordsResponse;
@property (nonatomic, retain) CKDPCodeFunctionInvokeResponse *functionInvokeResponse;
@property (nonatomic, readonly) bool hasArchiveRecordsResponse;
@property (nonatomic, readonly) bool hasAssetUploadTokenRetrieveResponse;
@property (nonatomic, readonly) bool hasBundlesForContainerResponse;
@property (nonatomic, readonly) bool hasDeleteContainerResponse;
@property (nonatomic, readonly) bool hasFetchArchivedRecordsResponse;
@property (nonatomic, readonly) bool hasFunctionInvokeResponse;
@property (nonatomic, readonly) bool hasHeader;
@property (nonatomic, readonly) bool hasMarkAssetBrokenResponse;
@property (nonatomic, readonly) bool hasNotificationMarkReadResponse;
@property (nonatomic, readonly) bool hasNotificationSyncResponse;
@property (nonatomic) bool hasOperationCost;
@property (nonatomic, readonly) bool hasQueryRetrieveResponse;
@property (nonatomic, readonly) bool hasRecordDeleteResponse;
@property (nonatomic, readonly) bool hasRecordResolveTokenResponse;
@property (nonatomic, readonly) bool hasRecordRetrieveChangesResponse;
@property (nonatomic, readonly) bool hasRecordRetrieveResponse;
@property (nonatomic, readonly) bool hasRecordRetrieveVersionsResponse;
@property (nonatomic, readonly) bool hasRecordSaveResponse;
@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic, readonly) bool hasResult;
@property (nonatomic, readonly) bool hasSetBadgeCountResponse;
@property (nonatomic, readonly) bool hasShareAcceptResponse;
@property (nonatomic, readonly) bool hasShareVettingInitiateResponse;
@property (nonatomic, readonly) bool hasSubscriptionCreateResponse;
@property (nonatomic, readonly) bool hasSubscriptionDeleteResponse;
@property (nonatomic, readonly) bool hasSubscriptionRetrieveResponse;
@property (nonatomic, readonly) bool hasTokenRegistrationResponse;
@property (nonatomic, readonly) bool hasTokenUnregistrationResponse;
@property (nonatomic, readonly) bool hasUpdateMissingAssetStatusResponse;
@property (nonatomic, readonly) bool hasUserAvailableQuotaResponse;
@property (nonatomic, readonly) bool hasUserPrivacySettingsBatchLookupResponse;
@property (nonatomic, readonly) bool hasUserPrivacySettingsResetResponse;
@property (nonatomic, readonly) bool hasUserPrivacySettingsRetrieveResponse;
@property (nonatomic, readonly) bool hasUserPrivacySettingsUpdateResponse;
@property (nonatomic, readonly) bool hasUserQueryResponse;
@property (nonatomic, readonly) bool hasUserRetrieveResponse;
@property (nonatomic, readonly) bool hasWebAuthTokenRetrieveResponse;
@property (nonatomic, readonly) bool hasZoneDeleteResponse;
@property (nonatomic, readonly) bool hasZoneRetrieveChangesResponse;
@property (nonatomic, readonly) bool hasZoneRetrieveResponse;
@property (nonatomic, readonly) bool hasZoneSaveResponse;
@property (nonatomic, retain) CKDPResponseOperationHeader *header;
@property (nonatomic, retain) CKDPMarkAssetBrokenResponse *markAssetBrokenResponse;
@property (nonatomic, retain) CKDPNotificationMarkReadResponse *notificationMarkReadResponse;
@property (nonatomic, retain) CKDPNotificationSyncResponse *notificationSyncResponse;
@property (nonatomic) unsigned int operationCost;
@property (nonatomic, retain) CKDPQueryRetrieveResponse *queryRetrieveResponse;
@property (nonatomic, retain) CKDPRecordDeleteResponse *recordDeleteResponse;
@property (nonatomic, retain) CKDPRecordResolveTokenResponse *recordResolveTokenResponse;
@property (nonatomic, retain) CKDPRecordRetrieveChangesResponse *recordRetrieveChangesResponse;
@property (nonatomic, retain) CKDPRecordRetrieveResponse *recordRetrieveResponse;
@property (nonatomic, retain) CKDPRecordRetrieveVersionsResponse *recordRetrieveVersionsResponse;
@property (nonatomic, retain) CKDPRecordSaveResponse *recordSaveResponse;
@property (nonatomic, retain) CKDPOperation *response;
@property (nonatomic, retain) CKDPResponseOperationResult *result;
@property (nonatomic, retain) CKDPSetBadgeCountResponse *setBadgeCountResponse;
@property (nonatomic, retain) CKDPShareAcceptResponse *shareAcceptResponse;
@property (nonatomic, retain) CKDPShareVettingInitiateResponse *shareVettingInitiateResponse;
@property (nonatomic, retain) CKDPSubscriptionCreateResponse *subscriptionCreateResponse;
@property (nonatomic, retain) CKDPSubscriptionDeleteResponse *subscriptionDeleteResponse;
@property (nonatomic, retain) CKDPSubscriptionRetrieveResponse *subscriptionRetrieveResponse;
@property (nonatomic, retain) CKDPTokenRegistrationResponse *tokenRegistrationResponse;
@property (nonatomic, retain) CKDPTokenUnregistrationResponse *tokenUnregistrationResponse;
@property (nonatomic, retain) CKDPUpdateMissingAssetStatusResponse *updateMissingAssetStatusResponse;
@property (nonatomic, retain) CKDPUserAvailableQuotaResponse *userAvailableQuotaResponse;
@property (nonatomic, retain) CKDPUserPrivacySettingsBatchLookupResponse *userPrivacySettingsBatchLookupResponse;
@property (nonatomic, retain) CKDPUserPrivacySettingsResetResponse *userPrivacySettingsResetResponse;
@property (nonatomic, retain) CKDPUserPrivacySettingsRetrieveResponse *userPrivacySettingsRetrieveResponse;
@property (nonatomic, retain) CKDPUserPrivacySettingsUpdateResponse *userPrivacySettingsUpdateResponse;
@property (nonatomic, retain) CKDPUserQueryResponse *userQueryResponse;
@property (nonatomic, retain) CKDPUserRetrieveResponse *userRetrieveResponse;
@property (nonatomic, retain) CKDPWebAuthTokenRetrieveResponse *webAuthTokenRetrieveResponse;
@property (nonatomic, retain) CKDPZoneDeleteResponse *zoneDeleteResponse;
@property (nonatomic, retain) CKDPZoneRetrieveChangesResponse *zoneRetrieveChangesResponse;
@property (nonatomic, retain) CKDPZoneRetrieveResponse *zoneRetrieveResponse;
@property (nonatomic, retain) CKDPZoneSaveResponse *zoneSaveResponse;

- (void).cxx_destruct;
- (id)archiveRecordsResponse;
- (id)assetUploadTokenRetrieveResponse;
- (id)bundlesForContainerResponse;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deleteContainerResponse;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fetchArchivedRecordsResponse;
- (id)functionInvokeResponse;
- (bool)hasArchiveRecordsResponse;
- (bool)hasAssetUploadTokenRetrieveResponse;
- (bool)hasBundlesForContainerResponse;
- (bool)hasDeleteContainerResponse;
- (bool)hasFetchArchivedRecordsResponse;
- (bool)hasFunctionInvokeResponse;
- (bool)hasHeader;
- (bool)hasMarkAssetBrokenResponse;
- (bool)hasNotificationMarkReadResponse;
- (bool)hasNotificationSyncResponse;
- (bool)hasOperationCost;
- (bool)hasQueryRetrieveResponse;
- (bool)hasRecordDeleteResponse;
- (bool)hasRecordResolveTokenResponse;
- (bool)hasRecordRetrieveChangesResponse;
- (bool)hasRecordRetrieveResponse;
- (bool)hasRecordRetrieveVersionsResponse;
- (bool)hasRecordSaveResponse;
- (bool)hasResponse;
- (bool)hasResult;
- (bool)hasSetBadgeCountResponse;
- (bool)hasShareAcceptResponse;
- (bool)hasShareVettingInitiateResponse;
- (bool)hasSubscriptionCreateResponse;
- (bool)hasSubscriptionDeleteResponse;
- (bool)hasSubscriptionRetrieveResponse;
- (bool)hasTokenRegistrationResponse;
- (bool)hasTokenUnregistrationResponse;
- (bool)hasUpdateMissingAssetStatusResponse;
- (bool)hasUserAvailableQuotaResponse;
- (bool)hasUserPrivacySettingsBatchLookupResponse;
- (bool)hasUserPrivacySettingsResetResponse;
- (bool)hasUserPrivacySettingsRetrieveResponse;
- (bool)hasUserPrivacySettingsUpdateResponse;
- (bool)hasUserQueryResponse;
- (bool)hasUserRetrieveResponse;
- (bool)hasWebAuthTokenRetrieveResponse;
- (bool)hasZoneDeleteResponse;
- (bool)hasZoneRetrieveChangesResponse;
- (bool)hasZoneRetrieveResponse;
- (bool)hasZoneSaveResponse;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (id)markAssetBrokenResponse;
- (void)mergeFrom:(id)arg1;
- (id)notificationMarkReadResponse;
- (id)notificationSyncResponse;
- (unsigned int)operationCost;
- (id)queryRetrieveResponse;
- (bool)readFrom:(id)arg1;
- (id)recordDeleteResponse;
- (id)recordResolveTokenResponse;
- (id)recordRetrieveChangesResponse;
- (id)recordRetrieveResponse;
- (id)recordRetrieveVersionsResponse;
- (id)recordSaveResponse;
- (id)response;
- (id)result;
- (void)setArchiveRecordsResponse:(id)arg1;
- (void)setAssetUploadTokenRetrieveResponse:(id)arg1;
- (id)setBadgeCountResponse;
- (void)setBundlesForContainerResponse:(id)arg1;
- (void)setDeleteContainerResponse:(id)arg1;
- (void)setFetchArchivedRecordsResponse:(id)arg1;
- (void)setFunctionInvokeResponse:(id)arg1;
- (void)setHasOperationCost:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setMarkAssetBrokenResponse:(id)arg1;
- (void)setNotificationMarkReadResponse:(id)arg1;
- (void)setNotificationSyncResponse:(id)arg1;
- (void)setOperationCost:(unsigned int)arg1;
- (void)setQueryRetrieveResponse:(id)arg1;
- (void)setRecordDeleteResponse:(id)arg1;
- (void)setRecordResolveTokenResponse:(id)arg1;
- (void)setRecordRetrieveChangesResponse:(id)arg1;
- (void)setRecordRetrieveResponse:(id)arg1;
- (void)setRecordRetrieveVersionsResponse:(id)arg1;
- (void)setRecordSaveResponse:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSetBadgeCountResponse:(id)arg1;
- (void)setShareAcceptResponse:(id)arg1;
- (void)setShareVettingInitiateResponse:(id)arg1;
- (void)setSubscriptionCreateResponse:(id)arg1;
- (void)setSubscriptionDeleteResponse:(id)arg1;
- (void)setSubscriptionRetrieveResponse:(id)arg1;
- (void)setTokenRegistrationResponse:(id)arg1;
- (void)setTokenUnregistrationResponse:(id)arg1;
- (void)setUpdateMissingAssetStatusResponse:(id)arg1;
- (void)setUserAvailableQuotaResponse:(id)arg1;
- (void)setUserPrivacySettingsBatchLookupResponse:(id)arg1;
- (void)setUserPrivacySettingsResetResponse:(id)arg1;
- (void)setUserPrivacySettingsRetrieveResponse:(id)arg1;
- (void)setUserPrivacySettingsUpdateResponse:(id)arg1;
- (void)setUserQueryResponse:(id)arg1;
- (void)setUserRetrieveResponse:(id)arg1;
- (void)setWebAuthTokenRetrieveResponse:(id)arg1;
- (void)setZoneDeleteResponse:(id)arg1;
- (void)setZoneRetrieveChangesResponse:(id)arg1;
- (void)setZoneRetrieveResponse:(id)arg1;
- (void)setZoneSaveResponse:(id)arg1;
- (id)shareAcceptResponse;
- (id)shareVettingInitiateResponse;
- (id)subscriptionCreateResponse;
- (id)subscriptionDeleteResponse;
- (id)subscriptionRetrieveResponse;
- (id)tokenRegistrationResponse;
- (id)tokenUnregistrationResponse;
- (id)updateMissingAssetStatusResponse;
- (id)userAvailableQuotaResponse;
- (id)userPrivacySettingsBatchLookupResponse;
- (id)userPrivacySettingsResetResponse;
- (id)userPrivacySettingsRetrieveResponse;
- (id)userPrivacySettingsUpdateResponse;
- (id)userQueryResponse;
- (id)userRetrieveResponse;
- (id)webAuthTokenRetrieveResponse;
- (void)writeTo:(id)arg1;
- (id)zoneDeleteResponse;
- (id)zoneRetrieveChangesResponse;
- (id)zoneRetrieveResponse;
- (id)zoneSaveResponse;

@end