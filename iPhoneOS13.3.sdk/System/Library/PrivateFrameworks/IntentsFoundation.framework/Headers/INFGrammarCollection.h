//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface INFGrammarCollection : NSObject
{
    NSMutableDictionary *_tokensDictionary;
    NSMutableDictionary *_sentencesDictionary;
}

+ (id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3;
+ (id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2;
+ (id)grammarCollection;
@property(retain, nonatomic) NSMutableDictionary *sentencesDictionary; // @synthesize sentencesDictionary=_sentencesDictionary;
@property(retain, nonatomic) NSMutableDictionary *tokensDictionary; // @synthesize tokensDictionary=_tokensDictionary;
// - (void).cxx_destruct;
- (void)writeToFileAtPath:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSArray *tokens;
- (id)tokenWithIdentifier:(id)arg1;
- (void)addToken:(id)arg1;
- (id)createAdjectiveWithIdentifier:(id)arg1 language:(id)arg2;
- (id)createNounWithGender:(NSUInteger)arg1 identifier:(id)arg2 language:(id)arg3;
- (id)createNounWithIdentifier:(id)arg1 language:(id)arg2;
@property(readonly, nonatomic) NSArray *sentences;
- (void)addSentence:(id)arg1;
- (id)sentenceWithIdentifier:(id)arg1;
- (id)createSentenceWithIdentifier:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithGrammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3;
- (id)init;

@end

