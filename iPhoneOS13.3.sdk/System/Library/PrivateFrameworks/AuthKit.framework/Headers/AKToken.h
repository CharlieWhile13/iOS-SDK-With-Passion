//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface AKToken : NSObject
{
    NSDate *_expirationDate;
    NSString *_stringValue;
    NSString *_name;
}

+ (id)tokenWithBase64String:(id)arg1;
+ (id)tokenWithValue:(id)arg1 lifetime:(id)arg2;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
// - (void).cxx_destruct;

@end

