//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface TSUNoCopyDictionary : NSMutableDictionary
{
    struct __CFDictionary mDictionary;
}

- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)keyEnumerator;
- (id)allKeys;
- (id)objectEnumerator;
- (id)allValues;
- (id)objectForKey:(id)arg1;
- (void)getObjects:(id )arg1 andKeys:(id )arg2 count:(NSUInteger)arg3;
- (void)getObjects:(id )arg1 andKeys:(id )arg2;
- (NSUInteger)count;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forUncopiedKey:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)initWithCFDictionary:(struct __CFDictionary )arg1;
- (id)init;

@end

