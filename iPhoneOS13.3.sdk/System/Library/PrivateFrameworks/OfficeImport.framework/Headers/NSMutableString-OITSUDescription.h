//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableString.h>

@interface NSMutableString (OITSUDescription)
- (void)tsu_indentBy:(NSUInteger)arg1;
- (void)tsu_appendSeparator:(id)arg1 format:(id)arg2;
- (void)tsu_insertCharacter:(unsigned short)arg1 atIndex:(NSUInteger)arg2;
- (void)tsu_appendCharacter:(unsigned short)arg1;
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 escStr:(id)arg3 range:(NSRange)arg4;
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 range:(NSRange)arg3;
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 escStr:(id)arg3;
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2;
- (BOOL)tc_replaceSubstr:(id)arg1 with:(id)arg2 range:(NSRange)arg3;
- (BOOL)tc_replaceSubstr:(id)arg1 with:(id)arg2;
@end

