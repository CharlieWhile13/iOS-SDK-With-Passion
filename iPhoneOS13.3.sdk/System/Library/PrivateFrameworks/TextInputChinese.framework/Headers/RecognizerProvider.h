//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHRecognizer, NSLocale;

@interface RecognizerProvider : NSObject
{
    CHRecognizer *_recognizer;
    NSLocale *_recognitionLanguage;
    id /* CDUnknownBlockType */ _recognizerDidLoadBlock;
}

@property(copy) id /* CDUnknownBlockType */ recognizerDidLoadBlock; // @synthesize recognizerDidLoadBlock=_recognizerDidLoadBlock;
@property(readonly) NSLocale *recognitionLanguage; // @synthesize recognitionLanguage=_recognitionLanguage;
// - (void).cxx_destruct;
- (void)unloadRecognizer;
- (void)provideRecognizerToBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly) CHRecognizer *recognizer; // @synthesize recognizer=_recognizer;
- (void)dealloc;
- (id)initWithRecognitionLanguage:(id)arg1;

@end

