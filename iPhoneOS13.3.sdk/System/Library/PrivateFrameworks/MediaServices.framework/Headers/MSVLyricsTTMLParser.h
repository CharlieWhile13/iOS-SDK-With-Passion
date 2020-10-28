//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MSVLyricsSongInfo, MSVLyricsTextElement, NSData, NSError, NSInputStream, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MSVLyricsTTMLParser : NSObject <NSXMLParserDelegate>
{
    BOOL _linesAreSortedByStartTime;
    NSData *_ttmlData;
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_queue> *_parseQueue;
    MSVLyricsSongInfo *_lyricsInfo;
    NSError *_parserError;
    NSMutableArray *_elementStack;
    NSMutableArray *_lyricLines;
    MSVLyricsTextElement *_currentTextElement;
    NSMutableDictionary *_translationsMap;
    double _currentStartTime;
}

@property(nonatomic) BOOL linesAreSortedByStartTime; // @synthesize linesAreSortedByStartTime=_linesAreSortedByStartTime;
@property(nonatomic) double currentStartTime; // @synthesize currentStartTime=_currentStartTime;
@property(retain, nonatomic) NSMutableDictionary *translationsMap; // @synthesize translationsMap=_translationsMap;
@property(retain, nonatomic) MSVLyricsTextElement *currentTextElement; // @synthesize currentTextElement=_currentTextElement;
@property(retain, nonatomic) NSMutableArray *lyricLines; // @synthesize lyricLines=_lyricLines;
@property(retain, nonatomic) NSMutableArray *elementStack; // @synthesize elementStack=_elementStack;
@property(retain, nonatomic) NSError *parserError; // @synthesize parserError=_parserError;
@property(retain, nonatomic) MSVLyricsSongInfo *lyricsInfo; // @synthesize lyricsInfo=_lyricsInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *parseQueue; // @synthesize parseQueue=_parseQueue;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSData *ttmlData; // @synthesize ttmlData=_ttmlData;
// - (void).cxx_destruct;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parseWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)parseWithError:(id )arg1;
- (id)initWithTTMLStream:(id)arg1;
- (id)initWithTTMLData:(id)arg1;

@end

