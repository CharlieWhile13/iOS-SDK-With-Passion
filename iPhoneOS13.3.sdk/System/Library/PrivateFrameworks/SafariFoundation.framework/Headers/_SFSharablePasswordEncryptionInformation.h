//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface _SFSharablePasswordEncryptionInformation : NSObject
{
    NSData *_encryptedPasswordData;
    NSData *_encryptionKeyReference;
}

@property(readonly, copy, nonatomic) NSData *encryptionKeyReference; // @synthesize encryptionKeyReference=_encryptionKeyReference;
@property(readonly, copy, nonatomic) NSData *encryptedPasswordData; // @synthesize encryptedPasswordData=_encryptedPasswordData;
// - (void).cxx_destruct;
- (id)initWithEncryptedPasswordData:(id)arg1 encryptionKeyReference:(id)arg2;

@end

