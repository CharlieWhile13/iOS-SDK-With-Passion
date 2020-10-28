//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>


__attribute__((visibility("hidden")))
@interface RCWaveformScrollView : UIScrollView <UIGestureRecognizerDelegate>
{
    NSUInteger _ignoreContentOffsetChangesCount;
}

- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 usingCurrentAnimatedPosition:(BOOL)arg3;
- (CGPoint)contentOffsetInPresentationLayer:(BOOL)arg1;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(CGPoint)arg1;
- (void)endIgnoringContentOffsetChanges;
- (void)beginIgnoringContentOffsetChanges;

@end
