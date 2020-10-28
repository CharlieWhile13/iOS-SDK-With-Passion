//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSKHighlightArrayController, TSUImage;
@protocol TSKSearchReference;

@protocol TSKHighlightArrayControllerProtocol <NSObject>
- (void)pulseAnimationDidStop:(TSKHighlightArrayController *)arg1;
- (TSUImage *)imageForSearchReference:(id <TSKSearchReference>)arg1 forPath:(CGPath )arg2 shouldPulsate:(BOOL)arg3;
- (CGPath )newPathForSearchReference:(id <TSKSearchReference>)arg1;

@optional
- (CGRect)rectForSearchReference:(id <TSKSearchReference>)arg1;
@end

