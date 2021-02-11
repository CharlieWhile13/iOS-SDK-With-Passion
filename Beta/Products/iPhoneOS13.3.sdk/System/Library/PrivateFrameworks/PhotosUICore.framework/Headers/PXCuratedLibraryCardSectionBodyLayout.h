/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCuratedLibraryCardSectionBodyLayout : PXGLayout <PXGDisplayAssetSource, PXGGradientSource, PXGSolidColorSource> {
    PXGLayoutGuide * _assetLayoutGuide;
    struct _PXGSpriteIndexRange { 
        unsigned int location; 
        unsigned int length; 
    }  _assetSpriteIndexRange;
    unsigned short  _assetVersion;
    long long  _currentSkimmingIndex;
    PXAssetsDataSource * _dataSource;
    bool  _isSkimming;
    <PXDisplayAsset> * _keyAsset;
    <PXDisplayAssetFetchResult> * _keyAssetsFetchResult;
    long long  _maxSkimmingIndex;
    long long  _section;
    struct PXSimpleIndexPath { 
        unsigned long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _sectionIndexPath;
    struct _PXGSpriteIndexRange { 
        unsigned int location; 
        unsigned int length; 
    }  _skimmingHintSpriteIndexRange;
    PXCuratedLibraryCardSectionBodyLayoutSpec * _spec;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
    }  _updateFlags;
    long long  _zoomLevel;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } assetFrame;
@property (nonatomic, readonly) PXGLayoutGuide *assetLayoutGuide;
@property (nonatomic) long long currentSkimmingIndex;
@property (nonatomic, readonly) PXAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSkimming;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *keyAssetsFetchResult;
@property (nonatomic) long long maxSkimmingIndex;
@property (nonatomic, readonly) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;
@property (nonatomic, readonly) long long section;
@property (nonatomic, readonly) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } sectionIndexPath;
@property (nonatomic, retain) PXCuratedLibraryCardSectionBodyLayoutSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic) long long zoomLevel;

- (void).cxx_destruct;
- (void)_updateKeyAssetFetchResultWithDataSource:(id)arg1 section:(long long)arg2;
- (void)_updateSkimmingHintWithAssetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateSprites;
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(id /* block */)arg3 modifyState:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })assetFrame;
- (id)assetLayoutGuide;
- (struct UIColor { Class x1; }*)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (long long)currentSkimmingIndex;
- (id)dataSource;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(id)arg2;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(id)arg2;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)arg1;
- (id)gradientForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)init;
- (bool)isSkimming;
- (id)keyAssetsFetchResult;
- (id)layoutForItemChanges;
- (long long)maxSkimmingIndex;
- (struct CGSize { double x1; double x2; })minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (id)presentedGeometryDescriptor;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (long long)section;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })sectionIndexPath;
- (void)setCurrentSkimmingIndex:(long long)arg1;
- (void)setDataSource:(id)arg1 section:(long long)arg2;
- (void)setIsSkimming:(bool)arg1;
- (void)setMaxSkimmingIndex:(long long)arg1;
- (void)setSpec:(id)arg1;
- (void)setZoomLevel:(long long)arg1;
- (id)spec;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1;
- (void)update;
- (long long)zoomLevel;

@end