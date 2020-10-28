//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADFill.h>

@class OADBlipRef, OADImageFillTechnique, OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADImageFill : OADFill
{
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
    OADRelativeRect *mSourceRect;
    int mDpi;
    BOOL mIsDpiOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADImageFillTechnique *mTechnique;
}

+ (id)defaultProperties;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)setStyleColor:(id)arg1;
- (BOOL)isTechniqueOverridden;
- (void)setTechnique:(id)arg1;
- (id)technique;
- (BOOL)isRotateWithShapeOverridden;
- (void)setRotateWithShape:(BOOL)arg1;
- (BOOL)rotateWithShape;
- (BOOL)isDpiOverridden;
- (void)setDpi:(int)arg1;
- (int)dpi;
- (BOOL)isSourceRectOverridden;
- (void)setSourceRect:(id)arg1;
- (id)sourceRect;
- (BOOL)isBlipRefOverridden;
- (void)setBlipRef:(id)arg1;
- (id)blipRef;
- (id)color;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (BOOL)isAnythingOverridden;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;
// - (id)copyWithZone:(_NSZone )arg1;

@end

