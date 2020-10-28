//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface TSUTemporaryDirectoryManager : NSObject
{
    NSURL *_baseDirectoryURL;
}

+ (id)makeUniqueDirectoryWithBaseDirectory:(id)arg1 filename:(id)arg2;
+ (id)sharedManager;
+ (Class)managedTemporaryDirectoryClass;
+ (BOOL)shouldExcludeFromBackup;
+ (id)baseDirectoryURL;
// - (void).cxx_destruct;
- (id)newDirectoryWithFilename:(id)arg1;
- (void)_excludeFromBackupAsynchronously;
- (void)_clearDirectories:(id)arg1;
- (void)_clearDirectoriesAsynchronously:(id)arg1;
- (id)_readDirectories;
- (id)init;

@end

