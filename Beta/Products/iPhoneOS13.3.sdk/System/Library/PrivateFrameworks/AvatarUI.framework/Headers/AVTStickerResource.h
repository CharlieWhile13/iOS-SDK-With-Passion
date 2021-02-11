/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTStickerResource : NSObject <AVTCachedResource> {
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
    UIImage * _image;
    AVTUINSURL * _internalURL;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) AVTUINSURL *internalURL;

- (void).cxx_destruct;
- (id)URL;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)image;
- (id)initWithImage:(id)arg1 URL:(id)arg2 clippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)internalURL;
- (void)setInternalURL:(id)arg1;
- (void)setURL:(id)arg1;

@end