//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMFilterStatusIndicator : CAMControlStatusIndicator
{
    BOOL _on;
}

@property(nonatomic, getter=isOn) BOOL on; // @synthesize on=_on;
- (id)imageForCurrentState;
- (BOOL)shouldUseOutline;

@end

