//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKRectangularAnnotationEventHandler.h>

@interface AKRectangularPageSizedAnnotationEventHandler : AKRectangularAnnotationEventHandler
{
}

- (CGRect)_validateAnnotationRectForDrag:(CGRect)arg1;
- (CGRect)_validateAnnotationRectForResize:(CGRect)arg1;
- (void)updateModelWithCurrentPoint:(CGPoint)arg1;
- (void)getInitialDraggedPoint:(CGPoint )arg1 otherPoint:(CGPoint )arg2 center:(CGPoint )arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;

@end

