//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFMutableSetDiff, HFSetDiff, HFTriggerAnonymousActionSetBuilder, HMHome, HMShortcutAction, NSArray, WFHomeWorkflow;

@interface HFTriggerActionSetsBuilder : NSObject
{
    HFTriggerAnonymousActionSetBuilder *_anonymousActionSetBuilder;
    HMHome *_home;
    HFMutableSetDiff *_actionSetBuilders;
    HMShortcutAction *_shortcutAction;
}

@property(retain, nonatomic) HMShortcutAction *shortcutAction; // @synthesize shortcutAction=_shortcutAction;
@property(retain, nonatomic) HFMutableSetDiff *actionSetBuilders; // @synthesize actionSetBuilders=_actionSetBuilders;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HFTriggerAnonymousActionSetBuilder *anonymousActionSetBuilder; // @synthesize anonymousActionSetBuilder=_anonymousActionSetBuilder;
// - (void).cxx_destruct;
- (void)defaultActionsForShortcut;
- (void)_removeAllNamedActionsSets;
- (void)convertToHomeWorkflowActionSetIfNeeded;
- (void)convertToHomeWorkflowActionSet:(id)arg1;
@property(readonly, nonatomic) NSArray *allActionBuilders;
@property(readonly, nonatomic) NSArray *allActionSets;
- (void)removeActionSetIfPresent:(id)arg1;
- (void)addActionSetIfNotPresent:(id)arg1;
- (void)resetActionSetBuilders;
- (void)resetAllActionSets;
@property(readonly, nonatomic, getter=areActionsAffectedByEndEvents) BOOL actionsAffectedByEndEvents;
- (void)removeAllActionsAndActionSets;
- (void)removeAnonymousActionBuilder:(id)arg1;
- (void)updateAnonymousActionBuilder:(id)arg1;
- (void)addAnonymousActionBuilder:(id)arg1;
- (void)removeActionSetBuilder:(id)arg1;
- (void)updateActionSetBuilder:(id)arg1;
- (void)addActionSetBuilder:(id)arg1;
@property(readonly, nonatomic) NSArray *anonymousActionBuilder;
@property(readonly, nonatomic) NSArray *namedActionSets;
@property(readonly, nonatomic) BOOL hasActions;
@property(retain, nonatomic) WFHomeWorkflow *homeWorkflow;
@property(readonly, nonatomic) BOOL isShortcutOwned;
@property(readonly, nonatomic) HFSetDiff *namedActionSetsDiff;
- (void)updateFromTriggerActionSetsBuilder:(id)arg1;
- (id)_removeEmptyActionSets:(id)arg1;
- (id)_removeDuplicateActionSets:(id)arg1;
- (id)initWithActionSets:(id)arg1 inHome:(id)arg2 filterEmptyActionSets:(BOOL)arg3;
- (id)initWithActionSets:(id)arg1 inHome:(id)arg2;
- (id)mediaAccessoriesForPlaybackAction:(id)arg1;
- (id)_uniqueServiceGroupForServices:(id)arg1;
- (void)_generateStandaloneServices:(id)arg1 andMediaAccessories:(id)arg2;
- (id)_generateSummaryInformationForStandardTrigger;
- (id)_generateSummaryInformationForShortcutOwnedTrigger;
- (id)_generateSummaryInformation;
- (id)actionSetsSummary;

@end

