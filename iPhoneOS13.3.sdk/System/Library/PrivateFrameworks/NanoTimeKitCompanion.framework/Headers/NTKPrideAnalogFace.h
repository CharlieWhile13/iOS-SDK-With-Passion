//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKPrideAnalogFace : NTKFace
{
}

+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (BOOL)isAvailableForDevice:(id)arg1;
+ (BOOL)isRestrictedForDevice:(id)arg1;
+ (id)_orderedComplicationSlots;
+ (id)_complicationSlotDescriptors;
- (id)complicationSlotsHiddenByEditOption:(id)arg1;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (id)_optionAtIndex:(NSUInteger)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (NSUInteger)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (NSUInteger)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (BOOL)_hasOptionsForCustomEditMode:(long long)arg1;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_customEditModes;

@end

