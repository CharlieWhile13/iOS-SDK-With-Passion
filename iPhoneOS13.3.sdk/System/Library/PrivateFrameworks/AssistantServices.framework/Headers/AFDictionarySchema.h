//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AFDictionarySchema : NSObject
{
    NSMutableDictionary *_coercions;
}

// - (void).cxx_destruct;
- (id)coerceObject:(id)arg1 error:(id )arg2;
- (void)setObjectCoercion:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

