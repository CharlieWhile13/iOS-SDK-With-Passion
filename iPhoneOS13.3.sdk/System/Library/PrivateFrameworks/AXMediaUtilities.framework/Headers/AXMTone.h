//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMADSREnvelope;

@interface AXMTone : NSObject
{
    NSUInteger _sampleRate;
    double _frequency;
    AXMADSREnvelope *_envelope;
    NSUInteger _waveform;
    double _gain;
    double _aWeighting;
}

@property(readonly, nonatomic) double aWeighting; // @synthesize aWeighting=_aWeighting;
@property(nonatomic) double gain; // @synthesize gain=_gain;
@property(nonatomic) NSUInteger waveform; // @synthesize waveform=_waveform;
@property(readonly, nonatomic) AXMADSREnvelope *envelope; // @synthesize envelope=_envelope;
@property(readonly, nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) NSUInteger sampleRate; // @synthesize sampleRate=_sampleRate;
// - (void).cxx_destruct;
- (double)_rawValueForTonePhase:(double)arg1;
- (void)_setFrequency:(double)arg1;
- (void)renderInBuffer:(vector_3203cf93 )arg1 atFrame:(NSUInteger)arg2;
- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;
- (id)init;

@end

