//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMServiceGroup.h>

#import <Home/HFFavoritable-Protocol.h>
#import <Home/HFHomeKitObject-Protocol.h>
#import <Home/HFHomeStatusVisible-Protocol.h>
#import <Home/HFReorderableHomeKitObject-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>
#import <Home/HFUserNotificationServiceSettingsProviding-Protocol.h>

@class HFServiceDescriptor, HFServiceNameComponents, HFUserNotificationServiceSettings, NSDate, NSString;

@interface HMServiceGroup (HFDebugging) <HFStateDumpBuildable, HFHomeStatusVisible, HFFavoritable, HFHomeKitObject, HFUserNotificationServiceSettingsProviding, HFReorderableHomeKitObject>
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
@property(readonly, nonatomic) HFServiceDescriptor *hf_serviceDescriptor;
@property(readonly, nonatomic) BOOL hf_isSupported;
- (id)hf_updateIsVisibleInHomeStatus:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hf_hasSetVisibleInHomeStatus;
@property(readonly, nonatomic) BOOL hf_isVisibleInHomeStatus;
@property(readonly, nonatomic) BOOL hf_supportsHomeStatus;
- (id)hf_updateIsFavorite:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property(readonly, nonatomic) BOOL hf_hasSetFavorite;
@property(readonly, nonatomic) BOOL hf_isFavorite;
- (BOOL)hf_isValidObject;
- (id)hf_updateUserNotificationSettings:(id)arg1;
@property(readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;
- (id)_hf_allBulletinBoardNotifications;
- (id)hf_updateDateAdded:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, copy, nonatomic) NSString *hf_displayName;
@end

