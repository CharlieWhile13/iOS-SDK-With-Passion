/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxy, MSPMapsPushDaemonProxyObserver> {
    MSPUserRoutingPreferences * _cachedUserRoutingPreferences;
    NSXPCConnection * _connection;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearConnection;
- (void)_connectToDaemonIfNeeded;
- (id)_connection;
- (id)_remoteObjectProxy;
- (void)addObserver:(id)arg1;
- (void)checkin;
- (void)clearBulletinWithRecordID:(id)arg1;
- (void)clearCachedUserRoutingPreferences;
- (void)clearCurrentAnnouncement;
- (void)clearLowFuelAlertBulletin;
- (void)clearMapsSuggestionsBulletin;
- (void)clearParkedCarBulletin;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)clearShownAnnouncements;
- (void)clearTrafficConditionsBulletin;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)arg1;
- (void)clearTrafficIncidentsBulletin;
- (void)closeConnection;
- (void)commitCollectionsSerializedRepresentation:(id)arg1 operationIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)commitFavoritesSerializedRepresentation:(id)arg1 reapingTombstones:(bool)arg2 operationIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)commitHistorySerializedRepresentation:(id)arg1 reapingTombstones:(bool)arg2 earliestKnownSyncDate:(id)arg3 operationIdentifier:(id)arg4 completion:(id /* block */)arg5;
- (void)commitPinnedPlacesSerializedRepresentation:(id)arg1 operationIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)eraseCollectionsSerializedRepresentationWithCompletion:(id /* block */)arg1;
- (void)eraseFavoritesSerializedRepresentationWithCompletion:(id /* block */)arg1;
- (void)eraseHistorySerializedRepresentationWithCompletion:(id /* block */)arg1;
- (void)erasePinnedPlacesSerializedRepresentationWithCompletion:(id /* block */)arg1;
- (void)eraseRAPData;
- (void)favoritesDidChange;
- (void)fetchAnnouncementsFilePath:(id /* block */)arg1;
- (void)fetchAnnouncementsURLPath:(id /* block */)arg1;
- (void)fetchCollectionsSerializedRepresentationWithCompletion:(id /* block */)arg1;
- (void)fetchCurrentAnnouncement:(id /* block */)arg1;
- (void)fetchDevicePushToken:(id /* block */)arg1;
- (void)fetchDownloadedAnnouncements:(id /* block */)arg1;
- (void)fetchFavoritesSerializedRepresentationWithCompletion:(id /* block */)arg1;
- (void)fetchHistorySerializedRepresentationWithCompletion:(id /* block */)arg1;
- (void)fetchLastKnownCollectionsOperationIdentifier:(id /* block */)arg1;
- (void)fetchLastKnownFavoritesOperationIdentifier:(id /* block */)arg1;
- (void)fetchLastKnownHistoryOperationIdentifier:(id /* block */)arg1;
- (void)fetchLastKnownPinnedPlacesOperationIdentifier:(id /* block */)arg1;
- (void)fetchPinnedPlacesSerializedRepresentationWithCompletion:(id /* block */)arg1;
- (void)fetchProblemStatus;
- (void)fetchShownAnnouncements:(id /* block */)arg1;
- (void)fetchUserRoutingPreferencesWithCompletion:(id /* block */)arg1;
- (void)handleMapsApplicationRemoval:(id /* block */)arg1;
- (void)historyDidChange;
- (id)init;
- (void)noteMapstoolChangedFavoritesOnDisk;
- (void)noteMapstoolChangedHistoryOnDisk;
- (void)openConnection;
- (void)problemStatusResponseWithNotificationID:(id)arg1 completion:(id /* block */)arg2;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)registerForTopic;
- (void)removeObserver:(id)arg1;
- (void)removeProblemStatusResponseWithNotificationID:(id)arg1;
- (void)resetAnnouncements;
- (void)setShouldUseDevAPNS:(bool)arg1;
- (void)shouldUseDevAPNS:(id /* block */)arg1;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg1;
- (void)showMapsSuggestionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
- (void)showParkedCarBulletinForEvent:(id)arg1;
- (void)showParkedCarBulletinForEvent:(id)arg1 afterDelay:(double)arg2;
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 afterDelay:(double)arg3;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1 afterDelay:(double)arg2;
- (void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
- (void)showTrafficIncidentAlertWithID:(id)arg1 withReroute:(bool)arg2 title:(id)arg3 description:(id)arg4;
- (void)simulateAnnouncement:(id)arg1 afterDelay:(double)arg2;
- (void)simulateProblemResolution;
- (void)testByNotingHistoryChangedOnDisk;
- (void)updateActiveAnnouncement;
- (void)updateAnnouncements:(id /* block */)arg1;
- (oneway void)updateMapsModelBackupAttributesIfNeeded;
- (id)userRoutingPrefrencesFromSettingsWithFreshness:(double)arg1;

@end
