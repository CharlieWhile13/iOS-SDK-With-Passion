//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFConditionalOperatorParameter : WFEnumerationParameter
{
    BOOL _usingLegacyOperatorBehavior;
    NSArray *_possibleStates;
    NSArray *_possibleContentOperators;
    long long _contentType;
    NSUInteger _displayableTimeUnits;
}

@property(readonly, nonatomic) BOOL usingLegacyOperatorBehavior; // @synthesize usingLegacyOperatorBehavior=_usingLegacyOperatorBehavior;
@property(readonly, nonatomic) NSUInteger displayableTimeUnits; // @synthesize displayableTimeUnits=_displayableTimeUnits;
@property(readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) NSArray *possibleContentOperators; // @synthesize possibleContentOperators=_possibleContentOperators;
// - (void).cxx_destruct;
- (BOOL)parameterStateIsValid:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (void)possibleStatesDidChange;
- (void)setPossibleContentOperators:(id)arg1 withContentType:(long long)arg2 displayableTimeUnits:(NSUInteger)arg3 usingLegacyOperatorBehavior:(BOOL)arg4;
- (id)defaultSupportedVariableTypes;
- (BOOL)supportsImportQuestions;
- (BOOL)allowsMultipleValues;
- (Class)stateClass;

@end

