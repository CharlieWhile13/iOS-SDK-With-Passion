//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath, PXPeopleStripCollectionViewController;

@protocol PXPeopleStripCollectionViewControllerDelegate <NSObject>
- (void)memberTappedAtIndexPath:(NSIndexPath *)arg1 forPeopleStripController:(PXPeopleStripCollectionViewController *)arg2;
- (UIEdgeInsets)sectionInset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (CGSize)sizeForItem;
@end

