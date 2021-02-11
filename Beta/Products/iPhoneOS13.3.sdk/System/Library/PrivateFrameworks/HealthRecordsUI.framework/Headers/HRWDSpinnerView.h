/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface HRWDSpinnerView : UIView {
    UILabel * _label;
    UIActivityIndicatorView * _spinner;
}

@property (getter=isAnimating, nonatomic, readonly) bool animating;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (id)init;
- (bool)isAnimating;
- (void)setMessageWhileSpinning:(id)arg1;
- (void)startSpinner;
- (void)stopSpinner;

@end