//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary, NSString;

@protocol WeatherPreferencesPersistence <NSObject>
- (BOOL)synchronize;
- (void)setBool:(BOOL)arg1 forKey:(NSString *)arg2;
- (BOOL)boolForKey:(NSString *)arg1;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (NSArray *)arrayForKey:(NSString *)arg1;
@end

