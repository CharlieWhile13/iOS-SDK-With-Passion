//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class TIAutocorrectionList, TICandidateRequestToken, TIKeyboardState;

@interface TITypologyRecordAutocorrections : TITypologyRecord
{
    BOOL _listUIDisplayed;
    TIKeyboardState *_keyboardState;
    TICandidateRequestToken *_requestToken;
    TIAutocorrectionList *_autocorrections;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL listUIDisplayed; // @synthesize listUIDisplayed=_listUIDisplayed;
@property(retain, nonatomic) TIAutocorrectionList *autocorrections; // @synthesize autocorrections=_autocorrections;
@property(retain, nonatomic) TICandidateRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
// - (void).cxx_destruct;
- (void)replaceDocumentState:(id)arg1;
- (id)shortDescription;
- (void)removeContextFromKeyboardState;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end

