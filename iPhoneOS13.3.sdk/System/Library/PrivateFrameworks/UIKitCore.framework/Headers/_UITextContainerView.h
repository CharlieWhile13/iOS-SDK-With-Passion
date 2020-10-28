//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

#import <UIKitCore/_UITextViewCanvasViewContext-Protocol.h>

@class NSDictionary, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIColor, UITextView, _UITextViewCanvasView;
@protocol _UITextContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface _UITextContainerView : UIView <NSUITextViewCommonMethods, _UITextViewCanvasViewContext>
{
    UIEdgeInsets _textContainerInset;
    CGPoint _textContainerOrigin;
    CGSize _minSize;
    CGSize _maxSize;
    NSTextContainer *_textContainer;
    NSDictionary *_linkTextAttributes;
    NSUInteger _invalidationSeqNo;
    long long _invalidationSeqClipsToBounds;
    struct {
        unsigned int textContainerOriginInvalid:1;
        unsigned int verticalLayout:2;
        unsigned int horizontallyResizable:1;
        unsigned int verticallyResizable:1;
        unsigned int freezeTextContainerSize:1;
        unsigned int usesStandardTextScaling:1;
    } _tcvFlags;
    CGRect _constrainedTiledRenderingRect;
    UITextView *_textView;
    _UITextViewCanvasView *_canvasView;
    id <_UITextContainerViewDelegate> _delegate;
}

@property(readonly, nonatomic) _UITextViewCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) __weak id <_UITextContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
// - (void).cxx_destruct;
- (CGRect)_intersectRectWithConstrainedTiledRenderingRect:(CGRect)arg1;
- (void)_unconstrainTiledRendering;
- (void)_constrainTiledRenderingToRect:(CGRect)arg1;
@property(readonly, nonatomic) CGRect constrainedTiledRenderingRect;
- (void)removeAllGhostedRanges;
- (void)addGhostedRange:(NSRange)arg1;
@property(nonatomic) double maxTileHeight;
@property(nonatomic) BOOL usesTiledViews;
- (CGRect)visibleRect;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *markedTextStyle;
@property(nonatomic) NSRange markedRange;
@property(readonly, nonatomic) long long layoutOrientation;
- (id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2;
- (void)_ensureLayoutCompleteForRect:(CGRect)arg1;
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(NSRange)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) CGPoint drawingScale;
@property(readonly, nonatomic, getter=isEditable) BOOL editable;
@property(readonly, nonatomic) UIColor *textColor;
- (void)willMoveToSuperview:(id)arg1;
- (void)setNeedsDisplayInRect:(CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
- (void)updateInsertionPointStateAndRestartTimer:(BOOL)arg1;
@property(nonatomic) BOOL usesStandardTextScaling;
- (BOOL)_shouldCapSizeToFitLayoutRange:(out NSRange )arg1;
- (void)sizeToFit;
- (void)_sizeToConstrainedContainerUsedRect;
@property(nonatomic, getter=isVerticallyResizable) BOOL verticallyResizable;
@property(nonatomic, getter=isHorizontallyResizable) BOOL horizontallyResizable;
- (void)setConstrainedFrameSize:(CGSize)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)_setNeedsContentsFormatUpdate;
- (void)setNeedsDisplayInRect:(CGRect)arg1;
- (void)setNeedsDisplay;
- (void)_setFrameOrBounds:(CGRect)arg1 oldRect:(CGRect)arg2 isFrameRect:(BOOL)arg3 settingAction:(id /* CDUnknownBlockType */)arg4;
- (void)_ensureMinAndMaxSizesConsistentWithBounds;
- (void)invalidateTextContainerOrigin;
@property(readonly, nonatomic) CGPoint textContainerOrigin;
@property(nonatomic) UIEdgeInsets textContainerInset;
@property(nonatomic, getter=_freezeTextContainerSize, setter=_setFreezeTextContainerSize:) BOOL freezeTextContainerSize;
- (void)setBackgroundColor:(id)arg1;
- (void)tintColorDidChange;
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(NSUInteger)arg2;
- (id)linkTextAttributes;
@property(readonly, nonatomic) NSTextStorage *textStorage;
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 delegate:(id)arg3;

@end

