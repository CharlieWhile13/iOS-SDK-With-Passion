//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYSessionDelegate-Protocol.h>

@class NSDictionary, SYSession, SYStore;

__attribute__((visibility("hidden")))
@interface SYStoreSessionOwner : NSObject <SYSessionDelegate>
{
    NSDictionary *_context;
    NSDictionary *_idsOptions;
    SYStore *_store;
    id /* CDUnknownBlockType */ _errorCallback;
    id /* CDUnknownBlockType */ _onComplete;
    SYSession *_session;
}

@property(retain, nonatomic) SYSession *session; // @synthesize session=_session;
@property(copy, nonatomic) id /* CDUnknownBlockType */ onComplete; // @synthesize onComplete=_onComplete;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorCallback; // @synthesize errorCallback=_errorCallback;
@property(nonatomic) __weak SYStore *store; // @synthesize store=_store;
@property(copy, nonatomic) NSDictionary *idsOptions; // @synthesize idsOptions=_idsOptions;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (void)syncSession:(id)arg1 applyChanges:(NSArray )arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)syncSession:(id)arg1 rollbackChangesWithError:(id )arg2;
- (BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id )arg2;
- (long long)syncSession:(id)arg1 enqueueChanges:(id /* CDUnknownBlockType */)arg2 error:(id )arg3;
@property(readonly, nonatomic) BOOL isResetSync;

@end

