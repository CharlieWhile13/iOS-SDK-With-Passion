//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>


__attribute__((visibility("hidden")))
@interface VUICollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    UIEdgeInsets _gradientBoundsInsets;
    struct {
        unsigned int layoutBelowDisabled:1;
    } _flags;
}

@property(nonatomic) UIEdgeInsets gradientBoundsInsets; // @synthesize gradientBoundsInsets=_gradientBoundsInsets;
- (void)_getGradientMaskBounds:(out CGRect )arg1 startInsets:(out UIEdgeInsets )arg2 endInsets:(out UIEdgeInsets )arg3 intensities:(out UIEdgeInsets )arg4;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)_performWithoutLayoutBelow:(id /* CDUnknownBlockType */)arg1;
- (void)layoutBelowIfNeeded;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (BOOL)_shouldFadeCellsForBoundChangeWhileRotating;

@end
