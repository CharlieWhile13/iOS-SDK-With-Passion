//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, OITSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface OCCDecryptor : NSObject
{
    OITSUTemporaryDirectory *mTempDirectory;
    NSString *mOutputFilename;
    NSString *mBaseStringForOutputFilename;
    struct OCCStreamer mStreamer;
}

+ (id)allocTempFileWithBase:(id)arg1 outFilename:(id )arg2 tempDirectory:(id )arg3;
+ (id)agilePasswordKeyEncryptorNamespace;
+ (id)agileDescriptorNamespace;
@property(readonly, nonatomic) NSString *outputFilename; // @synthesize outputFilename=mOutputFilename;
// - (void).cxx_destruct;
- (BOOL)decryptIntoOutputFile;
- (BOOL)verifyPassphrase:(id)arg1;
- (BOOL)decrypt;
- (void)deleteOutputFile;
- (BOOL)isReadProtectedUsingDefaultPassphrase;
- (id)initWithStreamer:(struct OCCStreamer )arg1;
- (void)dealloc;

@end

