//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SATimerObject : SADomainObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSNumber *timerValue;
@property(copy, nonatomic) NSString *state;
@property(copy, nonatomic) NSNumber *isFiring;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

