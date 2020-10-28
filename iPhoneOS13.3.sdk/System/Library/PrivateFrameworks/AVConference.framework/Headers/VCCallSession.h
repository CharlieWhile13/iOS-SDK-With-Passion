//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/AVCRateControllerDelegate-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCCaptionsReceiverDelegate-Protocol.h>
#import <AVConference/VCRedundancyControllerDelegate-Protocol.h>
#import <AVConference/VCSecureDataChannelDelegate-Protocol.h>
#import <AVConference/VCTransportSessionLegacyDelegate-Protocol.h>

@class AVCRateController, GKRingBuffer, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TimingCollection, VCAudioPayload, VCAudioTransmitter, VCBitrateArbiter, VCCallInfo, VCCallLinkCongestionDetector, VCCapabilities, VCCaptionsReceiver, VCConnectionManager, VCControlChannel, VCControlChannelMultiWay, VCDisplayLink, VCImageAttributeRules, VCMediaNegotiator, VCRateControlMediaController, VCRedundancyControllerVideo, VCSecureDataChannel, VCSessionMessaging, VCSwitchManager, VCTransportSession, VCWCMClient, VideoAttributes, WRMClient;
@protocol OS_dispatch_queue, OS_dispatch_source, VCCallSessionDelegate, VCConnectionProtocol, VideoConferenceChannelQualityDelegate;

__attribute__((visibility("hidden")))
@interface VCCallSession : NSObject <VCSecureDataChannelDelegate, VCCaptionsReceiverDelegate, VCTransportSessionLegacyDelegate, AVCRateControllerDelegate, VCAudioIOSink, VCRedundancyControllerDelegate>
{
    NSObject<VCCallSessionDelegate> *delegate;
    VCCallInfo *localCallInfo;
    VCCallInfo *remoteCallInfo;
    long long packetMultiplexMode;
    struct tagHANDLE rtpHandle;
    struct tagHANDLE rtpVideo;
    void videoMediaControlInfoGenerator;
    void audioMediaControlInfoGenerator;
    VCConnectionManager *connectionManager;
    long long connectionChangeState;
    id <VCConnectionProtocol> toBeChangedPrimaryConnection;
    VCMediaNegotiator *_mediaNegotiator;
    VCSwitchManager *_switchManager;
    NSObject<OS_dispatch_queue> *connectionChangeQueue;
    long long state;
    long long _sipState;
    NSMutableArray *negotiatedAudioPayloads;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    int _currentRedPayloadType;
    BOOL _isRedEnabled;
    long long videoPayload;
    long long screenPayload;
    long long sampleRate;
    long long samplesPerFrame;
    struct tagHANDLE hSIP;
    BOOL isAudioRunning;
    BOOL isWaitingForICEResult;
    BOOL didSend200OK;
    struct _opaque_pthread_mutex_t mutex;
    BOOL receivedSIPInvite;
    VCImageAttributeRules *imageAttributeRules;
    int iRemoteRTPPort;
    int iRemoteRTCPPort;
    VCCapabilities *caps;
    int _deviceRole;
    struct tagHANDLE hMediaQueue;
    struct tagHANDLE hAFRC;
    AVCRateController *_rateController;
    VCRateControlMediaController *_mediaController;
    GKRingBuffer *ringBuf;
    unsigned int lastReceived;
    int preferredAudioCodec;
    BOOL useSBR;
    BOOL useControlByte;
    BOOL useUEP;
    NSDictionary *_allPayloadsLocalFeaturesString;
    NSMutableDictionary *featuresListStringDict;
    BOOL audioIsPaused;
    struct _opaque_pthread_mutex_t pauseLock;
    NSObject<OS_dispatch_queue> *videoQueue;
    NSObject<OS_dispatch_queue> *videoAsyncQueue;
    NSObject<OS_dispatch_queue> *audioQueue;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    NSArray *mutedPeers;
    int bandwidthUpstream;
    int bandwidthDownstream;
    BOOL allowAudioRecording;
    int aacBlockSize;
    BOOL _isUseCaseWatchContinuity;
    int carrierBitrateCap;
    struct AudioStreamBasicDescription vpioFormat;
    BOOL allowAudioSwitching;
    BOOL shouldUpdateLastReceivedPacketTimestamp;
    double lastReceivedPacketTimestamp;
    BOOL isRemoteMediaStalled;
    unsigned int _mediaStallCount;
    double _mediaStallTotalTime;
    double _maxMediaStallTime;
    double _lastMediaStallStartTime;
    BOOL _isRemoteMediaStalledShort;
    int packetsSinceStall;
    int packetsSinceShortMediaStall;
    int natType;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    TimingCollection *perfTimers;
    double packetLossRate;
    double timeLastCheckedNetworkConditions;
    double timeLastKnowGoodNetworkPLR;
    double timeLastKnowGoodNetworkRTT;
    double networkConditionsTimeoutInSeconds;
    NSString *peerCN;
    NSString *sessionID;
    unsigned int roundTripTime;
    float packetLateAndMissingRatio;
    int sampleLogCount;
    double timeSinceLastReportedNoPackets;
    double noRemotePacketsTimeout;
    double _remoteMediaStallTimeout;
    BOOL previousNoRemoteInProgress;
    BOOL didAttemptSIPInvite;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    struct _opaque_pthread_mutex_t qualityDelegateLock;
    NSObject<OS_dispatch_queue> *qualityQueue;
    BOOL shouldTimeoutPackets;
    struct _opaque_pthread_mutex_t srtpLock;
    BOOL didPrepareSRTP;
    BOOL useRateControl;
    BOOL useAFRC;
    BOOL useVCRC;
    BOOL isRTCPFBEnabled;
    VCCallLinkCongestionDetector *congestionDetector;
    BOOL shouldSendAudio;
    BOOL isGKVoiceChat;
    int _signalStrengthBars;
    int _signalStrengthDisplayBars;
    int _signalStrengthMaxDisplayBars;
    BOOL bBWEstOperatingModeInitialized;
    BOOL bBWEstNewBWEstModeEnabled;
    BOOL bBWEstFakeLargeFrameModeEnabled;
    BOOL bBWEstActiveProbingSenderLog;
    CGSize remoteScreenPortraitAspectRatio;
    CGSize remoteScreenLandscapeAspectRatio;
    CGSize remoteExpectedPortraitAspectRatio;
    CGSize remoteExpectedLandscapeAspectRatio;
    BOOL isStarted;
    NSData *srtpKeyBytes;
    BOOL isInitiator;
    BOOL sentClientSuccessfulDidStart;
    double videoThrottlingTimeout;
    unsigned int awdCallNonce;
    VCSessionMessaging *messaging;
    VCControlChannel *controlChannel;
    VCControlChannelMultiWay *secureControlChannel;
    BOOL isCurrentNetworkBad;
    unsigned int callSessionBitrate;
    NSObject<OS_dispatch_queue> *cellTechQueue;
    NSObject<OS_dispatch_source> *cellTechChangeSource;
    VCBitrateArbiter *callSessionBitrateArbiter;
    NSObject<OS_dispatch_source> *connectionTimeoutSource;
    NSObject<OS_dispatch_source> *firstRemoteFrameTimemoutSource;
    unsigned short maxPacketLength;
    long long initialSentBytes;
    long long initialReceivedBytes;
    struct tagVCAudioReceiver audioReceiver;
    VCAudioTransmitter *audioTransmitter;
    VCCaptionsReceiver *_captionsReceiver;
    struct tagHANDLE hVideoReceiver;
    struct tagHANDLE hVideoTransmitter;
    VCDisplayLink *_displayLink;
    VCRedundancyControllerVideo *_videoRedundancyController;
    BOOL remoteSupportsVisibleRect;
    BOOL remoteSupportsExpectedAspectRatio;
    BOOL canLocalResizePIP;
    BOOL canRemoteResizePIP;
    BOOL receivedFirstRemoteFrame;
    int fecMode;
    NSObject<OS_dispatch_source> *sessionHealthMonitor;
    VideoAttributes *remoteVideoAttributes;
    double lastVideoQualityNotificationUpdate;
    double lastVideoCallAlarmTime;
    unsigned int remoteFrameWidth;
    unsigned int remoteFrameHeight;
    VCWCMClient *vcWCMClient;
    WRMClient *vcWRMClient;
    BOOL iRATSuggestionEnabled;
    struct OpaqueVTPixelTransferSession hdTransferSession;
    struct __CVPixelBufferPool hdBufferPool;
    CGSize expectedDecodeSize;
    struct opaqueRTCReporting reportingAgent;
    BOOL didReportNoRemotePackets;
    BOOL didReportLongConnectionTime;
    BOOL didReportAudioStall;
    BOOL enableRateControlDump;
    unsigned int _targetBitrate;
    unsigned int _rateChangeCounter;
    unsigned int awdTime;
    int operatingMode;
    struct SKEStateOpaque skeState;
    struct __CFData secretKey;
    VCSecureDataChannel *secureDataChannel;
    NSString *basebandCodecType;
    NSNumber *basebandCodecSampleRate;
    unsigned int dwRTT_ice;
    NSObject<OS_dispatch_queue> *timestampQueue;
    BOOL shouldSendBlackFrame;
    unsigned int _peerProtocolVersion;
    struct tagWRMMetricsInfo wrmInfo;
    BOOL _shouldReportWRMMetrics;
    BOOL _inviteDataRequested;
    unsigned int _transportType;
    VCTransportSession *_transportSession;
    BOOL _cleanupDone;
    BOOL _isLocalCellular_LowestConnectionQuality;
    BOOL _isRemoteCellular_LowestConnectionQuality;
    BOOL _isConnectedOnIPv6_LowestConnectionQuality;
    void _callLogFile;
    NSString *peerReportingID;
}

+ (id)keyPathsForValuesAffectingNetworkQuality;
+ (void)stopSecureControlChannel:(id)arg1;
+ (id)getDecodePayloadTypes:(int)arg1 secondaryPayloadTypes:(id)arg2;
+ (int)setRxPayloadList:(struct tagHANDLE )arg1 withPayloadTypes:(id)arg2 isRedEnabled:(BOOL)arg3;
+ (int)setRxPayloadList:(struct tagHANDLE )arg1 withPayloadTypes:(id)arg2;
@property(retain) NSData *srtpKeyBytes; // @synthesize srtpKeyBytes;
@property(copy, nonatomic) NSString *peerReportingID; // @synthesize peerReportingID;
@property(readonly) VCCallInfo *localCallInfo; // @synthesize localCallInfo;
@property BOOL didSend200OK; // @synthesize didSend200OK;
@property long long sipState; // @synthesize sipState=_sipState;
@property int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(copy, nonatomic) NSString *basebandCodecType; // @synthesize basebandCodecType;
@property(retain, nonatomic) NSNumber *basebandCodecSampleRate; // @synthesize basebandCodecSampleRate;
@property(readonly) BOOL isRemoteMediaStalled; // @synthesize isRemoteMediaStalled;
@property(nonatomic) int operatingMode; // @synthesize operatingMode;
@property unsigned int remoteFrameHeight; // @synthesize remoteFrameHeight;
@property unsigned int remoteFrameWidth; // @synthesize remoteFrameWidth;
@property(readonly) struct tagVCAudioReceiver audioReceiver; // @synthesize audioReceiver;
@property(retain, nonatomic) VideoAttributes *remoteVideoAttributes; // @synthesize remoteVideoAttributes;
@property(retain, nonatomic) VCImageAttributeRules *imageAttributeRules; // @synthesize imageAttributeRules;
@property(nonatomic) BOOL isStarted; // @synthesize isStarted;
@property(nonatomic) BOOL shouldSendAudio; // @synthesize shouldSendAudio;
@property(nonatomic) BOOL isRTCPFBEnabled; // @synthesize isRTCPFBEnabled;
@property(nonatomic) BOOL useRateControl; // @synthesize useRateControl;
@property BOOL shouldTimeoutPackets; // @synthesize shouldTimeoutPackets;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID;
@property(nonatomic) float packetLateAndMissingRatio; // @synthesize packetLateAndMissingRatio;
@property(nonatomic) int signalStrengthMaxDisplayBars; // @synthesize signalStrengthMaxDisplayBars=_signalStrengthMaxDisplayBars;
@property(nonatomic) int signalStrengthDisplayBars; // @synthesize signalStrengthDisplayBars=_signalStrengthDisplayBars;
@property(nonatomic) int signalStrengthBars; // @synthesize signalStrengthBars=_signalStrengthBars;
@property(nonatomic) unsigned int roundTripTime; // @synthesize roundTripTime;
@property(nonatomic) double networkConditionsTimeoutInSeconds; // @synthesize networkConditionsTimeoutInSeconds;
@property(nonatomic) double packetLossRate; // @synthesize packetLossRate;
@property(copy, nonatomic) NSString *peerCN; // @synthesize peerCN;
@property(nonatomic) int natType; // @synthesize natType;
@property(readonly) BOOL audioIsPaused; // @synthesize audioIsPaused;
@property(retain, nonatomic) NSArray *mutedPeers; // @synthesize mutedPeers;
@property int bandwidthDownstream; // @synthesize bandwidthDownstream;
@property int bandwidthUpstream; // @synthesize bandwidthUpstream;
@property BOOL useUEP; // @synthesize useUEP;
@property BOOL useControlByte; // @synthesize useControlByte;
@property int preferredAudioCodec; // @synthesize preferredAudioCodec;
@property unsigned int lastReceived; // @synthesize lastReceived;
@property(retain, nonatomic) GKRingBuffer *ringBuf; // @synthesize ringBuf;
@property struct tagHANDLE hAFRC; // @synthesize hAFRC;
@property struct tagHANDLE hMediaQueue; // @synthesize hMediaQueue;
@property BOOL receivedSIPInvite; // @synthesize receivedSIPInvite;
@property BOOL isWaitingForICEResult; // @synthesize isWaitingForICEResult;
@property(readonly) BOOL isAudioRunning; // @synthesize isAudioRunning;
@property(retain) NSObject<VCCallSessionDelegate> *delegate; // @synthesize delegate;
@property long long sampleRate; // @synthesize sampleRate;
@property long long videoPayload; // @synthesize videoPayload;
@property long long state; // @synthesize state;
@property unsigned short maxPacketLength; // @synthesize maxPacketLength;
@property(retain) VCConnectionManager *connectionManager; // @synthesize connectionManager;
@property long long connectionChangeState; // @synthesize connectionChangeState;
@property struct tagHANDLE rtpHandle; // @synthesize rtpHandle;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)setupSecureDataChannel;
- (void)handleKeyExchangeCompleted;
- (void)updateCachedConnectionState;
- (void)handleFirstConnectionSetup:(id)arg1;
- (void)handleNewConnectionSetup:(id)arg1 isInitialConnection:(BOOL)arg2;
- (void)notifyDelegateActiveConnectionDidChange;
- (void)handlePrimaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)triggerInterfaceChange;
@property(readonly) BOOL isVideoRunning;
- (void)reportingMomentsWithRequest:(id)arg1;
- (void)reportSymptom:(unsigned int)arg1;
- (void)messageVCMomentsRequest:(id)arg1;
- (void)setPeerProtocolVersion:(unsigned int)arg1;
- (void)setSessionConferenceVisualRectangle:(CGRect)arg1 callID:(unsigned int)arg2;
- (void)setSessionConferenceState:(unsigned int)arg1 callID:(unsigned int)arg2;
- (unsigned int)currentAudioCap;
@property(readonly, nonatomic) NSDictionary *dtxMetrics;
@property(readonly, nonatomic) int audioTierPayload;
@property(readonly, nonatomic) int audioTierRedNumPayloads;
@property(readonly, nonatomic) int audioTierPacketsPerBundle;
@property(readonly, nonatomic) int audioTierAudioCodecBitrate;
@property(readonly, nonatomic) int audioTierNetworkBitrate;
@property(readonly, nonatomic) struct opaqueRTCReporting reportingAgent;
@property(retain) VCCapabilities *capabilities;
- (unsigned int)primaryConnectionType;
@property(readonly) BOOL isSKEOptimizationEnabled;
- (BOOL)pullAudioSamples:(struct opaqueVCAudioBufferList )arg1 rtpTimestamp:(unsigned int )arg2 lastReceivedAudioTime:(double )arg3 padding:(char )arg4 paddingLength:(char )arg5 silence:(int )arg6;
- (id)callMetadata;
- (int)negotiatedReceivingFramerate;
- (id)localParticipantID;
- (id)remoteParticipantID;
- (void)sendData:(id)arg1 messageType:(unsigned int)arg2 encrypted:(BOOL)arg3;
- (void)sendARPLData:(id)arg1 toCallID:(unsigned int)arg2;
- (void)rcvdFirstRemoteFrame;
- (void)processCancelRelayRequest:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processRelayUpdateDict:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processRelayRequestResponseDict:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (BOOL)stillWantsToRelay;
- (BOOL)setPauseVideo:(BOOL)arg1 error:(id )arg2;
- (BOOL)setPauseVideo:(BOOL)arg1 force:(BOOL)arg2 error:(id )arg3;
- (void)setResumeVideo;
- (void)setSuspendVideo;
- (BOOL)setPauseAudio:(BOOL)arg1 error:(id )arg2;
- (BOOL)setPauseAudio:(BOOL)arg1 force:(BOOL)arg2 error:(id )arg3;
- (void)setResumeAudio;
- (void)setSuspendAudio;
- (BOOL)isCallOngoing;
- (void)processRemoteIPChange:(id)arg1 callID:(unsigned int)arg2;
@property BOOL isGKVoiceChat;
@property(readonly) unsigned int lastSentAudioSampleTime;
@property unsigned char inputMeter;
@property(readonly) int bundledPackets;
@property(readonly) int numBufferBytesAvailable;
@property int packetsPerBundle;
- (void)setRemoteCallInfoFromInviteDictionary:(id)arg1;
- (void)addLocalCallInfoToInviteDictionary:(id)arg1;
- (id)inviteDataForParticipantID:(id)arg1 callID:(unsigned int )arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id )arg5;
- (BOOL)isLowBitrateCodecPreferred:(id)arg1;
- (void)reportOperatingMode;
- (id)newMediaBlobWithRemoteMediaBlob:(id)arg1 localCallID:(unsigned int)arg2 isLowBitrateCodecPreferred:(BOOL)arg3;
- (id)newMediaNegotiatorAudioConfigurationWithAllowAudioSwitching:(BOOL)arg1 useSBR:(BOOL)arg2 aacBlockSize:(unsigned int)arg3;
- (BOOL)cancel:(id)arg1;
- (BOOL)disconnect:(id)arg1 didRemoteCancel:(BOOL)arg2;
- (void)requestWRMNotification;
- (void)sendWRMStatusUpdate:(const CDStruct_8aeecdac )arg1;
- (void)setPreWarmState:(BOOL)arg1;
- (void)setWRMNotification:(CDStruct_0693755d )arg1;
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 )arg1;
- (void)reportImmediateWRMMetric:(int)arg1 value:(NSUInteger)arg2;
- (void)reportWRMMetrics:(const CDStruct_dea828ac )arg1;
- (void)cleanupWRMClient;
- (void)setupWRMClient;
- (void)setupABTesting;
- (void)applyNegotiatedFaceTimeSettings;
- (int)rtcpDescriptor;
- (void)handleReceivedPiggybackBlobLegacy:(id)arg1;
- (void)handleReceivedPiggybackBlobIDS:(id)arg1;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 destination:(id)arg7 error:(id )arg8;
@property(readonly, nonatomic) BOOL isCaller;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList )arg1;
- (BOOL)isLocalOrRemoteOnCellular;
- (void)cancelFirstRemoteFrameTimer;
- (void)setUpFirstRemoteFrameTimer;
- (void)setupConnectionTimeoutTimerWithErrorCode:(int)arg1 detailedCode:(int)arg2 description:(id)arg3 reason:(id)arg4;
- (void)cancelConnectionTimeoutTimer;
- (void)timeoutUnfinishedConnection;
- (id)activeControlChannel;
- (BOOL)isSecureMessagingRequired;
- (BOOL)isSIPEnabled;
- (void)dealloc;
- (void)updateLastReceivedPacket:(BOOL)arg1 packetType:(int)arg2;
- (void)updateLastReceivedAudioTime;
- (void)updateLastReceivedPacketWithTimestamp:(double)arg1 packetType:(int)arg2;
- (void)updateRemoteMediaStallStateReporting:(double)arg1;
- (void)updateRemoteMediaStallState:(double)arg1;
@property(readonly) double networkQuality;
- (int)getAudioTxBitrate;
@property NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
- (void)primaryConnectionDidChangeTo:(id)arg1 oldConnection:(id)arg2;
- (void)handlePendingPrimaryConnectionChange;
- (void)schedulePrimaryConnectionChange:(id)arg1 oldConnection:(id)arg2;
- (void)resetVideoRulesForInterface:(int)arg1 videoReportingDictionary:(id)arg2;
- (id)getVideoRuleForVideoMode:(NSUInteger)arg1 interface:(int)arg2 sessionBitrate:(int )arg3;
- (BOOL)chooseVideoPayloadForInterface:(int)arg1;
- (int)applyFeaturesListStringForPayload:(int)arg1;
- (id)getFeaturesListStringForPayload:(int)arg1;
- (void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned int)arg2;
- (void)thermalLevelDidChange:(int)arg1;
- (void)handleCellularMTUChanged:(unsigned short)arg1;
- (void)handleCellTechChange:(int)arg1;
- (void)updateMaxPktLength;
- (BOOL)evaluateEnableRRx:(int )arg1;
- (BOOL)isBetterForSIPInviteWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo )arg1 thanSession:(id)arg2;
- (void)updateVideoQualityStatus:(double)arg1 bitrate:(double)arg2 time:(double)arg3 isRemote:(BOOL)arg4;
@property(readonly) BOOL videoIsPaused;
- (void)startAWDStats;
- (void)configureRateController;
- (unsigned int)callID;
@property(nonatomic) BOOL useCompressedConnectionData;
@property(nonatomic) BOOL requiresWifi;
@property(readonly) BOOL isCurrentPayloadTypeValid;
- (id)initWithDeviceRole:(int)arg1 transportType:(unsigned int)arg2 isGKVoiceChat:(BOOL)arg3 reportingHierarchyToken:(id)arg4;
- (id)init;
@property(readonly, copy) NSString *description;
- (void)vcSecureDataChannel:(id)arg1 messageType:(unsigned int)arg2 receivedData:(id)arg3;
- (void)wcmGetCallConfig:(unsigned int )arg1 targetBitrate:(unsigned int )arg2;
- (void)wcmSetCallConfig:(unsigned int)arg1 interferenceLevel:(unsigned int)arg2;
- (void)didReceiveCaptions:(id)arg1;
- (int)sipCallback:(int)arg1 callID:(unsigned int)arg2 msgIn:(const char )arg3 msgOut:(char )arg4 optional:(void )arg5 confIndex:(int )arg6;
- (BOOL)disconnectInternal:(BOOL)arg1 disconnectError:(id)arg2 didRemoteCancel:(BOOL)arg3;
- (int)mapPacketMultiplexModeToSIPMode:(long long)arg1;
- (int)mapPacketMultiplexModeToRTPMode:(long long)arg1;
- (void)handleDuplicationEnabled:(BOOL)arg1 activeConnection:(id)arg2;
- (void)setDuplicationFlag:(BOOL)arg1 withPreferredLocalLinkTypeForDuplication:(int)arg2 notifyPeer:(BOOL)arg3;
- (void)sendSymptomToRemote:(id)arg1 groupID:(id)arg2;
- (void)shouldSendBlackFrame:(BOOL)arg1;
- (void)sendBasebandCodecMessage;
- (void)disableSessionHealthMonitor;
- (double)audioTransmittingBitrateKbps;
- (double)audioReceivingBitrateKbps;
- (void)enableSessionHealthMonitor;
- (void)logConnectionSuccess;
- (unsigned int)maxBitrateForConnectionType;
- (void)adjustBitrateForConnectionType;
- (void)setupBitrateNegotiation;
- (BOOL)findFeatureString:(const char )arg1 value:(char )arg2 valueLength:(NSUInteger)arg3 withPrefix:(const char )arg4;
- (const char )matchedFeaturesStringForPayload:(int)arg1;
- (BOOL)setMatchedFeaturesString:(char )arg1 localFeaturesString:(id)arg2 remoteFeaturesString:(id)arg3;
- (id)allPayloadsLocalFeaturesString;
- (id)pickFeaturesStringForPayload:(int)arg1 featuresListDict:(id)arg2 remote:(BOOL)arg3;
- (void)logIdentity:(struct __SecIdentity )arg1;
- (void)setLocalIdentityForKeyExchange;
- (int)Conference_SetBWEstMode:(BOOL)arg1 bFakeLargeFrameMode:(BOOL)arg2;
- (void)notifyDelegateSessionStarted;
- (void)doSipEndAction:(int)arg1 callID:(unsigned int)arg2 error:(id)arg3;
- (void)disconnectWithNoRemotePackets:(long long)arg1 timeoutUsed:(double)arg2;
- (void)disconnectWithNoRemotePackets:(long long)arg1;
- (void)doSipEndProc:(id)arg1;
- (unsigned int)videoRTPID;
- (unsigned int)audioRTPID;
- (BOOL)shouldNotifyDelegateDidStartBeforeAudioSetup;
- (void)sipConnectThreadProc:(id)arg1;
- (void)shutdownVoiceChatFromRemoteSIPSignal:(int)arg1 withReason:(const char )arg2;
- (BOOL)chooseDTXPayloads:(id)arg1;
- (BOOL)chooseSecondaryPayloads:(id)arg1;
- (BOOL)choosePayload:(id)arg1;
- (unsigned int)codecBitmapForPayloads:(id)arg1;
- (BOOL)setupAudioCodecWithPayload:(int)arg1;
- (id)negotiatedAudioPayloadTypes;
- (id)addAudioPayload:(int)arg1;
- (id)configForPayloadType:(int)arg1;
- (void)setupAACELDPayload:(int)arg1;
- (BOOL)stopRateControl:(id )arg1;
- (BOOL)startRateControl:(id )arg1;
- (BOOL)startVCRC:(id )arg1;
- (BOOL)startAFRC:(id )arg1;
- (BOOL)stopMediaQueue:(id )arg1;
- (BOOL)startMediaQueue:(id )arg1;
- (BOOL)getVideoSettings:(int)arg1 forInterface:(int)arg2 payload:(int)arg3 width:(int )arg4 height:(int )arg5 framerate:(int )arg6 bitRate:(int )arg7;
- (BOOL)stopVideo:(BOOL)arg1 error:(id )arg2;
- (BOOL)stopVideoReceive:(id )arg1 isPausing:(BOOL)arg2;
- (BOOL)stopVideoSend:(BOOL)arg1 error:(id )arg2;
- (BOOL)startVideo:(BOOL)arg1 error:(id )arg2;
- (BOOL)startVideoReceive:(id )arg1;
- (BOOL)startVideoSend:(BOOL)arg1 error:(id )arg2;
- (int)interfaceForCurrentCall;
- (BOOL)setupAudioCookies;
- (void)sendCallingModeMessage;
- (void)updateDeviceRole:(int)arg1;
- (void)enableAudio:(BOOL)arg1;
- (void)startAudioIOWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)startAudioWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)stopAudioIO:(id /* CDUnknownBlockType */)arg1;
- (void)stopAudioWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)sipConnectWithError:(id )arg1;
- (BOOL)setupCallerRTPChannelWithError:(id )arg1;
- (BOOL)setMediaQueueStreamSettings;
- (BOOL)setRTPPayloads:(id)arg1 withError:(id )arg2;
- (id)getCompatibleLocalFeaturesListForPayloads:(int )arg1 count:(int)arg2;
- (int)getAllCompatibleVideoPayloads:(int )arg1 forMediaType:(int)arg2;
- (BOOL)doesVideoPayloadMatchRemoteImageAttributeRules:(id)arg1;
- (BOOL)isValidVideoPayloadOverride:(id)arg1;
- (BOOL)chooseVideoPayload:(id)arg1 operatingMode:(int)arg2 isLocalOnCellular:(BOOL)arg3 isRemoteOnCellular:(BOOL)arg4;
- (BOOL)canNegotiateVideoPayload:(int)arg1 supportedPayloads:(id)arg2 isLocalOnCellular:(BOOL)arg3 isRemoteOnCellular:(BOOL)arg4;
- (BOOL)negotiateMaxBandwidth:(int )arg1;
- (BOOL)negotiatePayloads:(id )arg1 withError:(id )arg2;
- (void)negotiateFeaturesString:(id)arg1 forPayload:(int)arg2;
- (BOOL)createMediaQueueHandle:(id )arg1;
- (BOOL)prepareSRTPWithError:(id )arg1;
- (void)releaseRTPHandles;
- (BOOL)createRTPHandles:(id )arg1;
- (BOOL)createAudioTransmitter:(id )arg1;
- (int)processMediaControlInfo:(void )arg1 isAudio:(BOOL)arg2;
- (int)fillMediaControlInfo:(void )arg1;
- (BOOL)treatAsCellular;
- (BOOL)sendSIPInviteWithError:(id )arg1;
- (BOOL)establishSIPDialogWithSDP:(id)arg1 error:(id )arg2;
- (id)createInviteSDPWithError:(id )arg1;
- (BOOL)canSendSIPInviteWithError:(id )arg1;
- (void)getAllPayloadsForScreen:(int )arg1 count:(int )arg2;
- (void)getAllPayloadsForVideo:(int )arg1 count:(int )arg2;
- (void)getAllPayloadsForAudio:(int )arg1 count:(int )arg2 secondaryPayloads:(int )arg3 secondaryCount:(int )arg4;
- (int)handleIncomingWithCallID:(unsigned int)arg1 msgIn:(const char )arg2 msgOut:(char )arg3 optional:(void )arg4 confIndex:(int )arg5 error:(id )arg6;
- (BOOL)startMediaWithPreNegotiatedSettings:(id )arg1;
- (void)applyNegotiatedMomentsSettings;
- (void)applyNegotiatedCaptionsSettings;
- (BOOL)applyNegotiatedVideoSettings:(id )arg1;
- (BOOL)applyNegotiatedAudioSettings:(id )arg1;
- (void)applyNegotiatedSettings;
- (void)negotiateMediaMaxBandwidth;
- (BOOL)createSDP:(int )arg1 audioPayloadCount:(int)arg2 secondaryPayloadTypes:(int )arg3 secondaryPayloadCount:(int)arg4 videoPayloadTypes:(int )arg5 videoPayloadCount:(int)arg6 localFeaturesList:(id)arg7 answerBandwidth:(int)arg8 maxBandwidth:(int)arg9 imageSizesSend:(struct imageTag )arg10 imageSendCount:(int )arg11 imageSizesRecv:(struct imageTag )arg12 imageRecvCount:(int )arg13 sdp:(char )arg14 numSDPBytes:(int )arg15 error:(id )arg16;
- (void)addScreenConfigToSDP:(id)arg1;
- (void)setupCalleeSIPStartTimeout:(float)arg1;
- (void)resetState;
- (void)unlock;
- (void)lock;
- (void)processSIPMessage:(char )arg1 msgOut:(char )arg2 optional:(void )arg3 confIndex:(int )arg4;
- (void)remotePauseDidChangeToState:(BOOL)arg1 forVideo:(BOOL)arg2;
- (void)sendTimings;
- (void)logPerfTimings;
- (void)stopPausedHeartbeat;
- (void)startPausedHeartbeat;
- (void)cleanupMedia;
- (void)reportDashboardEndResult:(BOOL)arg1;
- (long long)calculateSIPEndAction:(BOOL)arg1 currentState:(long long)arg2 error:(id)arg3;
- (void)notifyDelegateAndEndCall:(long long)arg1 didRemoteCancel:(BOOL)arg2 error:(id)arg3;
- (struct __SecIdentity )retrieveIdentity;
- (void)setupPeerInfo:(BOOL)arg1 capabilities:(id)arg2;
- (void)setupRemoteCallInfoWithParticipantID:(id)arg1 usingInviteData:(id)arg2;
- (void)setupDTLSDefaults;
- (void)logDetailedNetworkInformation;
- (void)updateNetworkCheckHint:(double)arg1;
- (void)initWithRelevantStorebagEntries;
- (int)setupEncryptionWithKey:(const struct __CFData )arg1 confIndex:(int )arg2;
- (id)newSKEBlobWithRemoteSKEBlob:(id)arg1;
- (BOOL)configureLegacyTransportWithInviteInfo:(id)arg1 error:(id )arg2;
- (int)setSKEBlobOnTransportSession;
- (BOOL)setupIDSConnectionForCallID:(unsigned int)arg1 destination:(id)arg2 socket:(int)arg3 error:(id )arg4;
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1;
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1;
- (int)flushBasebandQueueWithPayloads:(id)arg1 flushCount:(unsigned int )arg2;
- (void)controlChannel:(id)arg1 receivedData:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;
- (void)setupSymptomEnabledMessage;
- (void)setupPreferredInterfaceMessage;
- (void)setupMomentsMessages;
- (void)setupCellTechChangeMessages;
- (void)setupPiPStateChangeMessage;
- (void)setupHandoverCandidateChangeMessage;
- (void)setupDisconnectMessage;
- (void)setupBasebandCodecInfoMessages;
- (void)setupCallingModeMessages;
- (void)setupAudioOnOffStateMessages;
- (void)setupAudioPausedHBMessages;
- (void)setupVideoPauseMessages;
- (void)setupAudioPauseMessages;
- (void)setupMessaging;
- (void)transportSession:(id)arg1 sendRelayResponse:(id)arg2;
- (void)transportSession:(id)arg1 initiateRelayRequest:(id)arg2;
- (void)transportSession:(id)arg1 cancelRelayRequest:(id)arg2;
- (void)transportSession:(id)arg1 connectionSetupDataDidChange:(id)arg2;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (void)rateController:(void )arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;
- (void)mediaController:(void )arg1 mediaSuggestionDidChange:(struct VCRateControlMediaSuggestion)arg2;
- (void)packMeters:(char )arg1 withLength:(char )arg2;
- (void)updateStatistics:(CDStruct_b21f1e06)arg1;
- (void)displayLinkTick:(id)arg1;
- (void)callAlarmsWithRTPTimeStamp:(CDStruct_1b6d18a9 )arg1;
- (void)processResolutionChangeToVideoRule:(id)arg1 captureRule:(id)arg2 featuresListString:(id)arg3;
- (id)newRemoteScreenAttributesForOrientation:(int)arg1;
- (void)updateVideoQualityNotification:(double)arg1;
- (double)sessionReceivingBitrate;
- (double)sessionReceivingFramerate;
- (double)sessionTransmittingBitrate;
- (double)sessionTransmittingFramerate;
- (BOOL)initializeVideoReceiver:(id )arg1 reportingAgent:(struct opaqueRTCReporting )arg2 fecHeaderV1Enabled:(BOOL)arg3;
- (BOOL)initializeVideoTransmitter:(id )arg1 encodeRule:(id)arg2 captureRuleWifi:(id)arg3 captureRuleCellular:(id)arg4 unpausing:(BOOL)arg5 reportingAgent:(struct opaqueRTCReporting )arg6 fecHeaderV1Enabled:(BOOL)arg7;
- (CGSize)computeVisibleAspectRatioWithRemoteScreenAspectRatio:(CGSize)arg1 remoteExpectedAspectRatio:(CGSize)arg2 encodeWidth:(int)arg3 encodeHeight:(int)arg4;
- (unsigned int)parameterSetForPayload:(int)arg1;
- (void)onPlayVideo:(struct __CVBuffer )arg1 frameTime:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3;
- (BOOL)onCaptureFrame:(struct opaqueCMSampleBuffer )arg1 audioTS:(unsigned int)arg2 audioHT:(double)arg3 videoHT:(CDStruct_1b6d18a9)arg4 droppedFrames:(int)arg5 cameraBits:(unsigned char)arg6;
- (void)processBlackFrame:(struct opaqueCMSampleBuffer )arg1;

@end

