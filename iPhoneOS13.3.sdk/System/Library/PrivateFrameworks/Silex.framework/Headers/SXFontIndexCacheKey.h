//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol SXFontAttributes;

@interface SXFontIndexCacheKey : NSObject <NSCopying>
{
    id <SXFontAttributes> _fontAttributes;
    long long _fontSize;
}

@property(readonly, nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, nonatomic) id <SXFontAttributes> fontAttributes; // @synthesize fontAttributes=_fontAttributes;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithFontAttributes:(id)arg1 fontSize:(long long)arg2;

@end

