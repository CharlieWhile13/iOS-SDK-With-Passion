//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HMSetting, MCProfile, NSUUID;

@interface HUAccessorySettingsProfileItem : HFItem
{
    MCProfile *_profile;
    HMSetting *_setting;
}

@property(readonly, nonatomic) HMSetting *setting; // @synthesize setting=_setting;
@property(readonly, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithProfile:(id)arg1 setting:(id)arg2;

@end

