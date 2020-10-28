//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol SXJSONObjectMergerClassProviding;

@interface SXJSONObjectMerger : NSObject
{
    id <SXJSONObjectMergerClassProviding> _classProvider;
    NSArray *_exclusionKeys;
    NSMutableDictionary *_transformers;
}

@property(readonly, nonatomic) NSMutableDictionary *transformers; // @synthesize transformers=_transformers;
@property(readonly, nonatomic) NSArray *exclusionKeys; // @synthesize exclusionKeys=_exclusionKeys;
@property(readonly, nonatomic) id <SXJSONObjectMergerClassProviding> classProvider; // @synthesize classProvider=_classProvider;
// - (void).cxx_destruct;
- (id)replaceLastKeyOfKeyPath:(id)arg1 withKey:(id)arg2;
- (id)appendKey:(id)arg1 keyPath:(id)arg2;
- (void)transformObject:(id)arg1 otherObject:(id)arg2 transformer:(id)arg3 key:(id)arg4 keyPath:(id)arg5 dictionary:(id)arg6;
- (id)mergeDictionary:(id)arg1 withDictionary:(id)arg2 keyPath:(id)arg3;
- (void)removeTransformerForKeyPath:(id)arg1;
- (void)addTransformer:(id)arg1 keyPath:(id)arg2;
- (id)mergeObjects:(id)arg1;
- (id)initWithClassProvider:(id)arg1 exclusionKeys:(id)arg2;
- (id)initWithObjectClass:(Class)arg1 exclusionKeys:(id)arg2;

@end

