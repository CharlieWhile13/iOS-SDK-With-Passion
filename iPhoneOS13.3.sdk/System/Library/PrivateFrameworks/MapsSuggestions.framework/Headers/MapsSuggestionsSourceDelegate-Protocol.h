//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol MapsSuggestionsSource;

@protocol MapsSuggestionsSourceDelegate <NSObject>
- (BOOL)detachSource:(id <MapsSuggestionsSource>)arg1;
- (BOOL)attachSource:(id <MapsSuggestionsSource>)arg1;
- (NSUInteger)addOrUpdateSuggestionEntries:(NSArray )arg1 source:(NSString )arg2;
@end

