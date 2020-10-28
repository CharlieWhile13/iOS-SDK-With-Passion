//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, TIInputMode;

@interface CIMCandidateData : NSObject
{
    int _sortingMethod;
    TIInputMode *_inputMode;
    NSArray *_storedCandidates;
    NSMutableDictionary *_candidateInfoCache;
}

+ (BOOL)shouldShowZhuyinSortingMethod;
+ (id)sortTitleFromSortingMethod:(int)arg1;
@property(retain, nonatomic) NSMutableDictionary *candidateInfoCache; // @synthesize candidateInfoCache=_candidateInfoCache;
@property(retain, nonatomic) NSArray *storedCandidates; // @synthesize storedCandidates=_storedCandidates;
@property(nonatomic) int sortingMethod; // @synthesize sortingMethod=_sortingMethod;
@property(readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
// - (void).cxx_destruct;
- (id)candidatesSortedByMethod:(int)arg1;
- (void)setCandidates:(id)arg1;
- (id)candidatesSortedByPinyinOrZhuyin:(id)arg1 simplified:(BOOL)arg2 zhuyin:(BOOL)arg3;
- (id)candidatesSortedByStrokes:(id)arg1 simplified:(BOOL)arg2;
- (id)candidatesSortedByRadical:(id)arg1 simplified:(BOOL)arg2 collationLocale:(id)arg3;
- (id)candidatesSortedByEmoji:(id)arg1;
- (id)candidatesSortedByFrequency:(id)arg1;
- (id)candidateGroupsFromDictionary:(id)arg1 sortedKeys:(id)arg2;
- (void)sortCharactersByStrokeCount:(id)arg1 wordPropertiesDictionary:(id)arg2;
- (id)wordPropertyDictionaryForCandidates:(id)arg1 isSimplified:(BOOL)arg2;
- (void)addCharacter:(id)arg1 groupLabel:(id)arg2 dictionary:(id)arg3 isSecondary:(BOOL)arg4;
- (void)clearCache;
- (id)initWithInputMode:(id)arg1;
- (id)init;

@end

