/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraRecordingSupportedVideoConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    NSArray * _codecConfigurations;
}

@property (nonatomic, readonly, copy) NSArray *codecConfigurations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)codecConfigurations;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodecConfigurations:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tlvData;

@end