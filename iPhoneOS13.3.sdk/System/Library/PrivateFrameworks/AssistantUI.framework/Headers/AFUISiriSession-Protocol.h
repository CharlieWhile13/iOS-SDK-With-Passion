//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFMetrics, AFUserUtteranceSelectionResults, AceObject, NSDictionary, NSString, SABaseClientBoundCommand, SASRequestOptions;
@protocol SAAceCommand;

@protocol AFUISiriSession <NSObject>
- (void)audioRoutePickerWillDismiss;
- (void)audioRoutePickerWillShow;
- (void)recordMetricsContext:(NSString *)arg1 forDisambiguatedAppWIthBundleIdentifier:(NSString *)arg2;
- (void)recordRequestMetricEvent:(NSString *)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(AFMetrics *)arg1;
- (void)requestDidPresentViewForErrorCommand:(SABaseClientBoundCommand *)arg1;
- (void)requestDidPresentViewForUICommand:(SABaseClientBoundCommand *)arg1;
- (void)resultDidChangeForAceCommand:(AceObject<SAAceCommand> *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)resultDidChangeForAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)siriUIDidPresentDynamicSnippetWithInfo:(NSDictionary *)arg1;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1 conflictHandler:(void (^)(void))arg2;
- (void)startCorrectedRequestWithText:(NSString *)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(AFUserUtteranceSelectionResults *)arg3;
- (void)cancelSpeechRequest;
- (void)stopRecordingSpeech;
- (void)telephonyRequestCompleted;
- (void)sendReplyCommand:(AceObject<SAAceCommand> *)arg1;
- (void)endForReason:(long long)arg1;
- (void)end;
- (void)updateRequestOptions:(SASRequestOptions *)arg1;
- (void)stopRequestWithOptions:(SASRequestOptions *)arg1;
- (void)startRequestWithOptions:(SASRequestOptions *)arg1 completion:(void (^)(NSError *))arg2;
- (void)startRequestWithOptions:(SASRequestOptions *)arg1;
- (void)setApplicationContext;
- (void)setAlertContext;
- (void)rollbackClearContext;
- (void)resetContextTypes:(long long)arg1;
- (void)clearContext;
- (void)resumeInterruptedAudioPlaybackIfNeeded;
- (void)forceAudioSessionInactive;
- (void)forceAudioSessionActiveForReason:(long long)arg1;
- (void)forceAudioSessionActive;
- (void)preheat;
- (void)setLockState:(NSUInteger)arg1;
- (void)setCarDNDActive:(BOOL)arg1;
- (void)setDeviceInStarkMode:(BOOL)arg1;
@end

