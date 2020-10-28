//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class HKQuantityType, NSArray;

@interface WFHealthQuantityAdditionalPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    HKQuantityType *_quantityType;
}

@property(retain, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
// - (void).cxx_destruct;
- (BOOL)supportsImportQuestions;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)localizedLabel;
- (BOOL)isHidden;
- (void)updatePossibleStates;
- (id)defaultSerializedRepresentation;
- (id)possibleStates;

@end

