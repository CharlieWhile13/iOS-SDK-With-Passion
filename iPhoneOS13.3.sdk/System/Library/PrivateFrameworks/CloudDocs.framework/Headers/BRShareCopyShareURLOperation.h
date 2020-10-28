//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class CKShare, NSError, NSString;

@interface BRShareCopyShareURLOperation : BROperation
{
    CKShare *_share;
    NSString *_appName;
    NSError *_error;
    id /* CDUnknownBlockType */ _shareCopyURLCompletionBlock;
    id /* CDUnknownBlockType */ _copyShareURLCompletionBlock;
}

@property(copy) id /* CDUnknownBlockType */ copyShareURLCompletionBlock; // @synthesize copyShareURLCompletionBlock=_copyShareURLCompletionBlock;
@property(copy) id /* CDUnknownBlockType */ shareCopyURLCompletionBlock; // @synthesize shareCopyURLCompletionBlock=_shareCopyURLCompletionBlock;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
// - (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithFileURL:(id)arg1 documentType:(id)arg2;
- (id)initWithShare:(id)arg1 documentType:(id)arg2;
- (id)_initWithShare:(id)arg1 documentType:(id)arg2;

@end

