//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NetworkUtils : NSObject
{
}

+ (id)encryptionInfoForKey:(NSUInteger)arg1;
+ (id)newEncryptionInfoWithMasterKeyIndex:(id)arg1;
+ (id)securityKeyMaterialWithMasterKeyIndex:(id)arg1;
+ (id)newRTPSocketDictionary:(BOOL)arg1 rtpSourcePort:(short)arg2;
+ (int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 shouldConnect:(BOOL)arg3 error:(id )arg4;
+ (int)connectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id )arg3;
+ (int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id )arg3;

@end
