//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsSharedEvent.h>

@class NSMapTable;

@interface MTLDebugSharedEvent : MTLToolsSharedEvent
{
    struct mutex _resourceMapLock;
    struct unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long>>> _valueToCountMap;
    NSMapTable *_valueToResourcesMap;
    BOOL _isStandardEvent;
}

+ (id)sharedListener;
@property(nonatomic) BOOL isStandardEvent; // @synthesize isStandardEvent=_isStandardEvent;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)releaseWritableResourcesForValue:(NSUInteger)arg1;
- (void)retainWritableResourcesForValue:(NSUInteger)arg1;
- (void)_retainWritableResourcesForValue:(NSUInteger)arg1;
- (id)removeWritableResourcesForValue:(NSUInteger)arg1;
- (void)setWritableResources:(id)arg1 forValue:(NSUInteger)arg2;
- (void)setSignaledValue:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

@end

