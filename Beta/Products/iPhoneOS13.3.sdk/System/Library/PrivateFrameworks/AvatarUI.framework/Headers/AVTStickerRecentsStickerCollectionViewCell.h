/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTStickerRecentsStickerCollectionViewCell : UICollectionViewCell {
    NSUUID * _displaySessionUUID;
    UIImageView * _imageView;
    NSString * _title;
}

@property (nonatomic, retain) NSUUID *displaySessionUUID;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, copy) NSString *title;

+ (id)identifier;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (id)displaySessionUUID;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDisplaySessionUUID:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateWithDefaultImage;
- (void)updateWithImage:(id)arg1;

@end