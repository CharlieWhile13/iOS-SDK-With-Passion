//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

@class NTKLayoutRule;

@interface NTKDigitalModularFaceViewComplicationFactory : NTKFaceViewComplicationFactory
{
    NTKLayoutRule *_timeLayoutRuleNormal;
    NTKLayoutRule *_timeLayoutRuleEditing;
}

// - (void).cxx_destruct;
- (void)_loadLayoutRulesForState:(long long)arg1 withTopGap:(double)arg2 largeModuleHeight:(double)arg3 faceView:(id)arg4;
- (NSUInteger)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)digitalTimeLayoutRuleForEditMode:(long long)arg1;
- (id)initForDevice:(id)arg1;

@end

