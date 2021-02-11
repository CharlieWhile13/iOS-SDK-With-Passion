/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

@interface MFConversationItemFooterView : UIView {
    UIVisualEffectView * _backgroundView;
    EMCachingContactStore * _contactStore;
    double  _defaultRevealActionButtonOriginY;
    double  _defaultSeeMoreButtonOriginY;
    double  _defaultTrashButtonOriginY;
    <MFMessageFooterViewDelegate> * _delegate;
    MFMessageDisplayMetrics * _displayMetrics;
    UIButton * _revealActionsButton;
    UIButton * _seeMoreButton;
    NSString * _senderName;
    bool  _shouldArchiveByDefault;
    UIButton * _trashButton;
}

@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic, retain) EMCachingContactStore *contactStore;
@property (nonatomic) double defaultRevealActionButtonOriginY;
@property (nonatomic) double defaultSeeMoreButtonOriginY;
@property (nonatomic) double defaultTrashButtonOriginY;
@property (nonatomic) <MFMessageFooterViewDelegate> *delegate;
@property (nonatomic, retain) MFMessageDisplayMetrics *displayMetrics;
@property (nonatomic, retain) UIButton *revealActionsButton;
@property (nonatomic, retain) UIButton *seeMoreButton;
@property (nonatomic, copy) NSString *senderName;
@property (nonatomic) bool shouldArchiveByDefault;
@property (nonatomic, retain) UIButton *trashButton;

+ (id)nameFont;
+ (id)prefixFont;

- (void).cxx_destruct;
- (void)_fontMetricCacheDidInvalidate:(id)arg1;
- (void)_updateButtonsForTraitCollection:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 toButton:(long long)arg3;
- (id)backgroundView;
- (id)contactStore;
- (double)defaultRevealActionButtonOriginY;
- (double)defaultSeeMoreButtonOriginY;
- (double)defaultTrashButtonOriginY;
- (id)delegate;
- (id)displayMetrics;
- (void)hideAttribution;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutActionButtonWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSeeMoreButton;
- (void)layoutSubviews;
- (void)layoutTrashButtonWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)moveOriginYByOffset:(double)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)revealActionsButton;
- (id)seeMoreButton;
- (id)senderName;
- (void)setBackgroundView:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContactStore:(id)arg1;
- (void)setDefaultRevealActionButtonOriginY:(double)arg1;
- (void)setDefaultSeeMoreButtonOriginY:(double)arg1;
- (void)setDefaultTrashButtonOriginY:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMetrics:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setRevealActionsButton:(id)arg1;
- (void)setSeeMoreButton:(id)arg1;
- (void)setSenderName:(id)arg1;
- (void)setShouldArchiveByDefault:(bool)arg1;
- (void)setTrashButton:(id)arg1;
- (bool)shouldArchiveByDefault;
- (void)showAttributionWithSenderName:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)trashButton;

@end