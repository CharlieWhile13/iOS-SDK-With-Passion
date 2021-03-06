//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCNetworkAddress : NSObject
{
    NSString *_ip;
    NSString *_interfaceName;
    unsigned short _port;
    unsigned short _ipVersion;
}

@property(nonatomic) unsigned short ipVersion; // @synthesize ipVersion=_ipVersion;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (BOOL)isIPv6;
- (void)dealloc;

@end

