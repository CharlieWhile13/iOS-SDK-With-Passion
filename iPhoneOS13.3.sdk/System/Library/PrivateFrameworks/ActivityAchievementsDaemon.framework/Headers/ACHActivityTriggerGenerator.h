//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACHActivityTriggerGenerator : NSObject
{
}

+ (NSUInteger)allPossibleTriggers;
- (CDStruct_c642f51a)_incrementWithInitialState:(CDStruct_c642f51a)arg1 forGoalType:(long long)arg2 dataProvider:(id)arg3 goalMetHandler:(id /* CDUnknownBlockType */)arg4;
- (NSUInteger)_triggersForNewActivityDataWithGoalType:(long long)arg1 dataProvider:(id)arg2 goalMetHandler:(id /* CDUnknownBlockType */)arg3;
- (NSUInteger)triggersForNewStandDataWithDataProvider:(id)arg1;
- (NSUInteger)triggersForNewExerciseDataWithDataProvider:(id)arg1;
- (NSUInteger)triggersForNewMoveDataWithDataProvider:(id)arg1;

@end

