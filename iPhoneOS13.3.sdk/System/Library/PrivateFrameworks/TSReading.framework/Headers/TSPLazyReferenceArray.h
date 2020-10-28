//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@class NSArray;

@interface TSPLazyReferenceArray : NSMutableArray
{
    NSMutableArray *_references;
    NSUInteger _mutations;
}

@property(readonly, nonatomic) NSArray *references; // @synthesize references=_references;
// - (void).cxx_destruct;
- (void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 range:(NSRange)arg3;
- (void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)removeObjectsInRange:(NSRange)arg1;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)addReference:(id)arg1;
- (void)addObject:(id)arg1;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)subarrayWithRange:(NSRange)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)referenceAtIndex:(NSUInteger)arg1;
- (id)objectAtIndex:(NSUInteger)arg1;
- (NSUInteger)count;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)init;

@end

