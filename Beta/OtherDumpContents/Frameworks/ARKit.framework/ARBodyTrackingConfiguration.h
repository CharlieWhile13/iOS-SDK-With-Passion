/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARBodyTrackingConfiguration : ARConfiguration {
    bool  _automaticImageScaleEstimationEnabled;
    bool  _automaticSkeletonScaleEstimationEnabled;
    NSSet * _detectionImages;
    long long  _environmentTexturing;
    ARWorldMap * _initialWorldMap;
    long long  _maximumNumberOfTrackedImages;
    unsigned long long  _planeDetection;
    bool  _wantsHDREnvironmentTextures;
}

@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;
@property (nonatomic) bool automaticImageScaleEstimationEnabled;
@property (nonatomic) bool automaticSkeletonScaleEstimationEnabled;
@property (nonatomic, copy) NSSet *detectionImages;
@property (nonatomic) long long environmentTexturing;
@property (nonatomic, readonly) ARImageSensorSettings *imageSensorSettingsForSuperWide;
@property (nonatomic, retain) ARWorldMap *initialWorldMap;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (nonatomic) unsigned long long planeDetection;
@property (nonatomic) bool wantsHDREnvironmentTextures;

+ (bool)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;
+ (id)supportedVideoFormatsForSuperWide;
+ (bool)supportsFrameSemantics:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_trackingOptions;
- (bool)automaticImageScaleEstimationEnabled;
- (bool)automaticSkeletonScaleEstimationEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)description;
- (id)detectionImages;
- (long long)environmentTexturing;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForSuperWide;
- (id)init;
- (id)initialWorldMap;
- (bool)isEqual:(id)arg1;
- (long long)maximumNumberOfTrackedImages;
- (id)parentImageSensorSettings;
- (unsigned long long)planeDetection;
- (void)setAutomaticImageScaleEstimationEnabled:(bool)arg1;
- (void)setAutomaticSkeletonScaleEstimationEnabled:(bool)arg1;
- (void)setDetectionImages:(id)arg1;
- (void)setEnvironmentTexturing:(long long)arg1;
- (void)setInitialWorldMap:(id)arg1;
- (void)setMaximumNumberOfTrackedImages:(long long)arg1;
- (void)setPlaneDetection:(unsigned long long)arg1;
- (void)setWantsHDREnvironmentTextures:(bool)arg1;
- (bool)shouldEnableVisionDataForImageSensorSettings:(id)arg1;
- (bool)shouldUseSuperWide;
- (bool)wantsHDREnvironmentTextures;

@end