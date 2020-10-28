//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _UIDataSourceSnapshotter;
@protocol _UICollectionViewUpdateTranslating;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverUpdate : NSObject
{
    NSArray *_updateItems;
    id <_UICollectionViewUpdateTranslating> _updateTranslator;
    _UIDataSourceSnapshotter *_finalDataSourceSnapshot;
}

+ (id)solverUpdateWithUpdateItems:(id)arg1 updateTranslator:(id)arg2 finalDataSourceSnapshot:(id)arg3;
@property(readonly, nonatomic) _UIDataSourceSnapshotter *finalDataSourceSnapshot; // @synthesize finalDataSourceSnapshot=_finalDataSourceSnapshot;
@property(readonly, nonatomic) id <_UICollectionViewUpdateTranslating> updateTranslator; // @synthesize updateTranslator=_updateTranslator;
@property(readonly, nonatomic) NSArray *updateItems; // @synthesize updateItems=_updateItems;
// - (void).cxx_destruct;
- (id)initWithUpdateItems:(id)arg1 updateTranslator:(id)arg2 finalDataSourceSnapshot:(id)arg3;

@end

