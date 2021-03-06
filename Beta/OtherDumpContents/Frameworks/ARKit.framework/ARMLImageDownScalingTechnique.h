/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARMLImageDownScalingTechnique : ARImageBasedTechnique {
    struct __CVPixelBufferPool { } * _bgraPixelBufferPool;
    bool  _centerCropImage;
    struct vImageCVImageFormat { } * _cvImageFormatRef;
    ARMLImageDownScalingResultData * _downSamplingResultData;
    bool  _enableDoubleMLResolutionForIPad;
    bool  _generateMattingMetaData;
    ARImageCroppingTechnique * _imageCroppingTechnique;
    ARImageRotationTechnique * _imageRotationTechnique;
    ARImageScalingTechnique * _imageScalingTechnique;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    int  _lockedOrientation;
    ARMattingImageMetaData * _mattingImageData;
    ARImageScalingTechnique * _mattingImageScalingTechnique;
    NSObject<OS_dispatch_queue> * _processingQueue;
    double  _resultLatency;
}

@property (nonatomic) bool centerCropImage;
@property (nonatomic) bool generateMattingMetaData;

- (void).cxx_destruct;
- (id)_convertImageColorSpace:(id)arg1;
- (long long)_getDeviceOrientation;
- (id)_imageDataForNeuralNetwork:(id)arg1 scaledSize:(struct CGSize { double x1; double x2; })arg2 deviceOrientation:(long long)arg3 pRegionOfInterest:(struct CGSize { double x1; double x2; }*)arg4 pRotationOfResultTensor:(long long*)arg5;
- (bool)centerCropImage;
- (void)dealloc;
- (bool)generateMattingMetaData;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 requiredTimeInterval:(double)arg2;
- (bool)isEqual:(id)arg1;
- (void)lockOrientation:(long long)arg1;
- (id)processData:(id)arg1;
- (double)requiredTimeInterval;
- (void)setCenterCropImage:(bool)arg1;
- (void)setGenerateMattingMetaData:(bool)arg1;

@end
