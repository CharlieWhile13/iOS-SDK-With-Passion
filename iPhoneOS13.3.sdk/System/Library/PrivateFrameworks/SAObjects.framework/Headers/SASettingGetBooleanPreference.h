//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingGetBool.h>

@class NSString;

@interface SASettingGetBooleanPreference : SASettingGetBool
{
}

+ (id)getBooleanPreferenceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getBooleanPreference;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *settingKey;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
