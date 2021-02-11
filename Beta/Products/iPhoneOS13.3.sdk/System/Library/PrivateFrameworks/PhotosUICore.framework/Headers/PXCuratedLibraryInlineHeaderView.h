/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCuratedLibraryInlineHeaderView : UIView <PXAccessibilityView, PXGReusableView> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    PXCuratedLibraryInlineHeaderViewConfiguration * _configuration;
    UIVisualEffectView * _effectView;
    UILabel * _subtitleLabel;
    UIView * _tintView;
    UILabel * _titleLabel;
    PXCuratedLibraryInlineHeaderViewConfiguration * _userData;
}

@property (nonatomic, readonly, copy) NSString *accessibilityLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAccessible;
@property (nonatomic, readonly) bool isContainedInAsset;
@property (readonly) Class superclass;
@property (nonatomic, copy) PXCuratedLibraryInlineHeaderViewConfiguration *userData;

+ (double)_heightForStyle:(unsigned long long)arg1;
+ (id)_subtitleFontForStyle:(unsigned long long)arg1;
+ (double)_titleBaselineDistanceForFont:(id)arg1;
+ (id)_titleFontForStyle:(unsigned long long)arg1;
+ (struct CGSize { double x1; double x2; })sizeWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)_configureViews;
- (void)_platformSpecificViewSetup;
- (void)_setEffectViewCornerRadius:(double)arg1;
- (void)_setupBackgroundView;
- (void)_setupViews;
- (id)_tintViewBackgroundColor;
- (void)_updateButtonWithConfiguration:(id)arg1;
- (void)_updateConfiguration;
- (id)accessibilityLabel;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessible;
- (bool)isContainedInAsset;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setUserData:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)userData;

@end