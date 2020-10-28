//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IKCSSToken : NSObject
{
    unsigned short _charValue;
    long long _type;
    double _doubleValue;
    NSString *_stringValue;
    NSDictionary *_properties;
    NSRange _range;
}

@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(nonatomic) NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) unsigned short charValue; // @synthesize charValue=_charValue;
@property(nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)arg1;

@end

