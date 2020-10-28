//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIODelegate-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioIOSource-Protocol.h>
#import <AVConference/VCMediaStreamProtocol-Protocol.h>
#import <AVConference/VCTextSender-Protocol.h>

@class VCAudioIO, VCAudioPayload;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCVirtualTTYDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCAudioIOSink, VCAudioIOSource, VCAudioIODelegate>
{
    int _clientPid;
    struct AudioStreamBasicDescription vpioFormat;
    unsigned int _vpioSamplesPerFrame;
    int deviceRole;
    BOOL isValid;
    NSObject<VCMediaStreamDelegate> *delegate;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    struct _opaque_pthread_mutex_t sessionLock;
    int _state;
    VCAudioPayload *_currentAudioPayload;
    VCAudioIO *_audioIO;
    struct SoundDec_t _decoder;
    struct opaqueCMSimpleQueue _charQueue;
    struct tagVCMemoryPool _characterPool;
    id _textStream;
}

@property(nonatomic) NSObject<VCMediaStreamDelegate> *delegate; // @synthesize delegate;
@property int deviceRole; // @synthesize deviceRole;
@property BOOL isValid; // @synthesize isValid;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo )arg1;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)setCanProcessAudio:(BOOL)arg1;
- (BOOL)canProcessAudio;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList )arg1;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList )arg1;
- (void)unlock;
- (void)lock;
- (void)setPause:(BOOL)arg1;
- (void)stopAudioWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)stop;
- (void)sendText:(NSString )arg1;
- (void)sendCharacter:(unsigned short)arg1;
- (void)startVirtualTTYWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithMode:(long long)arg1 clientPid:(int)arg2;
- (BOOL)setStreamConfig:(id)arg1 withError:(id )arg2;

@end

