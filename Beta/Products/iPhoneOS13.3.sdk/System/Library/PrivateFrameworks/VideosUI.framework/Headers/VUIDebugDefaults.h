/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIDebugDefaults : NSObject {
    bool  _debugUIEnabled;
    bool  _enableDemoMode;
    bool  _metricsExpandedLoggingEnabled;
    bool  _metricsLoggingEnabled;
}

@property (nonatomic) bool debugUIEnabled;
@property (nonatomic) bool enableDemoMode;
@property (nonatomic) bool metricsExpandedLoggingEnabled;
@property (nonatomic) bool metricsLoggingEnabled;

+ (id)sharedInstance;

- (bool)debugUIEnabled;
- (bool)enableDemoMode;
- (id)init;
- (bool)metricsExpandedLoggingEnabled;
- (bool)metricsLoggingEnabled;
- (void)setDebugUIEnabled:(bool)arg1;
- (void)setEnableDemoMode:(bool)arg1;
- (void)setMetricsExpandedLoggingEnabled:(bool)arg1;
- (void)setMetricsLoggingEnabled:(bool)arg1;

@end
