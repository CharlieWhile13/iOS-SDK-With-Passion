//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol MTPersistence <NSObject>
- (void)setFloat:(float)arg1 forKey:(NSString *)arg2;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (float)floatForKey:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1 defaultValue:(id)arg2;
- (id)objectForKey:(NSString *)arg1;
@end

