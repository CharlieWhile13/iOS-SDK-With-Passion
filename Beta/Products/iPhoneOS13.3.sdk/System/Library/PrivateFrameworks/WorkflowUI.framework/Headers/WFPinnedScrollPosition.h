/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFPinnedScrollPosition : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    WFScrollPositionPinningCollectionView * _scrollView;
    UIView * _view;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, readonly) WFScrollPositionPinningCollectionView *scrollView;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })center;
- (id)initWithScrollView:(id)arg1 view:(id)arg2;
- (id)scrollView;
- (id)view;

@end
