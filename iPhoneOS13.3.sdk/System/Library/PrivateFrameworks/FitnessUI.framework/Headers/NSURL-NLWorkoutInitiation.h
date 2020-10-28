//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (NLWorkoutInitiation)
+ (BOOL)_fiui_isValidWorkoutScheme:(id)arg1;
+ (id)fiui_workoutPickerURL;
+ (id)fiui_startBackdatedWorkoutURLWithDate:(id)arg1 workoutIdentifier:(id)arg2 workoutType:(NSUInteger)arg3 isIndoor:(BOOL)arg4 swimmingLocationType:(long long)arg5 showPicker:(BOOL)arg6;
+ (id)fiui_pauseWorkoutURLWithIdentifier:(id)arg1;
+ (id)fiui_endWorkoutURLWithIdentifier:(id)arg1;
+ (id)_launchURLWithHostname:(id)arg1 workoutIdentifier:(id)arg2;
+ (id)fiui_workoutPickerURLComponents;
+ (id)fiui_workoutInitiationURLWithWorkout:(id)arg1 presentConfiguration:(BOOL)arg2 skipCountdown:(BOOL)arg3;
+ (id)_fiui_supportedQueryItemNames;
+ (id)fiui_URLEnergyUnit;
+ (id)fiui_URLDistanceUnit;
+ (id)fiui_URLTimeUnit;
+ (id)_fiui_supportedSchemes;
- (double)fiui_goalValue;
- (NSUInteger)fiui_goalType;
- (BOOL)fiui_presentGoalConfiguration;
- (id)fiui_activityType;
- (BOOL)fiui_isValidMachineWorkoutLaunchURL;
- (BOOL)fiui_isValidStartWorkoutURL;
- (BOOL)fiui_isStartBackdatedWorkoutURL;
- (BOOL)fiui_isPauseWorkoutURL;
- (BOOL)fiui_isEndWorkoutURL;
@end

