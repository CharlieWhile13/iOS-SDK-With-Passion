//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _RCUIViewNamedConstraints : NSObject
{
    NSString *_name;
    NSArray *_constraints;
    id _stalenessToken;
}

@property(readonly, copy, nonatomic) id stalenessToken; // @synthesize stalenessToken=_stalenessToken;
@property(readonly, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)initWithName:(id)arg1 constraints:(id)arg2 stalenessToken:(id)arg3;

@end

