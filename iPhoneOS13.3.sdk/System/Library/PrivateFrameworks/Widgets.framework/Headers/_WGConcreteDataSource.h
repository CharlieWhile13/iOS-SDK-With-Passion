//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface _WGConcreteDataSource : NSObject
{
    NSMutableArray *_observers;
    NSMutableDictionary *_identifiersToData;
}

// - (void).cxx_destruct;
- (id)datumWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *data;
@property(readonly, nonatomic) NSArray *dataIdentifiers;
- (void)dataSource:(id)arg1 removeDatumWithIdentifier:(id)arg2 observerUpdateBlock:(id /* CDUnknownBlockType */)arg3;
- (void)dataSource:(id)arg1 replaceWithDatum:(id)arg2 observerUpdateBlock:(id /* CDUnknownBlockType */)arg3;
- (void)removeObserver:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addObserver:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end
