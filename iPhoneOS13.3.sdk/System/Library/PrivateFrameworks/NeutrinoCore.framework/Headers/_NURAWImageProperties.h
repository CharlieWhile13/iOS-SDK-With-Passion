//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NURAWImageProperties-Protocol.h>

@class CIFilter, NSArray, NSString, _NURAWCameraSpaceProperties;
@protocol NURAWNoiseReductionProperties;

@interface _NURAWImageProperties : NSObject <NURAWImageProperties>
{
    NSString *_decoderVersion;
    NSArray *_availableDecoderVersions;
    double _temperature;
    double _tint;
    CIFilter *_rawConvert;
    id <NURAWNoiseReductionProperties> _noiseReductionProperties;
    _NURAWCameraSpaceProperties *_rawCameraSpaceProperties;
}

@property(retain) _NURAWCameraSpaceProperties *rawCameraSpaceProperties; // @synthesize rawCameraSpaceProperties=_rawCameraSpaceProperties;
@property(retain) id <NURAWNoiseReductionProperties> noiseReductionProperties; // @synthesize noiseReductionProperties=_noiseReductionProperties;
@property(retain) CIFilter *rawConvert; // @synthesize rawConvert=_rawConvert;
@property double tint; // @synthesize tint=_tint;
@property double temperature; // @synthesize temperature=_temperature;
@property(retain) NSArray *availableDecoderVersions; // @synthesize availableDecoderVersions=_availableDecoderVersions;
@property(retain) NSString *decoderVersion; // @synthesize decoderVersion=_decoderVersion;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)inputNeutralXYFromRGB:(const double )arg1;

@end

