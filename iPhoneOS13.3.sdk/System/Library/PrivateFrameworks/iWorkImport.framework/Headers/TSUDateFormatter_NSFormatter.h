//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSString, TSULocale;

__attribute__((visibility("hidden")))
@interface TSUDateFormatter_NSFormatter : NSFormatter
{
    NSString *_preferredFormat;
    BOOL isDateOnly;
    BOOL isTimeOnly;
    TSULocale *_locale;
}

@property(retain, nonatomic) TSULocale *locale; // @synthesize locale=_locale;
@property(nonatomic) BOOL isTimeOnly; // @synthesize isTimeOnly;
@property(nonatomic) BOOL isDateOnly; // @synthesize isDateOnly;
@property(retain, nonatomic) NSString *preferredFormat; // @synthesize preferredFormat=_preferredFormat;
// - (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(out id )arg1 forString:(id)arg2 errorDescription:(out id )arg3;
- (id)init;

@end
