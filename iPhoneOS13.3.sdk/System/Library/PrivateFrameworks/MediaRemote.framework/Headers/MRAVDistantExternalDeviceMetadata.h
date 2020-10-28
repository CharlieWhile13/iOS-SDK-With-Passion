//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MRSupportedProtocolMessages, NSString, _MRDeviceInfoMessageProtobuf;

@interface MRAVDistantExternalDeviceMetadata : NSObject <NSMutableCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_hostName;
    long long _hostPort;
    MRSupportedProtocolMessages *_supportedMessages;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    BOOL _paired;
    BOOL _usingSystemPairing;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL usingSystemPairing; // @synthesize usingSystemPairing=_usingSystemPairing;
@property(readonly, nonatomic) BOOL paired; // @synthesize paired=_paired;
@property(readonly, nonatomic) MRSupportedProtocolMessages *supportedMessages; // @synthesize supportedMessages=_supportedMessages;
@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) long long hostPort; // @synthesize hostPort=_hostPort;
@property(readonly, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
// - (id)_copyWithZone:(_NSZone )arg1 usingConcreteClass:(Class)arg2;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

