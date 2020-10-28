//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUICollectionViewCell.h>

#import <StoreKitUI/SKUICellLayoutParentView-Protocol.h>

@class SKUIItemCellLayout;

@interface SKUIItemCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView>
{
    BOOL _layoutNeedsLayout;
}

- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setCellLayoutNeedsLayout;
@property(readonly, nonatomic) SKUIItemCellLayout *layout;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2;

@end

