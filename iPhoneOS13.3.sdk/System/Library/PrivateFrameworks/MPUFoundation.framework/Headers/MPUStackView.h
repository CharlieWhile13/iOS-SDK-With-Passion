//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UIWindow;
@protocol MPUStackViewDataSource;

@interface MPUStackView : UIView
{
    struct {
        CGSize baseSize;
        CGRect bounds;
        CGPoint centerInLocalCoordinates;
        BOOL forcesIntegralX;
        BOOL forcesIntegralY;
        UIOffset maximumRelativeOffsetStep;
        double scale;
        CGSize sizeInsetStep;
        CGPoint vanishingPoint;
    } _configuration;
    long long _distanceIgnoreCount;
    NSMutableArray *_items;
    UIWindow *_window;
    id <MPUStackViewDataSource> _dataSource;
    Class _itemClass;
    NSString *_itemReuseIdentifier;
    long long _numberOfItems;
    UIView *_perspectiveTargetView;
}

@property(nonatomic) __weak UIView *perspectiveTargetView; // @synthesize perspectiveTargetView=_perspectiveTargetView;
@property(readonly, nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *itemReuseIdentifier; // @synthesize itemReuseIdentifier=_itemReuseIdentifier;
@property(readonly, nonatomic) Class itemClass; // @synthesize itemClass=_itemClass;
@property(nonatomic) __weak id <MPUStackViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)_updateGeometryFieldsInConfiguration;
- (id)_dequeueReusableItem;
- (void)updateForChangedDistanceFromVanishingPoint;
- (CGSize)sizeOfItemAtIndex:(double)arg1;
- (void)reloadDataWithTransition:(long long)arg1;
- (void)reloadData;
- (UIOffset)relativeOffsetOfItemAtIndex:(double)arg1 withCenter:(CGPoint)arg2;
- (id)itemAtIndex:(long long)arg1;
- (void)endIgnoringDistanceUpdates;
- (void)beginIgnoringDistanceUpdates;
@property(nonatomic) CGPoint vanishingPoint;
@property(nonatomic) CGSize sizeInsetStep;
@property(nonatomic) UIOffset maximumRelativeOffsetStep;
@property(nonatomic) BOOL forcesIntegralY;
@property(nonatomic) BOOL forcesIntegralX;
@property(nonatomic) CGSize baseSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setCenter:(CGPoint)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 itemClass:(Class)arg2 itemReuseIdentifier:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;

@end

