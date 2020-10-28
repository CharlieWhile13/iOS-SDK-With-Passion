//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPObject, TSWPColumnStyle, TSWPListStyle, TSWPParagraphStyle, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPStoragePasteRules : NSObject
{
    unsigned int _actionFlags[6];
    struct {
        TSWPParagraphStyle *parStyle;
        TSPObject *section;
        TSWPColumnStyle *columnStyle;
        TSWPListStyle *listStyle;
        struct TSWPParagraphData parData;
        struct TSWPParagraphData parStartData;
        struct TSWPParagraphData parBidiData;
    } _paragraphs[4];
    BOOL _mapDestTrailCS;
    unsigned int _flags;
    unsigned int _lastFlag;
    TSWPStorage *_destStorage;
    NSUInteger _sourceColumnStyleCount;
    NSUInteger _sourceSectionCount;
    NSRange _srcLeadRange;
    NSRange _srcTrailRange;
}

@property(nonatomic) NSUInteger sourceSectionCount; // @synthesize sourceSectionCount=_sourceSectionCount;
@property(nonatomic) NSUInteger sourceColumnStyleCount; // @synthesize sourceColumnStyleCount=_sourceColumnStyleCount;
@property(retain, nonatomic) TSWPStorage *destStorage; // @synthesize destStorage=_destStorage;
@property(nonatomic) BOOL mapDestTrailCS; // @synthesize mapDestTrailCS=_mapDestTrailCS;
@property(nonatomic) NSRange srcTrailRange; // @synthesize srcTrailRange=_srcTrailRange;
@property(nonatomic) NSRange srcLeadRange; // @synthesize srcLeadRange=_srcLeadRange;
@property(nonatomic) unsigned int lastFlag; // @synthesize lastFlag=_lastFlag;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)didPasteWithIOTransaction:(struct TSWPStorageTransaction )arg1 atDestRange:(NSRange)arg2;
- (void)willPasteStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(NSRange)arg3 srcStylesAmbiguous:(BOOL)arg4;
- (void)setupFlagsForPastingSrcStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(NSRange)arg3 srcStylesAmbiguous:(BOOL)arg4;
- (void)mapCharacterStyles:(int)arg1 toRange:(NSRange)arg2 useParagraphProperties:(BOOL)arg3 ioTransaction:(struct TSWPStorageTransaction )arg4;
- (void)mapCharacterStyleProperties:(id)arg1 toRange:(NSRange)arg2 ioTransaction:(struct TSWPStorageTransaction )arg3;
- (void)applyParagraph:(int)arg1 toCharIndex:(NSUInteger)arg2 ioTransaction:(struct TSWPStorageTransaction )arg3;
- (void)addActionFlag:(int)arg1;
- (void)dealloc;

@end

