//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSString, WBSOpenSearchURLTemplate, WBSURLSuffixChecker;

@interface WBSSearchProvider : NSObject <NSSecureCoding>
{
    WBSURLSuffixChecker *_suffixChecker;
    NSString *_queryKey;
    BOOL _usesSearchTermsFromFragment;
    NSString *_shortName;
    WBSOpenSearchURLTemplate *_searchURLTemplate;
    WBSOpenSearchURLTemplate *_safeSearchURLTemplate;
    NSDictionary *_safeSearchURLQueryParameters;
    WBSOpenSearchURLTemplate *_suggestionsURLTemplate;
    NSArray *_hostSuffixes;
    NSArray *_pathPrefixes;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL usesSearchTermsFromFragment; // @synthesize usesSearchTermsFromFragment=_usesSearchTermsFromFragment;
@property(readonly, copy, nonatomic) NSArray *pathPrefixes; // @synthesize pathPrefixes=_pathPrefixes;
@property(readonly, copy, nonatomic) NSArray *hostSuffixes; // @synthesize hostSuffixes=_hostSuffixes;
@property(readonly, nonatomic) WBSOpenSearchURLTemplate *suggestionsURLTemplate; // @synthesize suggestionsURLTemplate=_suggestionsURLTemplate;
@property(readonly, copy, nonatomic) NSDictionary *safeSearchURLQueryParameters; // @synthesize safeSearchURLQueryParameters=_safeSearchURLQueryParameters;
@property(readonly, nonatomic) WBSOpenSearchURLTemplate *safeSearchURLTemplate; // @synthesize safeSearchURLTemplate=_safeSearchURLTemplate;
@property(readonly, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplate; // @synthesize searchURLTemplate=_searchURLTemplate;
@property(readonly, copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
// - (void).cxx_destruct;
- (id)urlAttributingToSafariIfValidSearchURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)userVisibleQueryFromSearchURL:(id)arg1 allowQueryThatLooksLikeURL:(BOOL)arg2;
- (id)userVisibleQueryFromSearchURL:(id)arg1;
- (id)suggestionsURLForUserTypedString:(id)arg1;
- (id)searchURLForUserTypedString:(id)arg1;
- (BOOL)searchShouldUseSafeSearchTemplate;
- (id)safeSearchURLForSearchURL:(id)arg1;
- (BOOL)urlIsValidSearch:(id)arg1;
- (id)initWithShortName:(id)arg1 searchURLTemplate:(id)arg2 safeSearchURLTemplate:(id)arg3 safeSearchURLQueryParameters:(id)arg4 usesSearchTermsFromFragment:(BOOL)arg5 suggestionsURLTemplate:(id)arg6 hostSuffixes:(id)arg7 pathPrefixes:(id)arg8;

@end

