//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SUObjectPool : NSObject
{
    NSMutableDictionary *_poolObjects;
    NSMutableArray *_vendedObjects;
}

@property(readonly, nonatomic) NSArray *vendedObjects; // @synthesize vendedObjects=_vendedObjects;
- (id)copyPoppedObjectForClass:(Class)arg1;
- (id)addObjectsOfClass:(Class)arg1 count:(long long)arg2 forClass:(Class)arg3;
- (void)addObjects:(id)arg1 forClass:(Class)arg2;
- (void)dealloc;

@end

