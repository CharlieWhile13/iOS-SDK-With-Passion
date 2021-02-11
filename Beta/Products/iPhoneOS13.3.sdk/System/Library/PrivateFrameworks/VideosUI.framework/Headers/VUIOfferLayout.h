/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIOfferLayout : TVViewLayout {
    TVImageLayout * _appIconLayout;
    TVImageLayout * _badgeLayout;
    UIColor * _borderColor;
    struct TVCornerRadii { 
        double topLeft; 
        double topRight; 
        double bottomLeft; 
        double bottomRight; 
    }  _borderRadii;
    double  _borderWidth;
    VUITextLayout * _channelNameTextLayout;
    VUITextLayout * _focusedTextLayout;
    TVImageLayout * _imageLayout;
    TVImageLayout * _logoLayout;
    NSShadow * _shadow;
    VUITextLayout * _subtitleTextLayout;
    VUIMediaTagsViewLayout * _tagsLayout;
    VUITextLayout * _textLayout;
    VUITextLayout * _titleTextLayout;
    VUIButtonLayout * _versionsButtonLayout;
}

@property (nonatomic, retain) TVImageLayout *appIconLayout;
@property (nonatomic, retain) TVImageLayout *badgeLayout;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) struct TVCornerRadii { double x1; double x2; double x3; double x4; } borderRadii;
@property (nonatomic) double borderWidth;
@property (nonatomic, retain) VUITextLayout *channelNameTextLayout;
@property (nonatomic, retain) VUITextLayout *focusedTextLayout;
@property (nonatomic, retain) TVImageLayout *imageLayout;
@property (nonatomic, retain) TVImageLayout *logoLayout;
@property (nonatomic, retain) NSShadow *shadow;
@property (nonatomic, retain) VUITextLayout *subtitleTextLayout;
@property (nonatomic, retain) VUIMediaTagsViewLayout *tagsLayout;
@property (nonatomic, retain) VUITextLayout *textLayout;
@property (nonatomic, retain) VUITextLayout *titleTextLayout;
@property (nonatomic, retain) VUIButtonLayout *versionsButtonLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
+ (id)subtitleTextLayout;

- (void).cxx_destruct;
- (id)appIconLayout;
- (id)badgeLayout;
- (id)borderColor;
- (struct TVCornerRadii { double x1; double x2; double x3; double x4; })borderRadii;
- (double)borderWidth;
- (id)channelNameTextLayout;
- (id)focusedTextLayout;
- (id)imageLayout;
- (id)init;
- (id)logoLayout;
- (void)setAppIconLayout:(id)arg1;
- (void)setBadgeLayout:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setChannelNameTextLayout:(id)arg1;
- (void)setFocusedTextLayout:(id)arg1;
- (void)setImageLayout:(id)arg1;
- (void)setLogoLayout:(id)arg1;
- (void)setShadow:(id)arg1;
- (void)setSubtitleTextLayout:(id)arg1;
- (void)setTagsLayout:(id)arg1;
- (void)setTextLayout:(id)arg1;
- (void)setTitleTextLayout:(id)arg1;
- (void)setVersionsButtonLayout:(id)arg1;
- (id)shadow;
- (id)subtitleTextLayout;
- (id)tagsLayout;
- (id)textLayout;
- (id)titleTextLayout;
- (id)versionsButtonLayout;

@end