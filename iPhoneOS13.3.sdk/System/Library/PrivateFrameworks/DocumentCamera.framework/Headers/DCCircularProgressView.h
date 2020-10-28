//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSProgress;

__attribute__((visibility("hidden")))
@interface DCCircularProgressView : UIView
{
    double _progress;
    NSProgress *_observedProgress;
    CAShapeLayer *_circleLayer;
}

@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
@property(nonatomic) double progress; // @synthesize progress=_progress;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (CGPath )newPathForProgress:(double)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end

