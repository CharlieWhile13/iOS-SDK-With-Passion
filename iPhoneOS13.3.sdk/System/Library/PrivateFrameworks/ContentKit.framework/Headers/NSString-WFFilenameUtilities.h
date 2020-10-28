//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <ContentKit/WFJSONObject-Protocol.h>
#import <ContentKit/WFJavaScriptCoreBridgeableObject-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFPropertyListObject-Protocol.h>

@interface NSString (WFFilenameUtilities) <WFPropertyListObject, WFNaming, WFJavaScriptCoreBridgeableObject, WFJSONObject>
+ (id)wf_datedFilenameWithTypeString:(id)arg1 fileExtension:(id)arg2;
+ (id)wf_stringWithData:(id)arg1;
- (id)wf_filenameTruncatedToMaximumLength;
- (id)wf_filenameTruncatedToMaximumLengthWithSuffix:(id)arg1;
- (id)gtm_stringByUnescapingFromHTML;
- (id)gtm_stringByEscapingForAsciiHTML;
- (id)gtm_stringByEscapingForHTML;
- (id)gtm_stringByEscapingHTMLUsingTable:(CDStruct_6a59ab51 )arg1 ofSize:(NSUInteger)arg2 escapingUnicode:(BOOL)arg3;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)wf_stringByTrimmingTrailingWhitespaceAndNewlineCharacters;
- (id)wf_stringByTrimmingLeadingWhitespaceAndNewlineCharacters;
- (id)wf_stringByTrimmingTrailingCharactersInSet:(id)arg1;
- (id)wf_stringByTrimmingLeadingCharactersInSet:(id)arg1;
@end

