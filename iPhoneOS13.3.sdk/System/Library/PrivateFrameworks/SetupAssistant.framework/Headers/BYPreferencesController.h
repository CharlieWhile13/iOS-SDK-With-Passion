//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BYPreferencesController : NSObject
{
    NSString *_domain;
    NSMutableDictionary *_preferences;
}

+ (void)flushEverything;
+ (void)persistEverything;
+ (id)buddyPreferencesExcludedFromBackup;
+ (id)buddyPreferences;
@property(retain, nonatomic) NSMutableDictionary *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
// - (void).cxx_destruct;
- (void)flush;
- (void)persist;
- (void)reset;
- (void)removeObjectForKey:(id)arg1 onlyFromMemory:(BOOL)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 persistImmediately:(BOOL)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)initWithDomain:(id)arg1;

@end

