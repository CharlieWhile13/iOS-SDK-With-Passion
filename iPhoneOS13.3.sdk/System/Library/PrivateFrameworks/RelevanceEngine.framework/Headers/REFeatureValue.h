//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSSet, NSString;

@interface REFeatureValue : NSObject <NSCopying>
{
}

+ (id)featureValueWithSet:(id)arg1;
+ (id)featureValueWithString:(id)arg1;
+ (id)featureValueWithDouble:(double)arg1;
+ (id)featureValueWithInt64:(long long)arg1;
+ (id)featureValueWithBool:(BOOL)arg1;
+ (id)featureValueWithDictionary:(id)arg1;
+ (id)nullValueForFeature:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
@property(readonly, nonatomic) NSSet *setValue;
@property(readonly, copy, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) double doubleValue;
@property(readonly, nonatomic) NSUInteger int64Value;
@property(readonly, nonatomic) BOOL boolValue;
@property(readonly, nonatomic) NSUInteger type;
- (id)dictionaryEncoding;
- (NSUInteger)_integralFeatureValue;

@end

