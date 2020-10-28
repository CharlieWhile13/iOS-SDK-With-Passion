//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, SUClientInterface;

@interface SUSearchFieldConfiguration : NSObject <NSCopying>
{
    NSString *_cancelString;
    SUClientInterface *_clientInterface;
    struct __CFDictionary _hintURLs;
    long long _location;
    NSString *_placeholder;
    BOOL _rootViewOnly;
    struct __CFDictionary _searchURLs;
    NSString *_userDefaultsKey;
    double _width;
    double _widthLandscape;
    double _widthPortrait;
}

+ (id)defaultConfigurationWithClientInterface:(id)arg1;
+ (id)defaultConfiguration;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
@property(readonly, nonatomic) NSString *userDefaultsKey; // @synthesize userDefaultsKey=_userDefaultsKey;
@property(readonly, nonatomic, getter=isRootViewOnly) BOOL rootViewOnly; // @synthesize rootViewOnly=_rootViewOnly;
@property(readonly, nonatomic) NSString *placeholderString; // @synthesize placeholderString=_placeholder;
@property(readonly, nonatomic) long long location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *cancelString; // @synthesize cancelString=_cancelString;
- (id)_urlRequestPropertiesForURLBagKey:(id)arg1 networkType:(long long)arg2;
- (void)_setSearchURLsFromDictionary:(id)arg1;
- (void)_setHintURLsFromDictionary:(id)arg1;
- (struct __CFDictionary )_newURLsDictionaryWithDictionary:(id)arg1;
- (id)_newQueryStringDictionaryForNetworkType:(long long)arg1;
- (long long)_locationForString:(id)arg1;
- (id)_initWithClientInterface:(id)arg1;
- (double)widthForOrientation:(long long)arg1;
- (id)URLRequestPropertiesWithBaseURL:(id)arg1 forNetworkType:(long long)arg2;
- (id)searchURLRequestPropertiesForNetworkType:(long long)arg1;
- (void)loadFromDictionary:(id)arg1;
- (id)hintsURLRequestPropertiesForNetworkType:(long long)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 clientInterface:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
