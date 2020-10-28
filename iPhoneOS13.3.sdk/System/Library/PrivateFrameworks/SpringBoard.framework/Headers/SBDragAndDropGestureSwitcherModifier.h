//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBGestureSwitcherModifier.h>

@interface SBDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier
{
    BOOL _floatingSwitcherVisible;
    long long _floatingConfiguration;
    long long _interfaceOrientation;
    long long _currentDropAction;
    CGPoint _location;
    CGRect _platterFrame;
    double _platterScale;
}

- (BOOL)_isPlatterPreviewIntersectingFloatingApplication;
- (CGRect)containerViewBounds;
- (double)darkeningAlphaForIndex:(NSUInteger)arg1;
- (long long)layoutUpdateMode;
- (double)scaleForIndex:(NSUInteger)arg1;
- (CGRect)frameForIndex:(NSUInteger)arg1;
- (id)layoutSettings;
- (id)handleGestureEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1 floatingSwitcherVisible:(BOOL)arg2 floatingConfiguration:(long long)arg3 interfaceOrientation:(long long)arg4;

@end
