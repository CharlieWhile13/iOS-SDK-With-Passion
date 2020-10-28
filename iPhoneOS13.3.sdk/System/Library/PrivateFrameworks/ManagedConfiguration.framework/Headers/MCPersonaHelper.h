//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCPersonaHelper : NSObject
{
}

+ (id)fetchDirtyPersonaIDs;
+ (void)untrackAllDirtyPersonas;
+ (void)untrackDirtyPersona:(id)arg1;
+ (void)trackDirtyPersona:(id)arg1;
+ (BOOL)personaWithUniqueIdentifierExists:(id)arg1;
+ (BOOL)isCurrentPersonaEnterprise;
+ (id)currentPersonaID;
+ (id)performBlockUnderPersona:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
+ (id)performBlockUnderPersonalPersona:(id /* CDUnknownBlockType */)arg1;
+ (id)appleAccountWithPersonaID:(id)arg1;
+ (id)updateAccountDescriptionName:(id)arg1 forAppleAccountWithPersonaID:(id)arg2;
+ (id)accountIdentifierForAppleAccountWithPersonaID:(id)arg1;
+ (id)managedAppleIDNameWithPersonaID:(id)arg1;
+ (void)signOutEnterpriseAccountWithPersonaID:(id)arg1;
+ (void)removePersonaAndAccountsWithPersonaID:(id)arg1;
+ (void)removeExistingEnterprisePersonaAndAccountsAsynchronously;
+ (void)removePersona:(id)arg1;
+ (BOOL)adoptPersona:(id)arg1 error:(id )arg2;
+ (id)createEnterprisePersona:(id )arg1 passcode:(id)arg2;

@end

