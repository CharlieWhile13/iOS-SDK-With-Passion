//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol PXUIScrollViewDelegate;

@interface _PXUIScrollView : UIScrollView
{
    BOOL _deferContentOffsetUpdates;
    id <PXUIScrollViewDelegate> _px_delegate;
    CGPoint _pagingOriginOffset;
}

@property(nonatomic) BOOL deferContentOffsetUpdates; // @synthesize deferContentOffsetUpdates=_deferContentOffsetUpdates;
@property(nonatomic) CGPoint pagingOriginOffset; // @synthesize pagingOriginOffset=_pagingOriginOffset;
@property(nonatomic, setter=px_setDelegate:) __weak id <PXUIScrollViewDelegate> px_delegate; // @synthesize px_delegate=_px_delegate;
// - (void).cxx_destruct;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)_updatePagingOrigin;
- (void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)px_addSubview:(id)arg1;

@end

