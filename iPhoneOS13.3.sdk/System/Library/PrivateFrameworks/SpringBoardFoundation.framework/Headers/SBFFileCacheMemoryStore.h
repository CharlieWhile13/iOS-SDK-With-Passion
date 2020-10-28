//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFFileCacheStore-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SBFFileCacheMemoryStore : NSObject <SBFFileCacheStore>
{
    NSMutableDictionary *_fileWrappers;
}

// - (void).cxx_destruct;
- (void)removeAllFileWrappersForFileCache:(id)arg1;
- (void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2;
- (id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2;
- (void)fileCache:(id)arg1 storeFileWrapper:(id)arg2;
@property(readonly, copy) NSString *description;

@end

