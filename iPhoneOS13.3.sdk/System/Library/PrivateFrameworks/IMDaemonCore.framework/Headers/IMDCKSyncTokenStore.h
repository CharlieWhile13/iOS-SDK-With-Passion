//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMDCKSyncTokenStore-Protocol.h>

@interface IMDCKSyncTokenStore : NSObject <IMDCKSyncTokenStore>
{
}

+ (void)persistToken:(id)arg1 forKey:(id)arg2;
+ (id)tokenForKey:(id)arg1;
+ (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;
- (void)persistToken:(id)arg1 forKey:(id)arg2;
- (id)tokenForKey:(id)arg1;
- (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;

@end

