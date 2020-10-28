//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDCancelling-Protocol.h>

@class CKDMMCSItemGroupSet, CKDOperation, NSMutableArray;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemGroupSetContext : NSObject <CKDCancelling>
{
    CKDMMCSItemGroupSet *_itemGroupSet;
    CKDOperation *_operation;
    NSMutableArray *_itemGroupContexts;
    id /* CDUnknownBlockType */ _itemGroupCompletionBlock;
    id /* CDUnknownBlockType */ _itemGroupSetCompletionBlock;
    NSObject<OS_dispatch_group> *_itemGroupSetCompletionGroup;
    long long _mmcsOperationType;
}

@property(nonatomic) long long mmcsOperationType; // @synthesize mmcsOperationType=_mmcsOperationType;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *itemGroupSetCompletionGroup; // @synthesize itemGroupSetCompletionGroup=_itemGroupSetCompletionGroup;
@property(copy, nonatomic) id /* CDUnknownBlockType */ itemGroupSetCompletionBlock; // @synthesize itemGroupSetCompletionBlock=_itemGroupSetCompletionBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ itemGroupCompletionBlock; // @synthesize itemGroupCompletionBlock=_itemGroupCompletionBlock;
@property(retain, nonatomic) NSMutableArray *itemGroupContexts; // @synthesize itemGroupContexts=_itemGroupContexts;
@property(nonatomic) __weak CKDOperation *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) CKDMMCSItemGroupSet *itemGroupSet; // @synthesize itemGroupSet=_itemGroupSet;
// - (void).cxx_destruct;
- (void)start;
- (void)addItemGroupContext:(id)arg1;
- (void)cancel;
- (id)initWithItemGroupSet:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;

@end
