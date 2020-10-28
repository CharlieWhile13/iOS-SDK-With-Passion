//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class TSKSelectionPath;

__attribute__((visibility("hidden")))
@interface TNSheetUIState : NSObject <NSCopying>
{
    BOOL _hasVisibleRect;
    BOOL _hasPreviousVisibleRect;
    float _viewScale;
    float _previousViewScale;
    long long _archivedDeviceIdiom;
    TSKSelectionPath *_selectionPath;
    CGRect _visibleRect;
    CGRect _previousVisibleRect;
}

+ (long long)currentDeviceIdiom;
+ (id)sheetUIStateWithPreviousVisibleRect:(CGRect)arg1;
+ (id)sheetUIStateWithVisibleRect:(CGRect)arg1;
+ (id)sheetUIState;
@property(retain, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=_selectionPath;
@property(nonatomic) long long archivedDeviceIdiom; // @synthesize archivedDeviceIdiom=_archivedDeviceIdiom;
@property(nonatomic) float previousViewScale; // @synthesize previousViewScale=_previousViewScale;
@property(nonatomic) float viewScale; // @synthesize viewScale=_viewScale;
@property(nonatomic) BOOL hasPreviousVisibleRect; // @synthesize hasPreviousVisibleRect=_hasPreviousVisibleRect;
@property(nonatomic) BOOL hasVisibleRect; // @synthesize hasVisibleRect=_hasVisibleRect;
@property(nonatomic) CGRect previousVisibleRect; // @synthesize previousVisibleRect=_previousVisibleRect;
@property(nonatomic) CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
// - (void).cxx_destruct;
- (id)p_persistableSelectionPathFromSelectionPath:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)saveToArchive:(struct SheetUIStateArchive )arg1 archiver:(id)arg2 context:(id)arg3;
- (id)initWithArchive:(const struct SheetUIStateArchive )arg1 unarchiver:(id)arg2;
- (void)updateForDeviceIdiom:(long long)arg1;
@property(readonly, nonatomic) CGPoint previousScrollPosition;
@property(readonly, nonatomic) CGPoint scrollPosition;
- (void)clearPreviousVisibleRect;
- (void)clearVisibleRect;
- (id)init;

@end

