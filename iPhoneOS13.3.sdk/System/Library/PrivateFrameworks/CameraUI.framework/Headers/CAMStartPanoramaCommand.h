//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@class CAMPanoramaCaptureRequest;

@interface CAMStartPanoramaCommand : CAMCaptureCommand
{
    CAMPanoramaCaptureRequest *__request;
}

@property(readonly, nonatomic) CAMPanoramaCaptureRequest *_request; // @synthesize _request=__request;
// - (void).cxx_destruct;
- (void)executeWithContext:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

