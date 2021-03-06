/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXActionPredictionClient : NSObject <ATXActionPredictionInterface> {
    NSString * _cacheBasePath;
    ATXCacheReader * _cacheReader;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSXPCConnection * _xpcConnection;
}

- (void).cxx_destruct;
- (id)actionPredictionsForConsumerSubType:(unsigned char)arg1 limit:(int)arg2;
- (void)dealloc;
- (void)getActionPredictionsForCandidateBundleIdentifiers:(id)arg1 candidateActionTypes:(id)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 limit:(int)arg5 reply:(id /* block */)arg6;
- (void)getActionPredictionsForContext:(id)arg1 includeBundleIds:(id)arg2 excludeBundleIds:(id)arg3 includeActionTypes:(id)arg4 excludeActionTypes:(id)arg5 limit:(unsigned long long)arg6 reply:(id /* block */)arg7;
- (id)init;
- (id)initWithCacheBasePath:(id)arg1;
- (void)sendFeedbackWithResponse:(id)arg1;
- (void)shouldDisplayDailyRoutineForContext:(id)arg1 reply:(id /* block */)arg2;

@end
