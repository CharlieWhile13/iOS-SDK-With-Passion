//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIComposeTextFieldConfiguration : NSObject
{
    UIEdgeInsets _borderInsets;
    long long _columnIndex;
    BOOL _isRequired;
    NSString *_label;
    NSUInteger _maxLength;
    NSString *_placeholder;
    NSString *_value;
}

@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) NSUInteger maxLength; // @synthesize maxLength=_maxLength;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic, getter=isRequired) BOOL required; // @synthesize required=_isRequired;
@property(nonatomic) long long columnIndex; // @synthesize columnIndex=_columnIndex;
@property(nonatomic) UIEdgeInsets borderInsets; // @synthesize borderInsets=_borderInsets;
// - (void).cxx_destruct;

@end

