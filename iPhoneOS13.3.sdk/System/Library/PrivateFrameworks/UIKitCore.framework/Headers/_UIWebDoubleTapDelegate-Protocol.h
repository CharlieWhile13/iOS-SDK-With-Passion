//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIScrollView, UIView;

@protocol _UIWebDoubleTapDelegate
- (BOOL)considerHeightForDoubleTap;
- (CDStruct_39925896)doubleTapScalesForSize:(CGSize)arg1;
- (CGRect)rectOfInterestForPoint:(CGPoint)arg1;
- (double)minimumScaleForSize:(CGSize)arg1;
- (CGRect)visibleContentRect;
- (double)currentDocumentScale;
- (double)zoomedDocumentScale;
- (UIView *)contentView;
- (UIScrollView *)enclosingScrollView;

@optional
- (void)willZoomToLocation:(CGPoint)arg1 atScale:(double)arg2 forDuration:(double)arg3;
- (BOOL)shouldSelectionAssistantReceiveDoubleTapAtPoint:(CGPoint)arg1 forScale:(double)arg2;
- (void)willZoomToMinimumScale;
@end

