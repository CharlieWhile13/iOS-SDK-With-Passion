/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPresentationOverrides : NSObject {
    float  _CACThresholdValue;
    float  _alignmentPeriod;
    bool  _enableCAC;
    bool  _enableThermalMitigation;
    long long  _forceDisplayMode;
    long long  _minVsyncsPerFrame;
    bool  _overrideCACThreshold;
    bool  _perQuadCAC;
    bool  _showCAC;
    bool  _showDistortion;
    bool  _showPerformanceHUD;
    bool  _skipDistortion;
    bool  _skipGammaCorrection;
    bool  _skipPositionalWarp;
    bool  _skipVignette;
    bool  _skipWarp;
}

@property (nonatomic, readonly) float CACThresholdValue;
@property (nonatomic, readonly) float alignmentPeriod;
@property (nonatomic) bool enableCAC;
@property (nonatomic, readonly) bool enableThermalMitigation;
@property (nonatomic) long long forceDisplayMode;
@property (nonatomic) long long minVsyncsPerFrame;
@property (nonatomic, readonly) bool overrideCACThreshold;
@property (nonatomic, readonly) bool perQuadCAC;
@property (nonatomic) bool showCAC;
@property (nonatomic) bool showDistortion;
@property (nonatomic, readonly) bool showPerformanceHUD;
@property (nonatomic) bool skipDistortion;
@property (nonatomic) bool skipGammaCorrection;
@property (nonatomic) bool skipPositionalWarp;
@property (nonatomic) bool skipVignette;
@property (nonatomic) bool skipWarp;

- (float)CACThresholdValue;
- (float)alignmentPeriod;
- (void)clearModifications;
- (bool)enableCAC;
- (bool)enableThermalMitigation;
- (long long)forceDisplayMode;
- (id)init;
- (long long)minVsyncsPerFrame;
- (bool)overrideCACThreshold;
- (bool)perQuadCAC;
- (void)setAlignmentPeriod:(float)arg1;
- (void)setBoolKey:(id)arg1 value:(bool)arg2;
- (void)setEnableCAC:(bool)arg1;
- (void)setFloatKey:(id)arg1 value:(float)arg2;
- (void)setForceDisplayMode:(long long)arg1;
- (void)setIntegerKey:(id)arg1 value:(long long)arg2;
- (void)setMinVsyncsPerFrame:(long long)arg1;
- (void)setShowCAC:(bool)arg1;
- (void)setShowDistortion:(bool)arg1;
- (void)setShowPerformanceHUD:(bool)arg1;
- (void)setSkipDistortion:(bool)arg1;
- (void)setSkipGammaCorrection:(bool)arg1;
- (void)setSkipPositionalWarp:(bool)arg1;
- (void)setSkipVignette:(bool)arg1;
- (void)setSkipWarp:(bool)arg1;
- (bool)showCAC;
- (bool)showDistortion;
- (bool)showPerformanceHUD;
- (bool)skipDistortion;
- (bool)skipGammaCorrection;
- (bool)skipPositionalWarp;
- (bool)skipVignette;
- (bool)skipWarp;
- (void)updateBool:(id)arg1 value:(bool*)arg2;
- (void)updateDefaults;
- (void)updateFloat:(id)arg1 value:(float*)arg2;
- (void)updateInteger:(id)arg1 value:(long long*)arg2;

@end
