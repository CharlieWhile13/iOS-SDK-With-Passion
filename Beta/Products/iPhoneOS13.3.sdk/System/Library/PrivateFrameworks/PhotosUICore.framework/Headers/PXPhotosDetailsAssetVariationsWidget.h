/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsAssetVariationsWidget : NSObject <PXPhotoLibraryUIChangeObserver, PXSectionedDataSourceManagerObserver, PXUIWidget, UICollectionViewDataSource, UICollectionViewDelegate> {
    PHAsset * __asset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __contentInsets;
    bool  __contentViewVisible;
    PXAssetVariationsDataSource * __dataSource;
    AVAsset * __existingVideoAsset;
    PXPhotosDetailsLoadCoordinationToken * __loadCoordinationToken;
    UIImage * __placeholderImage;
    PXPhotoKitAssetActionManager * _actionManager;
    PXActionPerformer * _actionPerformer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _collectionContentInsets;
    UICollectionView * _collectionView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    _PXAssetVariationsContentView * _contentView;
    PXPhotosDetailsContext * _context;
    PXAssetVariationsDataSourceManager * _dataSourceManager;
    bool  _didSetInitialScrollPosition;
    int  _existingVideoRequestID;
    UILabel * _failureView;
    bool  _hasLoadedContentData;
    bool  _isDismissingForSelection;
    NSString * _localizedDisclosureTitle;
    PXAssetVariationCollectionViewCell * _measuringCell;
    struct { 
        bool views; 
        bool viewsConfiguration; 
        bool initialScrollPosition; 
        bool layout; 
        bool disclosureTitle; 
        bool renderProvider; 
        bool visibleCells; 
        bool placeholderImage; 
        bool existingVideo; 
        bool metrics; 
    }  _needsUpdateFlags;
    int  _placeholderImageRequestID;
    PXAssetVariationRenderProvider * _previewRenderProvider;
    PXWidgetSpec * _spec;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (setter=_setAsset:, nonatomic, retain) PHAsset *_asset;
@property (setter=_setContentInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _contentInsets;
@property (getter=_isContentViewVisible, setter=_setContentViewVisible:, nonatomic) bool _contentViewVisible;
@property (setter=_setDataSource:, nonatomic, retain) PXAssetVariationsDataSource *_dataSource;
@property (setter=_setExistingVideoAsset:, nonatomic, retain) AVAsset *_existingVideoAsset;
@property (setter=_setLoadCoordinationToken:, nonatomic, retain) PXPhotosDetailsLoadCoordinationToken *_loadCoordinationToken;
@property (setter=_setPlaceholderImage:, nonatomic, retain) UIImage *_placeholderImage;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } collectionContentInsets;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXAssetEditOperationManager *editOperationManager;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (setter=_setHasLoadedContentData:, nonatomic) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (setter=_setLocalizedDisclosureTitle:, nonatomic, retain) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) PXAssetVariationCollectionViewCell *measuringCell;
@property (nonatomic, retain) PXOneUpPresentation *oneUpPresentation;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;
@property (nonatomic) <PXWidgetUnlockDelegate> *widgetUnlockDelegate;

+ (void)preloadResources;

- (void).cxx_destruct;
- (id)_asset;
- (id)_cellReuseIdentifierForVariationType:(long long)arg1;
- (void)_commitEditWithVariationType:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsets;
- (void)_contentViewDidLayoutSubviews;
- (id)_dataSource;
- (id)_existingVideoAsset;
- (void)_handleExistingVideoResult:(id)arg1 info:(id)arg2;
- (void)_handlePlaceholderImageResult:(id)arg1 info:(id)arg2;
- (void)_invalidateDisclosureTitle;
- (void)_invalidateExistingVideo;
- (void)_invalidateInitialScrollPosition;
- (void)_invalidateLayout;
- (void)_invalidateMetrics;
- (void)_invalidatePlaceholderImage;
- (void)_invalidateRenderProvider;
- (void)_invalidateViews;
- (void)_invalidateVisibleCells;
- (void)_invalidateviewsConfiguration;
- (bool)_isContentViewVisible;
- (struct CGSize { double x1; double x2; })_itemSizeForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_loadCoordinationToken;
- (bool)_needsUpdate;
- (id)_newLayoutForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_placeholderImage;
- (void)_presentStatusAlert;
- (void)_setAsset:(id)arg1;
- (void)_setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setContentViewVisible:(bool)arg1;
- (void)_setDataSource:(id)arg1;
- (void)_setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)_setExistingVideoAsset:(id)arg1;
- (void)_setHasLoadedContentData:(bool)arg1;
- (void)_setLoadCoordinationToken:(id)arg1;
- (void)_setLocalizedDisclosureTitle:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setPlaceholderImage:(id)arg1;
- (void)_updateDisclosureTitleIfNeeded;
- (void)_updateExistingVideoIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateInitialScrollPositionIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updateMetricsIfNeeded;
- (void)_updatePlaceholderImageIfNeeded;
- (void)_updateRenderProviderIfNeeded;
- (void)_updateViewsIfNeeded;
- (void)_updateVisibleCellsIfNeeded;
- (void)_updateviewsConfigurationIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionContentInsets;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct NSObject { Class x1; }*)contentView;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (id)context;
- (id)editOperationManager;
- (bool)hasContentForCurrentInput;
- (bool)hasLoadedContentData;
- (id)init;
- (id)localizedDisclosureTitle;
- (id)localizedTitle;
- (id)measuringCell;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (id)spec;
- (void)userDidSelectDisclosureControl;
- (id)widgetDelegate;

@end
