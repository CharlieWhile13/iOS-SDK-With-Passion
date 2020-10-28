//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString, _PLDescriptionStyle;

@interface PLDescriptionBuilder : NSObject
{
    NSObject *_object;
    NSMutableString *_description;
    NSString *_separator;
    long long _indent;
    NSString *_indentString;
    _PLDescriptionStyle *_style;
    long long _descriptionStyle;
}

+ (id)prettyMultiLineDescriptionBuilderWithObject:(id)arg1 indent:(long long)arg2;
+ (id)plainMultiLineDescriptionBuilder;
+ (id)plainDescriptionBuilder;
+ (id)descriptionBuilderWithObject:(id)arg1;
@property(copy, nonatomic) NSString *separator; // @synthesize separator=_separator;
// - (void).cxx_destruct;
- (id)build;
- (void)appendName:(id)arg1 typeCode:(const char )arg2 value:(const void )arg3;
- (void)appendName:(id)arg1 cgSize:(CGSize)arg2;
- (void)appendName:(id)arg1 doubleValue:(double)arg2;
- (void)appendName:(id)arg1 floatValue:(float)arg2;
- (void)appendName:(id)arg1 unsignedIntegerValue:(NSUInteger)arg2;
- (void)appendName:(id)arg1 integerValue:(long long)arg2;
- (void)appendName:(id)arg1 boolValue:(BOOL)arg2;
- (void)appendName:(id)arg1 object:(id)arg2;
@property(readonly, nonatomic) long long indent;
@property(readonly, nonatomic) long long style;
- (id)initWithObject:(id)arg1 style:(long long)arg2 indent:(long long)arg3;

@end

