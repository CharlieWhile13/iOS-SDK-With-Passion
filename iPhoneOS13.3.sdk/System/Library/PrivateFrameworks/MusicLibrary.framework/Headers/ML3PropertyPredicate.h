//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Predicate.h>

@class NSString;

@interface ML3PropertyPredicate : ML3Predicate
{
    NSString *_property;
}

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)arg1;
@property(copy, nonatomic) NSString *property; // @synthesize property=_property;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isDynamicForEntityClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1;

@end

