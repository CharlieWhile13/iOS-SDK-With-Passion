/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
 */

@interface AAAccessTracker : NSObject {
    void accessTracker;
    void eventMirrorStore;
}

- (void).cxx_destruct;
- (id)init;
- (id)peekDataEventByName:(id)arg1;
- (void)popDataEventByName:(id)arg1;
- (void)popDataEventType:(Class)arg1;
- (void)pushDataEvent:(id)arg1 traits:(id)arg2 file:(id)arg3 line:(long long)arg4;
- (void)submitEventType:(Class)arg1;
- (void)submitEventType:(Class)arg1 completion:(id /* block */)arg2;
- (void)submitEventType:(Class)arg1 onlyIfTimed:(bool)arg2;
- (void)submitEventType:(Class)arg1 onlyIfTimed:(bool)arg2 completion:(id /* block */)arg3;
- (void)submitRawEvent:(id)arg1;
- (void)submitRawEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)submitRawEvent:(id)arg1 onlyIfTimed:(bool)arg2;
- (void)submitRawEvent:(id)arg1 onlyIfTimed:(bool)arg2 completion:(id /* block */)arg3;
- (void)timeEventType:(Class)arg1;
- (void)timeEventType:(Class)arg1 submitAndRestartWithSession:(bool)arg2;
- (void)timeRawEvent:(id)arg1;
- (void)timeRawEvent:(id)arg1 submitAndRestartWithSession:(bool)arg2;

@end