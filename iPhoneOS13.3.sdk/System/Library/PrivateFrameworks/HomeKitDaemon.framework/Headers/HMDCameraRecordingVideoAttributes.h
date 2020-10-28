//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>

@class NSNumber;

@interface HMDCameraRecordingVideoAttributes : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSNumber *_imageWidth;
    NSNumber *_imageHeight;
    long long _resolution;
    NSNumber *_frameRate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSNumber *frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) long long resolution; // @synthesize resolution=_resolution;
@property(readonly, copy, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (BOOL)_parseFromTLVData;
- (id)initWithImageWidth:(id)arg1 imageHeight:(id)arg2 frameRate:(id)arg3;
- (id)initWithResolution:(long long)arg1 frameRate:(id)arg2;

@end

