//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface WFListEditorUpdateItem : NSObject
{
    NSNumber *_indexBeforeUpdate;
    NSNumber *_indexAfterUpdate;
    NSUInteger _updateAction;
}

+ (id)itemMovedFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
+ (id)itemUpdatedAtIndex:(NSUInteger)arg1;
+ (id)itemDeletedAtIndex:(NSUInteger)arg1;
+ (id)itemInsertedAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger updateAction; // @synthesize updateAction=_updateAction;
@property(readonly, nonatomic) NSNumber *indexAfterUpdate; // @synthesize indexAfterUpdate=_indexAfterUpdate;
@property(readonly, nonatomic) NSNumber *indexBeforeUpdate; // @synthesize indexBeforeUpdate=_indexBeforeUpdate;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithAction:(NSUInteger)arg1 indexBeforeUpdate:(id)arg2 indexAfterUpdate:(id)arg3;

@end

