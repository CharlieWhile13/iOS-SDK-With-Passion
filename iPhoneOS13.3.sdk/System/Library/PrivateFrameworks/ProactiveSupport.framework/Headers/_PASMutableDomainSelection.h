//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveSupport/_PASDomainSelection.h>

@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection
{
    NSMutableDictionary *_domains;
    NSUInteger _count;
    BOOL _taintedByDeepDomain;
}

// - (void).cxx_destruct;
- (NSUInteger)count;
- (void)_decrementCountAndMaybePruneItems:(id)arg1;
- (BOOL)isEqualToDomainSelection:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)addDomainsFromSelection:(id)arg1;
- (BOOL)_addDomainsFromOtherDictionary:(id)arg1 toOwnDictionary:(id)arg2 ownDictionaryIsPlaceholder:(BOOL)arg3;
- (BOOL)_addDomainsFrom:(id)arg1;
- (BOOL)addDomainsFromSet:(id)arg1;
- (BOOL)addDomainsFromArray:(id)arg1;
- (BOOL)addDomain:(id)arg1;
- (BOOL)isEmpty;
- (id)allDomains;
- (BOOL)containsDomain:(id)arg1;
- (void)dealloc;
- (id)_initWithNonOverlappingDomainSet:(id)arg1;
- (id)init;

@end

