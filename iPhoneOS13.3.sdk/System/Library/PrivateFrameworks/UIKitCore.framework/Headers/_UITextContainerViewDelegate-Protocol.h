//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CUICatalog, NSDictionary, NSString, _UITextContainerView;

@protocol _UITextContainerViewDelegate
- (CUICatalog *)textContainerView:(_UITextContainerView *)arg1 cuiCatalogForTextEffectName:(NSString *)arg2;
- (void)updateSelectionForTextContainerView:(_UITextContainerView *)arg1;
- (NSRange)selectedRangeForTextContainerView:(_UITextContainerView *)arg1;
- (BOOL)isEditableForTextContainerView:(_UITextContainerView *)arg1;
- (NSDictionary *)textContainerView:(_UITextContainerView *)arg1 linkTextAttributesForLink:(id)arg2 forCharacterAtIndex:(NSUInteger)arg3;
- (NSDictionary *)linkTextAttributesForTextContainerView:(_UITextContainerView *)arg1;
@end

