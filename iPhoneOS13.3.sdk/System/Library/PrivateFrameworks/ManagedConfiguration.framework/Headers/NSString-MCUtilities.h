//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (MCUtilities)
+ (id)MCMakeUUID;
- (unsigned int)MCHash;
- (id)MCAppendDeviceName;
- (id)MCSHA256DigestWithSalt:(id)arg1;
- (id)MCSHA256DigestWithPasscodeSalt;
- (id)MCOldStyleSafeFilenameHashWithExtension:(id)arg1;
- (id)MCOldStyleSafeFilenameHash;
- (id)MCHashedIdentifier;
- (id)MCHashedFilenameWithPrefix:(id)arg1 extension:(id)arg2;
- (id)MCHashedFilenameWithExtension:(id)arg1;
- (id)MCRemoveAppExternalVersionIDParameter;
- (id)MCAppendGreenteaSuffix;
@end

