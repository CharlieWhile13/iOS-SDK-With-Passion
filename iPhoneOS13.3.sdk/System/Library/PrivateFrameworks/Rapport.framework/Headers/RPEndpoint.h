//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CUBonjourDevice, IDSDevice, NSArray, NSDictionary, NSString, SFDevice;

@interface RPEndpoint : NSObject <NSSecureCoding>
{
    SFDevice *_bleDevice;
    CUBonjourDevice *_bonjourDevice;
    unsigned int _hotspotInfo;
    NSString *_identifier;
    NSString *_idsDeviceIdentifier;
    int _linkType;
    NSString *_mediaRemoteIdentifier;
    NSString *_mediaRouteIdentifier;
    NSString *_model;
    NSString *_name;
    NSArray *_serviceTypes;
    NSUInteger _statusFlags;
    NSString *_sourceVersion;
    BOOL _present;
    int _proximity;
    NSString *_homeKitUserIdentifier;
    NSDictionary *_serviceInfo;
    NSString *_serviceType;
    IDSDevice *_idsDevice;
}

+ (BOOL)supportsSecureCoding;
+ (id)nullEndpoint;
@property(nonatomic) BOOL present; // @synthesize present=_present;
@property(nonatomic) int linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) IDSDevice *idsDevice; // @synthesize idsDevice=_idsDevice;
@property(retain, nonatomic) CUBonjourDevice *bonjourDevice; // @synthesize bonjourDevice=_bonjourDevice;
@property(retain, nonatomic) SFDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property(copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(nonatomic) NSUInteger statusFlags; // @synthesize statusFlags=_statusFlags;
@property(copy, nonatomic) NSArray *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property(readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, copy, nonatomic) NSDictionary *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property(readonly, nonatomic) int proximity; // @synthesize proximity=_proximity;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *mediaRouteIdentifier; // @synthesize mediaRouteIdentifier=_mediaRouteIdentifier;
@property(copy, nonatomic) NSString *mediaRemoteIdentifier; // @synthesize mediaRemoteIdentifier=_mediaRemoteIdentifier;
@property(copy, nonatomic) NSString *idsDeviceIdentifier; // @synthesize idsDeviceIdentifier=_idsDeviceIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned int hotspotInfo; // @synthesize hotspotInfo=_hotspotInfo;
@property(readonly, copy, nonatomic) NSString *homeKitUserIdentifier; // @synthesize homeKitUserIdentifier=_homeKitUserIdentifier;
// - (void).cxx_destruct;
- (BOOL)removeSFDevice:(id)arg1;
- (unsigned int)updateWithSFDevice:(id)arg1;
- (unsigned int)removeIDSDevice;
- (unsigned int)updateWithIDSDevice:(id)arg1;
- (BOOL)removeBonjourDevice:(id)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
