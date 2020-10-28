//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICDelegationPlayInfoRequest, ICStoreRequestContext;

@interface ICDelegationPlayInfoRequestOperation : ICAsyncOperation
{
    ICDelegationPlayInfoRequestOperation *_strongSelf;
    ICDelegationPlayInfoRequest *_playInfoRequest;
    ICStoreRequestContext *_storeRequestContext;
    id /* CDUnknownBlockType */ _responseHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) ICStoreRequestContext *storeRequestContext; // @synthesize storeRequestContext=_storeRequestContext;
@property(copy, nonatomic) ICDelegationPlayInfoRequest *playInfoRequest; // @synthesize playInfoRequest=_playInfoRequest;
// - (void).cxx_destruct;
- (void)_finishWithResult:(BOOL)arg1 tokens:(id)arg2 error:(id)arg3;
- (void)finishWithError:(id)arg1;
- (void)execute;
- (void)finishWithResponse:(id)arg1 requestDate:(id)arg2 error:(id)arg3;

@end

