//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPTextHostLayout.h>

#import <TSReading/TSKSearchTarget-Protocol.h>
#import <TSReading/TSWPColumnMetrics-Protocol.h>
#import <TSReading/TSWPLayoutParent-Protocol.h>
#import <TSReading/TSWPStorageObserver-Protocol.h>

@class TSTEditingState, TSTLayoutHint, TSTLayoutSpaceBundle, TSTMasterLayout, TSTTableInfo, TSTTableModel, TSWPLayout, TSWPPadding;

@interface TSTLayout : TSWPTextHostLayout <TSKSearchTarget, TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver>
{
    TSTMasterLayout *mMasterLayout;
    TSTLayoutHint *mLayoutHint;
    CGRect mCanvasVisibleRect;
    CGRect mPreviousVisibleStrokeFrame;
    BOOL mProcessChangesFiltering;
    BOOL mTabsVisible;
    BOOL mTableNameVisibilityIsValid;
    BOOL mTableNameVisible;
    BOOL mNewCanvasRevealedHorizontally;
    BOOL mNewCanvasRevealedVertically;
    BOOL mLayoutDirectionIsLeftToRight;
    TSTLayoutSpaceBundle *mSpaceBundle;
    struct {
        double tableNameHeight;
        CGSize scaleToFitParent;
        CGSize scaleToFitEnclosingTextColumn;
    } mCached;
    CGRect mRenderingFrameForLayoutGeometryFromInfo;
    TSWPLayout *mContainedTextEditingLayout;
    UIEdgeInsets mCachedPaddingForEditingCell;
    CGRect mComputedEditingCellContentFrame;
    unsigned int mCachedVerticalAlignmentForEditingCell;
    CGSize mTableSizeWithoutStrokes;
    CGSize mStrokeDelta;
    CGSize mCapturedStrokeFrameSizeForInline;
    CDStruct_5f1f7aa9 mEditingSpillingTextRange;
    unsigned int mContainedTextEditorParagraphAlignment;
    BOOL mContainedTextEditorTextWraps;
    BOOL mContainedTextEditorSpills;
    CGSize mSpillingTextSize;
    int mCoordinatesChangedMaskForChrome;
}

@property(nonatomic) BOOL processChangesFiltering; // @synthesize processChangesFiltering=mProcessChangesFiltering;
@property(retain, nonatomic) TSTLayoutHint *layoutHint; // @synthesize layoutHint=mLayoutHint;
@property(retain, nonatomic) TSTMasterLayout *masterLayout; // @synthesize masterLayout=mMasterLayout;
@property(readonly, nonatomic) BOOL layoutDirectionIsLeftToRight; // @synthesize layoutDirectionIsLeftToRight=mLayoutDirectionIsLeftToRight;
@property(readonly, nonatomic) CDStruct_5f1f7aa9 editingSpillingTextRange; // @synthesize editingSpillingTextRange=mEditingSpillingTextRange;
@property(retain, nonatomic) TSTLayoutSpaceBundle *spaceBundle; // @synthesize spaceBundle=mSpaceBundle;
@property(readonly, nonatomic) UIEdgeInsets paddingForEditingCell; // @synthesize paddingForEditingCell=mCachedPaddingForEditingCell;
@property(retain, nonatomic) TSWPLayout *containedTextEditingLayout; // @synthesize containedTextEditingLayout=mContainedTextEditingLayout;
@property(nonatomic) BOOL newCanvasRevealedVertically; // @synthesize newCanvasRevealedVertically=mNewCanvasRevealedVertically;
@property(nonatomic) BOOL newCanvasRevealedHorizontally; // @synthesize newCanvasRevealedHorizontally=mNewCanvasRevealedHorizontally;
- (BOOL)p_getLayoutDirectionLeftToRight;
- (unsigned int)p_defaultAlignmentForTableWritingDirection;
- (void)storage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (int)reapCoordinatesChangedMaskForChrome;
- (void)processChanges:(id)arg1;
- (void)p_processChangeActions:(id)arg1;
- (void)p_processChange:(id)arg1 forChangeSource:(id)arg2 actions:(id)arg3;
- (CGSize)initialTextSize;
- (CGRect)maskRectForTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (id)dependentLayouts;
- (CGRect)p_computeSpillingTextFrameForLayout:(id)arg1 textSize:(CGSize)arg2 editingSpillRange:(CDStruct_5f1f7aa9 )arg3;
- (CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2;
- (BOOL)p_layoutWhollyContainsGridRange:(CDStruct_58eae27c)arg1;
- (CGSize)p_rangeUpAndLeftOfIntersectionRangeOfGridRange:(CDStruct_58eae27c)arg1;
- (CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (unsigned int)verticalAlignmentForTextLayout:(id)arg1;
- (double)maxAutoGrowWidthForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (unsigned int)naturalAlignmentForTextLayout:(id)arg1;
- (unsigned int)p_naturalAlignmentForCellID:(CDStruct_0441cfb5)arg1;
@property(readonly, nonatomic) CGRect computedEditingCellContentFrame;
- (BOOL)textIsVertical;
@property(readonly, nonatomic) BOOL shrinkTextToFit;
@property(readonly, nonatomic) BOOL alwaysStartsNewTarget;
- (double)positionForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2 outWidth:(double )arg3 outGap:(double )arg4;
- (double)gapForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) BOOL columnsAreLeftToRight;
@property(readonly, nonatomic) NSUInteger columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
@property(readonly, nonatomic) CGSize adjustedInsets;
- (CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (CGRect)rectForSelection:(id)arg1;
- (BOOL)orderedBefore:(id)arg1;
- (CGPoint)calculatePointFromSearchReference:(id)arg1;
- (id)childSearchTargets;
- (void)layoutSearchForAnnotationWithHitBlock:(id /* CDUnknownBlockType */)arg1;
- (void)layoutSearchForSpellingErrorsWithHitBlock:(id /* CDUnknownBlockType */)arg1 stop:(BOOL )arg2;
- (void)layoutSearchForString:(id)arg1 options:(NSUInteger)arg2 hitBlock:(id /* CDUnknownBlockType */)arg3;
- (void)removeContainedTextEditingLayout;
- (void)updateChildrenFromInfo;
- (id)children;
- (void)setupContainedTextEditingLayout:(CDStruct_0441cfb5)arg1;
- (void)p_updateCachedStyleInformationFromCellID:(CDStruct_0441cfb5)arg1;
- (BOOL)isBeingManipulated;
- (void)validateTableNameVisibility;
- (void)invalidateTableNameVisibility;
- (void)bezierPathsForCellRegion:(id)arg1 transform:(CGAffineTransform)arg2 viewScale:(double)arg3 inset:(double)arg4 block:(id /* CDUnknownBlockType */)arg5;
- (void)invalidateSize;
- (void)invalidate;
- (void)setNeedsDisplayInRect:(CGRect)arg1;
- (void)setNeedsDisplay;
- (void)validate;
- (BOOL)isZoomedEditing;
- (BOOL)inFindReplaceMode;
- (BOOL)inPrintPreviewMode;
- (CGRect)alignmentFrameForProvidingGuidesInRoot;
- (CGRect)alignmentFrame;
- (int)wrapFitType;
- (id)initialInfoGeometry;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (CGPoint)capturedInfoPositionForAttachment;
- (CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (CGSize)minimumSize;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)canRotateChildLayout:(id)arg1;
- (BOOL)supportsRotation;
- (void)offsetGeometryBy:(CGPoint)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1 layoutHint:(id)arg2;
@property(readonly, nonatomic) TSTTableModel *tableModel;
@property(readonly, nonatomic) TSTTableInfo *tableInfo;
@property(readonly, nonatomic) TSTEditingState *editingState;
@property(nonatomic) CGSize scaleToFit;

@end

