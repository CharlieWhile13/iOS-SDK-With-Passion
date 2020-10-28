//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionViewController.h>

@class GKCollectionViewDataSource, NSArray;

@interface GKBasicCollectionViewController : GKCollectionViewController
{
    id _target;
    NSArray *_metricsForSections;
    GKCollectionViewDataSource *_initialDataSource;
}

@property(retain, nonatomic) GKCollectionViewDataSource *initialDataSource; // @synthesize initialDataSource=_initialDataSource;
@property(retain, nonatomic) NSArray *metricsForSections; // @synthesize metricsForSections=_metricsForSections;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (CGSize)preferredContentSize;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureDataSource;
- (void)setDataSource:(id)arg1;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 title:(id)arg2;

@end

