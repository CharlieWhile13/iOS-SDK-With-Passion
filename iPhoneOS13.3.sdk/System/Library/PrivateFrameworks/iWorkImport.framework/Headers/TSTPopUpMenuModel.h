//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSUMultipleChoiceListChoiceProviding-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSTPopUpMenuModel : TSPObject <NSCopying, TSUMultipleChoiceListChoiceProviding>
{
    NSArray *_items;
    NSUInteger _count;
}

+ (BOOL)needsObjectUUID;
+ (id)popupMenuModelReorderingModel:(id)arg1 fromIndex:(NSUInteger)arg2 toIndex:(NSUInteger)arg3;
+ (id)popupMenuModelEditingItemInModel:(id)arg1 index:(NSUInteger)arg2 newContent:(id)arg3;
+ (id)popupMenuModelDeletingItemFromModel:(id)arg1 index:(NSUInteger)arg2;
+ (id)cellValueFromCell:(id)arg1 locale:(id)arg2;
+ (id)p_cellValueFromCellWithCustomFormat:(id)arg1 locale:(id)arg2;
+ (id)p_PopUpMenuModelDefaultWithContext:(id)arg1 locale:(id)arg2;
+ (void)p_appendChoices:(id)arg1 uniquelyToChoices:(id)arg2;
+ (id)popupMenuModelFromTable:(id)arg1 region:(id)arg2 initialValue:(BOOL )arg3 overflow:(BOOL )arg4;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct PopUpMenuModel )arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct PopUpMenuModel )arg1;
- (id)popUpItemFromDate:(id)arg1 format:(id)arg2;
- (id)popUpItemFromString:(id)arg1;
- (id)popUpItemFromBoolean:(BOOL)arg1;
- (id)popUpItemFromNumber:(double)arg1 format:(id)arg2;
- (id)displayStringAtIndex:(NSUInteger)arg1;
- (BOOL)booleanAtIndex:(NSUInteger)arg1;
- (id)formatAtIndex:(NSUInteger)arg1;
- (id)dateAtIndex:(NSUInteger)arg1;
- (id)stringAtIndex:(NSUInteger)arg1;
- (double)numberAtIndex:(NSUInteger)arg1;
- (int)valueTypeOfItemAtIndex:(NSUInteger)arg1;
- (BOOL)p_booleanForListItem:(id)arg1;
- (id)p_dateForListItem:(id)arg1;
- (id)p_stringForListItem:(id)arg1;
- (double)p_numberForListItem:(id)arg1;
- (int)p_mcListTypeOfListItem:(id)arg1;
- (int)p_mcListTypeForArgType:(int)arg1;
- (id)p_listItemAtIndex:(NSUInteger)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (BOOL)isEqualToChoices:(id)arg1;
- (id)choices;
- (void)didInitFromSOS;
- (id)initWithItems:(id)arg1 context:(id)arg2;

@end
