//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FATField;

@interface FATArgument : NSObject
{
    FATField *_field;
    id _value;
}

+ (id)argumentWithField:(id)arg1 value:(id)arg2;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) FATField *field; // @synthesize field=_field;
// - (void).cxx_destruct;

@end

