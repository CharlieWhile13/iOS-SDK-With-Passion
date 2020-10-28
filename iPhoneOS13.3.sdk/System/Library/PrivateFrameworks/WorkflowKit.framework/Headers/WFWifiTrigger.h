//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFWifiTrigger : WFTrigger
{
    NSArray *_selectedNetworks;
    NSUInteger _selection;
}

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
@property(nonatomic) NSUInteger selection; // @synthesize selection=_selection;
@property(retain, nonatomic) NSArray *selectedNetworks; // @synthesize selectedNetworks=_selectedNetworks;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummary;
- (BOOL)hasValidConfiguration;
- (id)init;

@end

