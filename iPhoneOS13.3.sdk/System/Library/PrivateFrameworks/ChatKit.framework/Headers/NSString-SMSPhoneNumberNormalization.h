//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SMSPhoneNumberNormalization)
- (id)unformattedPhoneNumber;
- (BOOL)ck_isSiriRecognizableWithLanguageCode:(id)arg1;
- (NSRange)__ck_rangeOfSequenceOfCharactersFromSet:(id)arg1 options:(NSUInteger)arg2 range:(NSRange)arg3;
- (BOOL)__ck_containsOnlyCharactersFromSet:(id)arg1;
- (BOOL)__ck_shouldUseBigEmoji;
- (id)__ck_stringByExpandingTildeInPath;
- (BOOL)isAddressBookLabel;
@end

