//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamSessionID, HMDCameraStreamTracker;

@interface _HMDCameraStreamTrackerAssertion : HMFObject
{
    HMDCameraStreamTracker *_streamTracker;
    HMDCameraStreamSessionID *_streamSessionID;
}

@property(readonly, nonatomic) HMDCameraStreamSessionID *streamSessionID; // @synthesize streamSessionID=_streamSessionID;
@property(readonly, nonatomic) __weak HMDCameraStreamTracker *streamTracker; // @synthesize streamTracker=_streamTracker;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStreamTracker:(id)arg1 streamIdentifier:(id)arg2;

@end

