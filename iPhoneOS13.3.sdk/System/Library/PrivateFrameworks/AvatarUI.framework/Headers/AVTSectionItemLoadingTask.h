//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTPreloadingTask-Protocol.h>

@protocol AVTAvatarAttributeEditorSectionItemPrefetching;

@interface AVTSectionItemLoadingTask : NSObject <AVTPreloadingTask>
{
    BOOL canceled;
    id /* CDUnknownBlockType */ _completionHandler;
    id <AVTAvatarAttributeEditorSectionItemPrefetching> _sectionItem;
}

@property(readonly, copy, nonatomic) id <AVTAvatarAttributeEditorSectionItemPrefetching> sectionItem; // @synthesize sectionItem=_sectionItem;
@property(getter=isCanceled) BOOL canceled; // @synthesize canceled;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
// - (void).cxx_destruct;
- (void)cancel;
- (id)initWithSectionItem:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;

@end
