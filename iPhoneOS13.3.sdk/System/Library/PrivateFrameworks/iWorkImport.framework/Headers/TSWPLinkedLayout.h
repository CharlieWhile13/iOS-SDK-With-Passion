//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPLayout.h>

@class TSWPLayoutManager;

__attribute__((visibility("hidden")))
@interface TSWPLinkedLayout : TSWPLayout
{
}

- (id)nextTargetTopicNumbers;
- (id)previousTargetTopicNumbers;
- (id)nextTargetFirstColumn;
- (BOOL)discardLayoutsForDrawableAttachmentsInRange:(NSRange)arg1;
- (void)validate;
- (BOOL)repShouldPreventCaret;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (id)previousTargetLastColumn;
- (BOOL)isLinked;
- (BOOL)isOverflowing;
- (BOOL)isLastTarget;
- (BOOL)descendersCannotClip;
- (void)i_validateTextLayout;
- (void)wrappableChildInvalidated:(id)arg1;
@property(retain, nonatomic) TSWPLayoutManager *layoutManager; // @dynamic layoutManager;
- (void)killDrawableLayouts:(id)arg1;
@property(nonatomic) BOOL textLayoutValid; // @dynamic textLayoutValid;

@end
