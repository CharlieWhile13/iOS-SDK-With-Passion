//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDateComponents, NSMutableDictionary, PETDistributionEventTracker, PETScalarEventTracker;

@interface WGWidgetEventTracker : NSObject
{
    NSDateComponents *_previousTodayViewAppearDateComponents;
    NSDate *_previousTodayViewAppearanceDate;
    NSMutableDictionary *_previousWidgetAppearanceDateByIdentifier;
    NSUInteger _location;
    PETDistributionEventTracker *_widgetLingerTracker;
    PETScalarEventTracker *_widgetShownTracker;
    PETScalarEventTracker *_widgetStatusTracker;
    PETDistributionEventTracker *_widgetListLingerTracker;
    PETScalarEventTracker *_widgetToggleContractTracker;
    PETScalarEventTracker *_widgetToggleExpandTracker;
    PETScalarEventTracker *_widgetListShownTracker;
    PETScalarEventTracker *_widgetToggleContract;
    PETScalarEventTracker *_widgetToggleExpand;
    BOOL _authenticated;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_trackWidgetListShownEventWithLocation:(NSUInteger)arg1 authenticated:(BOOL)arg2;
- (id)widgetListShownTracker;
- (void)_trackWidgetListLingerEventWithLocation:(NSUInteger)arg1 authenticated:(BOOL)arg2 duration:(double)arg3;
- (id)_widgetListLingerTracker;
- (void)_trackWidgetExpandEventForWidget:(id)arg1;
- (id)widgetToggleExpandTracker;
- (void)_trackWidgetContractEventForWidget:(id)arg1;
- (id)_widgetToggleContractTracker;
- (void)_trackWidgetStatusEventForWidget:(id)arg1 withStatus:(BOOL)arg2;
- (id)_widgetStatusTracker;
- (void)_trackWidgetShownEventForWidget:(id)arg1 withLocation:(NSUInteger)arg2 authenticated:(BOOL)arg3 mode:(long long)arg4;
- (id)_widgetShownTracker;
- (void)_trackWidgetLingerEventForWidget:(id)arg1 withLocation:(NSUInteger)arg2 authenticated:(BOOL)arg3 mode:(long long)arg4 duration:(double)arg5;
- (id)_widgetLingerTracker;
- (id)_widgetProperty;
- (id)_statusProperty;
- (id)_modeProperty;
- (id)_locationProperty;
- (id)_authenticationProperty;
- (void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
- (void)widget:(id)arg1 didDisappearInMode:(long long)arg2;
- (void)widget:(id)arg1 didAppearInMode:(long long)arg2;
- (void)widgetViewDidDisappearWithWidget:(id)arg1;
- (void)widgetViewDidAppearWithWidget:(id)arg1;
- (void)widgetListDidDisappearAtLocation:(NSUInteger)arg1;
- (void)widgetListDidAppearAtLocation:(NSUInteger)arg1 withEnabledWidgets:(id)arg2 disabledWidgets:(id)arg3;
- (void)_lockedStateDidChange;
- (void)dealloc;
- (id)init;

@end

