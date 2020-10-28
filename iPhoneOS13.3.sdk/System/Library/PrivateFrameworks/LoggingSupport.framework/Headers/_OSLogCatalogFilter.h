//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _OSLogCatalogFilter : NSObject <NSPredicateVisitor>
{
    NSMutableSet *_pidAccept;
    NSMutableSet *_processLookupSubstr;
    NSMutableSet *_senderLookupSubstr;
    NSMutableSet *_subsysSubstrAccept;
    NSMutableSet *_uuidAccept;
    char _uuidtext_path;
    BOOL _hasItems;
    BOOL _hasSharedCacheItems;
}

// - (void).cxx_destruct;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)processComparisonPredicate:(id)arg1;
- (void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2;
- (void)handleDSCContents:(struct uuiddb_dsc_map_s )arg1;
- (struct uuiddb_dsc_map_s )getDSCMap;
- (void)readDSCUUIDs;
- (void)handleDSOFile:(struct _ftsent )arg1;
- (void)readDSOUUIDs;
- (void)generateUUIDSet;
- (BOOL)containsSenderLookupSubstr:(id)arg1;
- (BOOL)containsProcessLookupSubstr:(id)arg1;
- (void)addSenderLookupSubstr:(id)arg1;
- (void)addProcessLookupSubstr:(id)arg1;
- (BOOL)containsUUID:(id)arg1;
- (void)addUUID:(id)arg1;
- (BOOL)containsSubsystemSubstr:(id)arg1;
- (void)addSubsystem:(id)arg1;
- (BOOL)containsProcessID:(id)arg1;
- (void)addProcessID:(id)arg1;
- (BOOL)isKeptCatalog:(struct catalog_s )arg1;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 collection:(id)arg2;

@end

