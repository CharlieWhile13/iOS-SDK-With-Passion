//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIUndoTextOperation.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationReplace : _UIUndoTextOperation
{
    NSRange _replacementRange;
    NSAttributedString *_attributedString;
}

// - (void).cxx_destruct;
- (void)undoRedo;
- (id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 replacementRange:(NSRange)arg3;

@end

