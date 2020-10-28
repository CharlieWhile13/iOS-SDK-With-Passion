//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol SKUIJSRestrictions <JSExport>
- (void)presentExplicitRestrictionAlertIfNeededOfType:(NSString *)arg1:(JSValue *)arg2;
- (void)didDisplayExplicitRestrictionAlertOfType:(NSString *)arg1;
- (void)shouldDisplayExplicitRestrictionAlertOfType:(NSString *)arg1:(JSValue *)arg2;
- (void)setAllowExplicitContent;
- (void)isRestrictionsPasscodeSet:(JSValue *)arg1;
- (void)isExplicitContentDisallowedInCurrentStoreFront:(JSValue *)arg1;
- (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(JSValue *)arg1;
- (BOOL)isRestrictedApp:(NSString *)arg1;
@end

