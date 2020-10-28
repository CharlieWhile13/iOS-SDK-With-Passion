//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/SSXPCCoding-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString, SSItemContentRating;

@interface ISSoftwareApplication : NSObject <SSXPCCoding>
{
    NSNumber *_accountDSID;
    NSString *_accountIdentifier;
    BOOL _beta;
    NSString *_bundleIdentifier;
    NSString *_bundleShortVersionString;
    NSString *_bundleVersion;
    NSString *_containerPath;
    SSItemContentRating *_contentRating;
    NSString *_deviceIdentifierForVendor;
    NSNumber *_familyAccountIdentifier;
    BOOL _hasMIDBasedSINF;
    NSNumber *_itemIdentifier;
    NSString *_itemName;
    BOOL _missingRequiredSINF;
    BOOL _placeholder;
    BOOL _profileValidated;
    NSString *_softwareType;
    NSNumber *_storeFrontIdentifier;
    NSString *_vendorName;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
    NSDate *_receiptExpirationDate;
    NSUInteger _vppStateFlags;
    BOOL _launchProhibited;
    BOOL _didCheckLaunchProhibited;
    NSUInteger _removableStatus;
}

@property(readonly, nonatomic) NSUInteger removableStatus; // @synthesize removableStatus=_removableStatus;
@property(nonatomic) BOOL didCheckLaunchProhibited; // @synthesize didCheckLaunchProhibited=_didCheckLaunchProhibited;
@property(nonatomic, getter=isLaunchProhibited) BOOL launchProhibited; // @synthesize launchProhibited=_launchProhibited;
@property(readonly, nonatomic) NSDate *receiptExpirationDate; // @synthesize receiptExpirationDate=_receiptExpirationDate;
@property(copy, nonatomic) NSArray *versionOrdering; // @synthesize versionOrdering=_versionOrdering;
@property(retain, nonatomic) NSNumber *versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(retain, nonatomic) NSNumber *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(copy, nonatomic) NSString *softwareType; // @synthesize softwareType=_softwareType;
@property(nonatomic, getter=isProfileValidated) BOOL profileValidated; // @synthesize profileValidated=_profileValidated;
@property(nonatomic, getter=isPlaceholder) BOOL placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) BOOL missingRequiredSINF; // @synthesize missingRequiredSINF=_missingRequiredSINF;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) BOOL hasMIDBasedSINF; // @synthesize hasMIDBasedSINF=_hasMIDBasedSINF;
@property(copy, nonatomic) NSNumber *familyAccountIdentifier; // @synthesize familyAccountIdentifier=_familyAccountIdentifier;
@property(copy, nonatomic) NSString *deviceIdentifierForVendor; // @synthesize deviceIdentifierForVendor=_deviceIdentifierForVendor;
@property(copy, nonatomic) SSItemContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(copy, nonatomic) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleShortVersionString; // @synthesize bundleShortVersionString=_bundleShortVersionString;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic, getter=isBeta) BOOL beta; // @synthesize beta=_beta;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
- (void)_loadMetadataFromContainer:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)ITunesMetadataDictionary;
@property(readonly, nonatomic) NSUInteger vppStateFlags;
- (void)resetVPPStateFlags;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithLaunchServicesApplication:(id)arg1 containerPath:(id)arg2;
- (id)initWithLaunchServicesApplication:(id)arg1;

@end

