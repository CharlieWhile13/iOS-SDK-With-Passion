//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, PKDrawing;

@interface PKAttachmentView : UIView
{
    BOOL _contentHidden;
    PKDrawing *_drawing;
    NSMutableDictionary *_tiles;
    NSMutableDictionary *_offscreenTiles;
    NSArray *_additionalStrokes;
    UIView *_tileContainerView;
}

@property(nonatomic) BOOL contentHidden; // @synthesize contentHidden=_contentHidden;
@property(retain, nonatomic) UIView *tileContainerView; // @synthesize tileContainerView=_tileContainerView;
@property(retain, nonatomic) NSArray *additionalStrokes; // @synthesize additionalStrokes=_additionalStrokes;
@property(readonly, nonatomic) NSMutableDictionary *offscreenTiles; // @synthesize offscreenTiles=_offscreenTiles;
@property(readonly, nonatomic) NSMutableDictionary *tiles; // @synthesize tiles=_tiles;
@property(copy, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)updateTileContainerViewFrame;
- (void)updateDrawingHeight:(double)arg1 notifyDrawingDidChange:(BOOL)arg2;
- (void)updateDrawingHeight:(double)arg1;
- (double)heightFromDrawing:(id)arg1 delta:(double)arg2;
- (void)pixelAlignForContentScale:(double)arg1 enclosingScrollView:(id)arg2;
- (void)updateFrameForTextContainer;
- (void)fingerDrawingEnabledDidChange;
- (void)drawingDidEraseStrokes;
- (void)drawingDidChange;
- (void)drawingWillBegin;
- (BOOL)hitByTouchLocation:(CGPoint)arg1 bounds:(CGRect)arg2;
- (BOOL)hitChrome:(CGPoint)arg1 isStylus:(BOOL)arg2;
@property(readonly, nonatomic) UIView *tileMaskView;
@property(readonly, nonatomic) double drawingScale;
- (BOOL)disableTileAnimations;
- (void)fullyRendered;
- (BOOL)wantsFullyRendered;
@property(readonly, nonatomic) BOOL isAtEndOfDocument;
- (id)initWithFrame:(CGRect)arg1 drawing:(id)arg2;

@end
