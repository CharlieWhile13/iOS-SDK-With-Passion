//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDataSourceSnapshotter.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListSnapshotter : _UIDataSourceSnapshotter
{
    NSIndexSet *_topSeparators;
    NSIndexSet *_bottomSeparators;
    BOOL _displaysAdditionalSeparators;
}

+ (id)snapshotWithSectionCountsProvider:(id /* CDUnknownBlockType */)arg1 topBottomSeparatorProvider:(id /* CDUnknownBlockType */)arg2 displaysAdditionalSeparators:(BOOL)arg3;
@property(readonly, nonatomic) BOOL displaysAdditionalSeparators; // @synthesize displaysAdditionalSeparators=_displaysAdditionalSeparators;
// - (void).cxx_destruct;
- (BOOL)hasBottomSeparatorInSection:(long long)arg1;
- (BOOL)hasTopSeparatorInSection:(long long)arg1;
- (id)initWithSectionCountsProvider:(id /* CDUnknownBlockType */)arg1 topBottomSeparatorProvider:(id /* CDUnknownBlockType */)arg2 displaysAdditionalSeparators:(BOOL)arg3;

@end

