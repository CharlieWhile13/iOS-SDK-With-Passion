//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class _UIForceLevelClassifier;

@protocol _UIForceLevelClassifierDelegate <NSObject>
- (void)_forceLevelClassifier:(_UIForceLevelClassifier *)arg1 currentForceLevelDidChange:(long long)arg2;

@optional
- (void)_forceLevelClassifierDidReset:(_UIForceLevelClassifier *)arg1;
- (void)_forceLevelClassifier:(_UIForceLevelClassifier *)arg1 didUpdateProgress:(double)arg2 toForceLevel:(long long)arg3;
@end

