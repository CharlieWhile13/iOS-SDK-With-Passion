//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSPLongLivedCKOpCache, NSString;

__attribute__((visibility("hidden")))
@interface MSPLongLivedCKOpScopedCache : NSObject
{
    NSString *_typeName;
    MSPLongLivedCKOpCache *_cache;
}

@property(retain, nonatomic) MSPLongLivedCKOpCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
// - (void).cxx_destruct;
- (BOOL)isCurrentOperationID:(id)arg1;
- (BOOL)isAwareOfOperationID:(id)arg1;
- (BOOL)hasOperationID:(id)arg1;
- (void)pruneOperationsToIDs:(id)arg1;
- (void)removeOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)initWithType:(id)arg1 cache:(id)arg2;
- (id)initWithType:(id)arg1;

@end

