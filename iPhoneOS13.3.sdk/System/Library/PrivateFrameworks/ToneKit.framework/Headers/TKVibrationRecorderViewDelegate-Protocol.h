//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TKVibrationRecorderView;

@protocol TKVibrationRecorderViewDelegate <NSObject>
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderView:(TKVibrationRecorderView *)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (BOOL)vibrationRecorderViewDidEnterRecordingMode:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderView:(TKVibrationRecorderView *)arg1 buttonTappedWithIdentifier:(int)arg2;
- (void)vibrationComponentDidEndForVibrationRecorderView:(TKVibrationRecorderView *)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderView:(TKVibrationRecorderView *)arg1;
@end

