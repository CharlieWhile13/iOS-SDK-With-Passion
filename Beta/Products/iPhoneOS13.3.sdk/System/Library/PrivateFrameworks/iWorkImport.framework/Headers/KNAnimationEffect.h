/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationEffect : NSObject <KNAnimationPlugin> {
    KNAnimationContext * mAnimationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned long long)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+ (id)localizedMenuString:(long long)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (id)updateDirectionAttributeValue:(long long)arg1 andCustomTextDirectionValue:(unsigned long long)arg2 turnOffBounce:(bool)arg3 turnOffMotionBlur:(bool)arg4 forAttributes:(id)arg5;

- (id)initWithAnimationContext:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })mvpMatrixWithContext:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })mvpMatrixWithTexture:(id)arg1 andFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })perspectiveMVPMatrixWithContext:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })perspectiveMVPMatrixWithTexture:(id)arg1 andFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end