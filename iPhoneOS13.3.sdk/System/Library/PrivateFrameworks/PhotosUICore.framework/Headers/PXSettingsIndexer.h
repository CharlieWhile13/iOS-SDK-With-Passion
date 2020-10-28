//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSProgress, PXSettings, PXSettingsIndex;

@interface PXSettingsIndexer : NSObject
{
    PXSettings *_rootSettings;
    PXSettingsIndex *_index;
    NSMutableArray *_completionHandlers;
    long long _state;
    NSProgress *_indexingProgress;
}

@property(retain, nonatomic) NSProgress *indexingProgress; // @synthesize indexingProgress=_indexingProgress;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) PXSettingsIndex *index; // @synthesize index=_index;
@property(readonly, nonatomic) PXSettings *rootSettings; // @synthesize rootSettings=_rootSettings;
// - (void).cxx_destruct;
- (void)_callCompletionHandlersIfNecessary;
- (void)_handleResultIndex:(id)arg1;
- (void)_startIndexingIfNecessary;
- (id)startIndexingWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithRootSettings:(id)arg1;
- (id)init;

@end

