//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTextEditingPane.h>

@class NSString;

@interface TPSPhoneNumberEditingPane : PSTextEditingPane
{
    NSString *_previousStringSuggestion;
}

@property(copy, nonatomic) NSString *previousStringSuggestion; // @synthesize previousStringSuggestion=_previousStringSuggestion;
// - (void).cxx_destruct;
- (CDStruct_856ef1b3)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (void)setPreferenceSpecifier:(id)arg1;

@end

