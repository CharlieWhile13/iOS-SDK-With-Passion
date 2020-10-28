//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class HKQuantity;

@interface STStartWorkoutRequest : AFSiriRequest
{
    long long _activityType;
    long long _locationType;
    long long _goalType;
    long long _userMode;
    HKQuantity *_goal;
    BOOL _isOpenGoal;
    BOOL _skipActivitySetup;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponse;
- (BOOL)isOpenGoal;
- (BOOL)skipActivitySetup;
- (id)workoutGoal;
- (long long)goalType;
- (long long)userMode;
- (long long)locationType;
- (long long)activityType;
- (id)_initWithType:(long long)arg1 location:(long long)arg2 goal:(id)arg3 goalType:(long long)arg4 userMode:(long long)arg5 isOpenGoal:(BOOL)arg6 skipActivitySetup:(BOOL)arg7;

@end

