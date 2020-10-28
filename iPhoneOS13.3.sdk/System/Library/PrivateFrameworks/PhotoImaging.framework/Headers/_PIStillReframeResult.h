//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <PhotoImaging/PIStillReframeResult-Protocol.h>

@class NSArray, VNSaliencyImageObservation;

@interface _PIStillReframeResult : _NURenderResult <PIStillReframeResult>
{
    double _confidence;
    VNSaliencyImageObservation *_saliencyObservation;
    NSArray *_ANODSubjects;
    CGRect _bounds;
}

@property(copy, nonatomic) NSArray *ANODSubjects; // @synthesize ANODSubjects=_ANODSubjects;
@property(retain, nonatomic) VNSaliencyImageObservation *saliencyObservation; // @synthesize saliencyObservation=_saliencyObservation;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) CGRect bounds; // @synthesize bounds=_bounds;
// - (void).cxx_destruct;

@end

