//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (FPFetchThumbnailsOperation)
+ (id)fp_sortDescriptorByDocumentSize;
+ (id)fp_sortDescriptorByLastUsedDate;
+ (id)fp_sortDescriptorByModifiedDateDescending;
+ (id)fp_sortDescriptorByDisplayName;
- (id)fp_shortDescriptionExpandingAtMost:(NSUInteger)arg1;
- (id)fp_removingObjectsNotKindOfClasses:(id)arg1;
- (id)fp_pickItemsFromArray:(id)arg1 correspondingToIndexesOfItemsInArray:(id)arg2;
- (id)fp_categorize:(id /* CDUnknownBlockType */)arg1;
- (id)fp_filter:(id /* CDUnknownBlockType */)arg1;
- (id)fp_map:(id /* CDUnknownBlockType */)arg1;
- (id)fp_mapWithIndex:(id /* CDUnknownBlockType */)arg1;
- (id)fp_itemIDs;
- (id)fp_itemIdentifiers;
- (long long)fp_compareItem:(id)arg1 toItem:(id)arg2;
- (id /* CDUnknownBlockType */)fp_comparator;
- (id)_fp_componentsWrappedInQuotes;
- (id)_fp_componentsJoinedByAnd;
- (id)_fp_componentsJoinedByOr;
- (id)_fp_filter:(id /* CDUnknownBlockType */)arg1;
- (id)_fp_map:(id /* CDUnknownBlockType */)arg1;
@end

