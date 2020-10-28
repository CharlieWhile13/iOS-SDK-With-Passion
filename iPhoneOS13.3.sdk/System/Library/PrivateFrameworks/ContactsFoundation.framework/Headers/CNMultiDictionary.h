//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSMutableDictionary;

@interface CNMultiDictionary : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_entries;
}

+ (id)multiDictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)multiDictionary;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)eachObject:(id /* CDUnknownBlockType */)arg1;
- (BOOL)containsKey:(id)arg1;
- (id)objectsForKeys:(id)arg1;
- (id)objectsForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *allKeys;
@property(readonly, nonatomic) NSUInteger count;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithEntries:(id)arg1;
- (id)init;

@end

