//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADColor.h>

__attribute__((visibility("hidden")))
@interface OADIndexedColor : OADColor
{
    NSUInteger mIndex;
}

+ (id)indexedColorWithIndex:(NSUInteger)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)colorFromPalette:(id)arg1;
- (NSUInteger)index;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithIndex:(NSUInteger)arg1;

@end

