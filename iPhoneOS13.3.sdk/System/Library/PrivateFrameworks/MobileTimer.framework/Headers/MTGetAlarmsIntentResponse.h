//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResponse.h>

@interface MTGetAlarmsIntentResponse : INIntentResponse
{
    long long _code;
}

+ (id)successIntentResponseWithAlarms:(id)arg1;
@property(nonatomic) long long code; // @synthesize code=_code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end

