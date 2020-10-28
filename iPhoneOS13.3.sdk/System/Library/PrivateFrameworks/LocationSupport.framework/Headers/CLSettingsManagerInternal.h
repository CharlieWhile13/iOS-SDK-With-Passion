//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import <LocationSupport/CLSettingsManagerProtocol-Protocol.h>

@class NSMutableDictionary, NSMutableSet;

@interface CLSettingsManagerInternal : CLIntersiloService <CLSettingsManagerProtocol>
{
    NSMutableSet *_clients;
    NSMutableDictionary *_settingsDictionary;
}

+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(id /* CDUnknownBlockType */)arg2;
+ (void)becameFatallyBlocked:(id)arg1 index:(NSUInteger)arg2;
@property(retain) NSMutableDictionary *settingsDictionary; // @synthesize settingsDictionary=_settingsDictionary;
@property(retain) NSMutableSet *clients; // @synthesize clients=_clients;
- (void)refresh;
- (void)flush;
- (id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(byref id)arg3;
- (void)updateClientsWithDictionary:(id)arg1;
- (id)syncgetSettingsAndRegisterForUpdates:(byref id)arg1;
- (void)unregisterForUpdates:(byref id)arg1;
- (void)endService;
- (void)beginService;

@end

