//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDRelatedSearchSuggestion, NSString;

@interface GEORelatedSearchSuggestion : NSObject
{
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;
}

@property(retain, nonatomic) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion; // @synthesize relatedSearchSuggestion=_relatedSearchSuggestion;
// - (void).cxx_destruct;
- (id)_suggestionEntryMetadata;
@property(readonly, nonatomic) NSString *searchBarDisplayToken;
@property(readonly, nonatomic) NSString *displayString;
- (id)initWithPDRelatedSearchSuggestion:(id)arg1;

@end

