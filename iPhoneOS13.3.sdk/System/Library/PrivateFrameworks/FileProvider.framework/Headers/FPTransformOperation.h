//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface FPTransformOperation : FPActionOperation
{
    NSArray *_items;
    id /* CDUnknownBlockType */ _transformCompletionBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ transformCompletionBlock; // @synthesize transformCompletionBlock=_transformCompletionBlock;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
// - (void).cxx_destruct;
- (id)fp_prettyDescription;
- (NSUInteger)transformItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2;
- (id)finalItemsForStitcherForResult:(id)arg1;
- (void)presendNotifications;
- (void)actionMain;
- (id)initWithItemsOfDifferentProviders:(id)arg1 action:(id)arg2;

@end

