//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, VCMediaNegotiatorAudioResults, VCMediaNegotiatorCaptionsResults, VCMediaNegotiatorFaceTimeSettingsResults, VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorMomentsResults, VCMediaNegotiatorResults, VCMediaNegotiatorVideoResults;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiator : NSObject
{
    BOOL _usePreNegotiation;
    BOOL _negotiationDone;
    BOOL _isCellular16x9Capable;
    VCMediaNegotiatorLocalConfiguration *_localSettings;
    VCMediaNegotiatorResults *_negotiatedSettings;
    VCMediaNegotiatorAudioResults *_negotiatedAudioSettings;
    VCMediaNegotiatorVideoResults *_negotiatedVideoSettings;
    VCMediaNegotiatorVideoResults *_negotiatedScreenSettings;
    VCMediaNegotiatorCaptionsResults *_negotiatedCaptionsSettings;
    VCMediaNegotiatorMomentsResults *_negotiatedMomentsSettings;
    VCMediaNegotiatorFaceTimeSettingsResults *_negotiatedFaceTimeSettings;
    NSMutableArray *_negotiatedMultiwayAudioStreams;
    NSMutableArray *_negotiatedMultiwayVideoStreams;
    long long _negotiationMode;
}

+ (int)imageTypeBlobSettingsFromSet:(id)arg1;
+ (int)videoCodecBlobSettingsFromSet:(id)arg1;
+ (id)newCompressedBlob:(id)arg1;
+ (id)newDecompressedBlob:(id)arg1;
+ (void)dumpBlob:(id)arg1 prefix:(id)arg2 force:(BOOL)arg3;
+ (BOOL)validateLocalConfiguration:(id)arg1;
+ (BOOL)validateMultiwayAudioStreamConfigurations:(id)arg1;
+ (BOOL)validateMultiwayVideoStreamConfigurations:(id)arg1;
+ (id)localConfigurationWithData:(id)arg1 deviceRole:(int)arg2 preferredAudioPayload:(int)arg3;
+ (id)negotiationBlobFromData:(id)arg1;
@property(readonly, nonatomic) long long negotiationMode; // @synthesize negotiationMode=_negotiationMode;
@property(readonly, nonatomic) NSArray *negotiatedMultiwayVideoStreams; // @synthesize negotiatedMultiwayVideoStreams=_negotiatedMultiwayVideoStreams;
@property(readonly, nonatomic) NSArray *negotiatedMultiwayAudioStreams; // @synthesize negotiatedMultiwayAudioStreams=_negotiatedMultiwayAudioStreams;
@property(readonly, nonatomic) VCMediaNegotiatorFaceTimeSettingsResults *negotiatedFaceTimeSettings; // @synthesize negotiatedFaceTimeSettings=_negotiatedFaceTimeSettings;
@property(readonly, nonatomic) VCMediaNegotiatorMomentsResults *negotiatedMomentsSettings; // @synthesize negotiatedMomentsSettings=_negotiatedMomentsSettings;
@property(readonly, nonatomic) VCMediaNegotiatorCaptionsResults *negotiatedCaptionsSettings; // @synthesize negotiatedCaptionsSettings=_negotiatedCaptionsSettings;
@property(readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) VCMediaNegotiatorVideoResults *negotiatedScreenSettings; // @synthesize negotiatedScreenSettings=_negotiatedScreenSettings;
@property(readonly, nonatomic) VCMediaNegotiatorVideoResults *negotiatedVideoSettings; // @synthesize negotiatedVideoSettings=_negotiatedVideoSettings;
@property(readonly, nonatomic) VCMediaNegotiatorAudioResults *negotiatedAudioSettings; // @synthesize negotiatedAudioSettings=_negotiatedAudioSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings; // @synthesize negotiatedSettings=_negotiatedSettings;
@property(readonly, nonatomic) BOOL usePreNegotiation; // @synthesize usePreNegotiation=_usePreNegotiation;
- (BOOL)negotiateCaptionsWithCaptionsSettings:(id)arg1;
- (void)setupCaptionsForMediaBlob:(id)arg1;
- (id)localeWithMediaBlobLanguage:(int)arg1;
- (int)mediaBlobLanguageWithLocale:(id)arg1;
- (BOOL)negotiateMultiwayVideoStreams:(id)arg1;
- (BOOL)isVideoStreamSupported:(int)arg1;
- (void)setupMultiwayVideoStreamsForMediaBlob:(id)arg1;
- (BOOL)negotiateMultiwayAudioStreams:(id)arg1;
- (void)setupMultiwayAudioStreamsForMediaBlob:(id)arg1;
- (BOOL)supportsHEIFEncoding;
- (BOOL)supportsHEVCEncoding;
- (BOOL)negotiateMomentsWithMomentsSettings:(id)arg1;
- (void)setupMomentsForMediaBlob:(id)arg1;
- (BOOL)negotiateFaceTimeSettings:(id)arg1;
- (void)setupFaceTimeSettingsForMediaBlob:(id)arg1 isResponse:(BOOL)arg2;
- (BOOL)selectBestScreenRule:(id)arg1 preferredPayloadOrder:(id)arg2;
- (BOOL)setupScreenWithNegotiatedSettings:(id)arg1;
- (BOOL)negotiateScreenSettings:(id)arg1;
- (id)getPreferredScreenPayloadList;
- (BOOL)setupVideoWithNegotiatedSettings:(id)arg1;
- (BOOL)negotiateVideoSettings:(id)arg1;
- (BOOL)canDecodeVideo:(id)arg1;
- (BOOL)canEncodeVideo:(id)arg1;
- (BOOL)processParameterSets:(id)arg1 videoResults:(id)arg2;
- (void)negotiateTilesPerFrame:(id)arg1;
- (void)negotiateRTCPFB:(id)arg1;
- (BOOL)selectBestVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 localVideoRuleCollection:(id)arg4 remoteVideoSettings:(id)arg5 negotiatedVideoSettings:(id)arg6 isScreen:(BOOL)arg7;
- (id)negotiateVideoMaxResolutionWithEncodeRules:(id)arg1 decodeRules:(id)arg2 isEncoder:(BOOL)arg3;
- (id)getPreferredVideoPayloadList:(id)arg1;
- (id)selectVideoFeatureString:(id)arg1 selectedPayload:(int)arg2;
- (BOOL)setupAudioWithNegotiatedSettings:(id)arg1;
- (BOOL)negotiateAudioSettings:(id)arg1;
- (void)negotiateAudioSecondaryPayloads:(id)arg1;
- (BOOL)negotiateAudioREDPayload:(id)arg1;
- (BOOL)negotiateAudioDTXPayload:(id)arg1;
- (BOOL)negotiateAudioPrimaryPayload:(id)arg1;
- (void)negotiateAudioUseSBR:(id)arg1;
- (void)negotiateAudioAllowRecording:(id)arg1;
- (void)saveRemoteBandwidthSettingsWithMediaBlob:(id)arg1;
- (BOOL)setupBandwidthSettingsForMediaBlob:(id)arg1;
- (BOOL)addBandwidthSettingsForMediaBlob:(id)arg1 operatingMode:(int)arg2 connectionType:(int)arg3 maxBitrate:(unsigned int)arg4;
- (id)negotiatedFeaturesStringWithLocalFeaturesString:(id)arg1 remoteFeaturesString:(id)arg2;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;
- (BOOL)processResponseBlob:(id)arg1;
- (id)newResponseBlob;
- (BOOL)processInviteBlob:(id)arg1;
- (id)newInviteBlob;
- (void)dealloc;
- (BOOL)isCellular16x9EncodeCapable;
@property(readonly, nonatomic) BOOL isCaller;
- (id)initWithMode:(long long)arg1 localSettings:(id)arg2;
- (id)initWithLocalSettings:(id)arg1;

@end

