//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MNCommuteDestinationSuggestion, MNSuggestionsManager;

@protocol MNSuggestionsManagerObserver <NSObject>

@optional
- (void)suggestionsManager:(MNSuggestionsManager *)arg1 didAddSuggestion:(MNCommuteDestinationSuggestion *)arg2;
- (void)suggestionsManagerDidUpdateSuggestions:(MNSuggestionsManager *)arg1;
@end

