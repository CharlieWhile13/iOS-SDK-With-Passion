//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAnswerStructuredAnswer-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SAAnswerDictionaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>
{
}

+ (id)dictionaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dictionaryStructuredAnswer;
@property(copy, nonatomic) NSString *word;
@property(copy, nonatomic) NSArray *syllables;
@property(copy, nonatomic) NSURL *sound;
@property(copy, nonatomic) NSString *phoneticPronunciation;
@property(copy, nonatomic) NSArray *definitionGroups;
@property(copy, nonatomic) NSString *category; // @dynamic category;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
