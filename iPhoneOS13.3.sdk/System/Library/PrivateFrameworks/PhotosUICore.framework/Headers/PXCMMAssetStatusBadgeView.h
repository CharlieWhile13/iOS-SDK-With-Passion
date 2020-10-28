//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@interface PXCMMAssetStatusBadgeView : UIView <PXUIViewBasicTile, PXReusableObject>
{
    struct {
        BOOL imageView;
    } _needsUpdateFlags;
    long long _status;
    UIView *_glyphView;
}

+ (CGSize)preferredSize;
@property(retain, nonatomic) UIView *glyphView; // @synthesize glyphView=_glyphView;
@property(nonatomic) long long status; // @synthesize status=_status;
// - (void).cxx_destruct;
- (void)_updateImageViewIfNeeded;
- (void)_invalidateImageView;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, nonatomic) UIView *view;

@end

