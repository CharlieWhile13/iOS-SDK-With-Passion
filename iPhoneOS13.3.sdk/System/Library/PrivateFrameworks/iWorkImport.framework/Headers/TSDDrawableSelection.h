//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

@class NSSet, NSString, TSDInfoCollectionSelectionHelper;

__attribute__((visibility("hidden")))
@interface TSDDrawableSelection : TSKSelection
{
    TSDInfoCollectionSelectionHelper *_selectionHelper;
}

+ (Class)archivedSelectionClass;
@property(retain, nonatomic) TSDInfoCollectionSelectionHelper *selectionHelper; // @synthesize selectionHelper=_selectionHelper;
// - (void).cxx_destruct;
- (id)UUIDDescription;
- (id)description;
@property(readonly, nonatomic) NSString *subclassDescription;
- (id)infosOfClass:(Class)arg1;
- (BOOL)containsUnlockedKindOfClass:(Class)arg1;
@property(readonly, nonatomic) NSUInteger unlockedInfoCount;
@property(readonly, nonatomic) NSSet *unlockedInfos;
- (BOOL)containsKindOfClass:(Class)arg1;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) NSUInteger infoCount;
@property(readonly, nonatomic) NSSet *nonInteractiveInfos;
@property(readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property(readonly, nonatomic) NSSet *infos;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithInteractiveInfos:(id)arg1 nonInteractiveInfos:(id)arg2;
- (id)initWithInfos:(id)arg1;
- (void)saveToArchive:(struct DrawableSelectionArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct DrawableSelectionArchive )arg1 unarchiver:(id)arg2;

@end

