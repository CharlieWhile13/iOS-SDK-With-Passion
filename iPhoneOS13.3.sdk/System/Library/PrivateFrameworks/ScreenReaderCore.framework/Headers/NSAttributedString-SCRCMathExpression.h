//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (SCRCMathExpression)
+ (id)scrcSpaceString;
+ (id)scrcPauseString;
+ (id)scrcString;
+ (id)scrcStringWithDollarCode:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithLiteralString:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithLiteralString:(id)arg1;
+ (id)scrcStringWithString:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithString:(id)arg1;
+ (id)scrcStringWithFormat:(id)arg1;
// + (id)_scrcStringWithFormat:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (BOOL)scrcContainsPause;
- (BOOL)_scrcHasPauseCommaAtIndex:(NSUInteger)arg1;
- (id)scrcStringByAddingAttribute:(id)arg1 value:(id)arg2;
- (id)scrcStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)scrcStringByAppendingAttributedString:(id)arg1;
- (NSRange)_scrcRangeOfFormatSpecifierWithIndex:(NSUInteger)arg1;
- (NSRange)_scrcRangeOfVanillaFormatSpecifier;
- (id)scrcSplitBasedOnAttribute:(id)arg1 limit:(long long)arg2;
@end
