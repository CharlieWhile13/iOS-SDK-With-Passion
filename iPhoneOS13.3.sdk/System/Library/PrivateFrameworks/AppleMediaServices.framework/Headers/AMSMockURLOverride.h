//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AMSMockURLResponse, AMSObservable;

__attribute__((visibility("hidden")))
@interface AMSMockURLOverride : NSObject <NSCopying>
{
    AMSObservable *_executedObservable;
    AMSMockURLResponse *_response;
    id _comparator;
    long long _comparatorType;
}

+ (id)overrideWithURLRegex:(id)arg1 usingResponse:(id)arg2;
+ (id)overrideWithPathComponent:(id)arg1 usingResponse:(id)arg2;
+ (id)overrideWithHost:(id)arg1 usingResponse:(id)arg2;
@property(nonatomic) long long comparatorType; // @synthesize comparatorType=_comparatorType;
@property(retain, nonatomic) id comparator; // @synthesize comparator=_comparator;
@property(retain, nonatomic) AMSMockURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) AMSObservable *executedObservable; // @synthesize executedObservable=_executedObservable;
// - (void).cxx_destruct;
- (BOOL)shouldOverrideURL:(id)arg1;
- (BOOL)isEqualToOverride:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

