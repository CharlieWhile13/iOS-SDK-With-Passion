//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SGList;

@protocol SGListDelegate <NSObject>
- (void)list:(SGList *)arg1 didRemoveItem:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)list:(SGList *)arg1 didAddItem:(id)arg2 atIndex:(NSUInteger)arg3;
@end

