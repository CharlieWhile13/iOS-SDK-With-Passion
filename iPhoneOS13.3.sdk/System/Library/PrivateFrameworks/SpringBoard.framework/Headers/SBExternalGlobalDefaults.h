//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/BSAbstractDefaultDomain.h>

@class NSArray, NSString;

@interface SBExternalGlobalDefaults : BSAbstractDefaultDomain
{
}

+ (BOOL)__useDynamicMethodResolution;
- (void)flushExternalCaches;
- (void)removeFormattedPhoneNumberFromGlobalPreferences;
@property(retain, nonatomic) NSArray *keyboards;
@property(retain, nonatomic) NSArray *languages;
@property(retain, nonatomic) NSString *locale;
- (id)init;

@end

