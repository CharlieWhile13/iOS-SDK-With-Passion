/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSHomeScreenService : NSObject <SBSHomeScreenServiceServerToClientInterface> {
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
}

@property (getter=isLowDensityIconLayoutEnabled, nonatomic) bool lowDensityIconLayoutEnabled;

- (void).cxx_destruct;
- (void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)folderPathToIconWithBundleIdentifier:(id)arg1;
- (id)init;
- (bool)isLowDensityIconLayoutEnabled;
- (void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)resetHomeScreenLayoutWithCompletion:(id /* block */)arg1;
- (void)setLowDensityIconLayoutEnabled:(bool)arg1;

@end
