//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSSet, SKUILibraryItem, SKUILibraryItemState;

@protocol SKUILibraryInterface <NSObject>
- (SKUILibraryItemState *)stateForLibraryItem:(SKUILibraryItem *)arg1;
- (void)enumerateStatesForLibraryItems:(NSSet *)arg1 usingBlock:(void (^)(SKUILibraryItem *, SKUILibraryItemState *, BOOL ))arg2;

@optional
- (void)removeMediaItemsForLibraryItems:(NSArray *)arg1;
- (BOOL)performActionForLibraryItem:(SKUILibraryItem *)arg1;
- (NSSet *)exposedPlatformItemKinds;
- (SKUILibraryItemState *)stateForLibraryItemAfterLibraryIntegration:(SKUILibraryItem *)arg1;
@end

