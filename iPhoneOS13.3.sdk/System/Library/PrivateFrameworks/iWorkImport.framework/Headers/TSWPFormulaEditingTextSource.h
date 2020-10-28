//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPTextSource-Protocol.h>

@protocol TSWPTextSource;

__attribute__((visibility("hidden")))
@interface TSWPFormulaEditingTextSource : NSObject <TSWPTextSource>
{
    id <TSWPTextSource> _source;
}

// - (void).cxx_destruct;
- (NSUInteger)storageLength;
- (void)updateStorageChangeCount;
- (NSUInteger)changeCount;
- (NSRange)charRangeRemappedFromStorage:(NSRange)arg1;
- (NSUInteger)charIndexRemappedFromStorage:(NSUInteger)arg1;
- (NSRange)charRangeMappedFromStorage:(NSRange)arg1;
- (NSRange)charRangeMappedToStorage:(NSRange)arg1;
- (NSUInteger)charIndexMappedFromStorage:(NSUInteger)arg1;
- (NSUInteger)charIndexMappedToStorage:(NSUInteger)arg1;
- (id)objectAtLocationPriorToMappedCharIndex:(NSUInteger)arg1 forAttributeKind:(NSUInteger)arg2 effectiveRange:(NSRange )arg3;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(NSRange)arg2 locale:(id)arg3 hyphenChar:(unsigned int )arg4;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (NSRange)wordAtCharIndex:(NSUInteger)arg1 includePreviousWord:(BOOL)arg2 includeHyphenation:(BOOL)arg3;
- (NSRange)wordAtCharIndex:(NSUInteger)arg1 includePreviousWord:(BOOL)arg2;
- (id)characterStyleAtCharIndex:(NSUInteger)arg1 effectiveRange:(NSRange )arg2;
- (BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(NSUInteger)arg1;
- (id)paragraphStyleAtCharIndex:(NSUInteger)arg1 effectiveRange:(NSRange )arg2;
- (id)attachmentOrFootnoteAtCharIndex:(NSUInteger)arg1;
- (id)attachmentAtCharIndex:(NSUInteger)arg1;
- (id)footnoteReferenceAtCharIndex:(NSUInteger)arg1;
- (id)smartFieldsWithAttributeKind:(NSUInteger)arg1 intersectingRange:(NSRange)arg2;
- (id)smartFieldAtCharIndex:(NSUInteger)arg1 attributeKind:(NSUInteger)arg2 effectiveRange:(NSRange )arg3;
- (void)attributesAtCharIndex:(NSUInteger)arg1 attributesOfInterest:(BOOL [22])arg2 attributesTable:(id [22])arg3 effectiveRange:(NSRange )arg4;
- (BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(NSUInteger)arg1;
- (BOOL)hasColumnBreakAtCharIndex:(NSUInteger)arg1;
- (void)getCharacters:(unsigned short )arg1 range:(NSRange)arg2;
- (id)string;
- (NSUInteger)length;
- (BOOL)adjustRangesByDelta:(long long)arg1 startingAt:(NSUInteger)arg2;
- (NSUInteger)mappedIndexFrom:(NSUInteger)arg1;
- (NSUInteger)unmappedIndexFrom:(NSUInteger)arg1;
- (NSRange)mappedRangeFrom:(NSRange)arg1;
- (NSRange)unmappedRangeFrom:(NSRange)arg1;
- (id)initWithSource:(id)arg1;

@end

