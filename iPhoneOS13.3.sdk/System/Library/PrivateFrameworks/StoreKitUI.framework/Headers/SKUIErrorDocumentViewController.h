//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>

@class SKUIClientContext;

@interface SKUIErrorDocumentViewController : SKUIViewController <SKUIDocumentViewController>
{
    SKUIClientContext *_clientContext;
    NSUInteger _contentUnavailableStyle;
    id /* CDUnknownBlockType */ _retryActionBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ retryActionBlock; // @synthesize retryActionBlock=_retryActionBlock;
// - (void).cxx_destruct;
- (void)loadView;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithBackgroundColor:(id)arg1 clientContext:(id)arg2;

@end

