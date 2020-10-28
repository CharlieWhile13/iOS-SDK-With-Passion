//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ML3QueryResultSet_BackingStore : NSObject
{
    vector_bbba3654 _persistentIDs;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _sections;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)backingStoreByRemovingPersistentIDs:(const unordered_set_da619913 )arg1;
- (void)reverseEnumerateSectionsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateSectionsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)containsPersistentIDs:(const unordered_set_da619913 )arg1;
- (void)reverseEnumeratePersistentIDsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumeratePersistentIDsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (long long)persistentIDAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger count;

@end

