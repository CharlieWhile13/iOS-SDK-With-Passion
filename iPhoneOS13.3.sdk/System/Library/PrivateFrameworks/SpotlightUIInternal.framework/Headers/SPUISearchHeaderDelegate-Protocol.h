//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SPSearchQueryContext, SPUISearchHeader;

@protocol SPUISearchHeaderDelegate <NSObject>
- (void)returnKeyPressed;
- (void)cancelButtonPressed;
- (void)dictationButtonPressed;
- (void)didBeginEditing;
- (void)queryContextDidChange:(SPSearchQueryContext *)arg1 fromSearchHeader:(SPUISearchHeader *)arg2 allowZKW:(BOOL)arg3;
@end

