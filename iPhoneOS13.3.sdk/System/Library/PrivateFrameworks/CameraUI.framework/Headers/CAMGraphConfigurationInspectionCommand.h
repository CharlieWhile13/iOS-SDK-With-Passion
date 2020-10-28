//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@class CAMCaptureGraphConfiguration;

@interface CAMGraphConfigurationInspectionCommand : CAMCaptureCommand
{
    CAMCaptureGraphConfiguration *__knownGraphConfiguration;
    CAMCaptureGraphConfiguration *__resolvedGraphConfiguration;
}

@property(retain, nonatomic, setter=_setResolvedGraphConfiguration:) CAMCaptureGraphConfiguration *_resolvedGraphConfiguration; // @synthesize _resolvedGraphConfiguration=__resolvedGraphConfiguration;
@property(readonly, nonatomic) CAMCaptureGraphConfiguration *_knownGraphConfiguration; // @synthesize _knownGraphConfiguration=__knownGraphConfiguration;
// - (void).cxx_destruct;
- (id)userInfo;
- (long long)_resolvedVideoConfigurationFromContext:(id)arg1;
- (void)executeWithContext:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKnownGraphConfiguration:(id)arg1;

@end

