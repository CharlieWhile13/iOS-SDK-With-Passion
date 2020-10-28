//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SXDataTableConditionEngine : NSObject
{
    NSUInteger _conditionCount;
    NSUInteger _validConditionCount;
}

+ (id)engine;
@property(nonatomic) NSUInteger validConditionCount; // @synthesize validConditionCount=_validConditionCount;
@property(nonatomic) NSUInteger conditionCount; // @synthesize conditionCount=_conditionCount;
- (id)description;
- (NSUInteger)isOddInteger:(long long)arg1;
- (NSUInteger)isEvenInteger:(long long)arg1;
- (BOOL)isValid;
- (void)addConditionForEqualString:(id)arg1 withString:(id)arg2;
- (void)addConditionForEqualInteger:(NSUInteger)arg1 withInteger:(NSUInteger)arg2;
- (void)addConditionForOddBoolean:(NSUInteger)arg1 withInteger:(NSUInteger)arg2;
- (void)addConditionForEvenBoolean:(NSUInteger)arg1 withInteger:(NSUInteger)arg2;

@end

