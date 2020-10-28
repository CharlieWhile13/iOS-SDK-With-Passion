//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (CalClassAdditions)
+ (id)stringWithFileSystemRepresentation:(const char )arg1;
+ (id)stringWithContentsOfFile:(id)arg1 usingEncoding:(NSUInteger)arg2;
+ (id)ellipsisString;
- (id)stringByRemovingPrefixCaseInsensitive:(id)arg1;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)stringByTrimmingWhitespaceAndRemovingNewlines;
- (id)CalSafeHFSPathComponentName;
- (id)appendSlashIfNeeded;
- (id)removeSlashIfNeeded;
- (id)safeFilename;
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;
- (id)unquote;
- (id)quote;
- (id)trimWhiteSpace;
- (id)trimCommas;
- (id)trimFirstComma;
- (id)trimFinalComma;
- (id)trimChar:(unsigned short)arg1;
- (id)trimFirstChar:(unsigned short)arg1;
- (id)trimFinalChar:(unsigned short)arg1;
- (BOOL)isPathToICalTruthFile;
- (BOOL)isPathToICalBookmark;
- (BOOL)isPathToBackupFile;
- (BOOL)isPathToICalData;
- (BOOL)isPathToVCalData;
- (BOOL)isPathToAppleScript;
- (void)cal_enumerateCharactersUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)stringByDecodingSlashes;
- (id)stringByEncodingSlashes;
- (id)directionalityIsolatedString;
- (BOOL)isEqualAsURL:(id)arg1;
- (id)CalAddressComment;
- (id)CalUncommentedAddress;
- (id)_phoneNumberDetector;
- (id)phoneURL;
- (BOOL)isPhoneNumber;
- (id)radarLink;
- (BOOL)isMessagesURL;
- (BOOL)isAddressBookURL;
- (BOOL)isMailURL;
- (id)stringRemovingTel;
- (id)stringAddingTel;
- (BOOL)hasTel;
- (id)stringRemovingMailto;
- (id)stringAddingMailto;
- (id)hostFromEmail;
- (id)userFromEmail;
- (BOOL)resemblesEmailAddress;
- (BOOL)hasMailto;
- (BOOL)isEqualToStringCaseInsensitive:(id)arg1;
- (BOOL)containsCaseAndDiacriticInsensitive:(id)arg1;
- (BOOL)containsCaseInsensitive:(id)arg1;
- (BOOL)hasSuffixCaseInsensitive:(id)arg1;
- (BOOL)hasPrefixCaseAndDiacriticInsensitive:(id)arg1;
- (BOOL)hasPrefixCaseInsensitive:(id)arg1;
- (id)stringByRemovingLastPathComponent;
- (id)stringByURLUnescapingAllReservedCharacters;
- (id)stringByURLEscapingAllReservedCharacters;
- (id)stringByURLQuotingPaths;
- (id)stringByURLQuoting;
- (id)stringByURLUnquoting;
- (id)stringByExpandingTildeToNonSandboxHome;
@end

