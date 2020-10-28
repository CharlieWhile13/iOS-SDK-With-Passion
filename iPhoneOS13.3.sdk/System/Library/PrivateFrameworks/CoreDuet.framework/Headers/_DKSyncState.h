//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, _DKKnowledgeSyncStorageAssertion;

@interface _DKSyncState : NSObject
{
    BOOL _needsCloudSyncDown;
    BOOL _needsCloudSyncUp;
    NSError *_error;
    _DKKnowledgeSyncStorageAssertion *_assertion;
    NSMutableArray *_replies;
}

@property(retain) NSMutableArray *replies; // @synthesize replies=_replies;
@property(retain) _DKKnowledgeSyncStorageAssertion *assertion; // @synthesize assertion=_assertion;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL needsCloudSyncUp; // @synthesize needsCloudSyncUp=_needsCloudSyncUp;
@property BOOL needsCloudSyncDown; // @synthesize needsCloudSyncDown=_needsCloudSyncDown;
// - (void).cxx_destruct;
- (void)finish;
- (void)addReplyBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithSyncStorageAssertion:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;

@end

