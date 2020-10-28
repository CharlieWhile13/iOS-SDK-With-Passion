//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXTilingLayout.h>

@interface PXSingleTileLayout : PXTilingLayout
{
    CGRect _contentBounds;
    CGSize _preferredSize;
    struct PXTileIdentifier _tileIdentifier;
}

@property(nonatomic) CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, nonatomic) struct PXTileIdentifier tileIdentifier; // @synthesize tileIdentifier=_tileIdentifier;
- (BOOL)getGeometry:(out struct PXTileGeometry )arg1 group:(out NSUInteger )arg2 userData:(out id )arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (CGRect)contentBounds;
- (void)prepareLayout;
- (void)setReferenceSize:(CGSize)arg1;
- (id)initWithTileIdentifier:(struct PXTileIdentifier)arg1;
- (id)init;

@end

