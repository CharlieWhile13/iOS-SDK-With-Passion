//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManagerUICore/DOCThumbnail-Protocol.h>
#import <DocumentManagerUICore/DOCThumbnailListener-Protocol.h>

@class DOCThumbnailDescriptor, DOCThumbnailGenerator, DOCThumbnailRequest, FPItem, NSHashTable, NSMutableArray, UIImage;
@protocol DOCThumbnail;

@interface DOCItemThumbnail : NSObject <DOCThumbnailListener, DOCThumbnail>
{
    NSMutableArray *_generationCompletionHandlers;
    BOOL _representativeIcon;
    BOOL _needsUpdate;
    FPItem *_item;
    id <DOCThumbnail> _fallback;
    DOCThumbnailGenerator *_generator;
    DOCThumbnailDescriptor *_descriptor;
    NSHashTable *_listeners;
    DOCThumbnailRequest *_currentRequest;
    UIImage *_thumbnailImage;
}

@property(readonly, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, nonatomic) DOCThumbnailRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(readonly, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property(readonly, nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) DOCThumbnailDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) __weak DOCThumbnailGenerator *generator; // @synthesize generator=_generator;
@property(nonatomic) BOOL representativeIcon; // @synthesize representativeIcon=_representativeIcon;
@property(retain, nonatomic) id <DOCThumbnail> fallback; // @synthesize fallback=_fallback;
@property(readonly, nonatomic) FPItem *item; // @synthesize item=_item;
// - (void).cxx_destruct;
- (void)updateItemTo:(id)arg1;
- (void)_notifyListeners;
- (void)scheduleUpdateIfNeeded;
- (BOOL)registerGenerationCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_callGenerationCompletionHandlers;
- (void)_cancelCurrentRequest;
- (void)_fetchThumbnailWithOptions:(NSUInteger)arg1;
- (void)fetchWithOptions:(NSUInteger)arg1;
- (void)thumbnailOperationFailedToLoadThumbnail;
- (void)thumbnailOperationDidLoadThumbnail:(id)arg1 representativeIcon:(BOOL)arg2;
- (void)thumbnailLoaded:(id)arg1;
@property(readonly, nonatomic) UIImage *thumbnail;
@property(readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) BOOL isRepresentativeIcon;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
- (void)setNeedsUpdate;
@property(readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property(readonly, nonatomic) NSUInteger style;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) double minimumSize;
@property(readonly, nonatomic) CGSize size;
- (id)initWithGenerator:(id)arg1 item:(id)arg2 descriptor:(id)arg3 fallback:(id)arg4;

@end

