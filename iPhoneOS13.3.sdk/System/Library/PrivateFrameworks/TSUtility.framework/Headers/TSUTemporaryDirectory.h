//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSUTemporaryDirectory : NSObject
{
    NSString *_path;
    BOOL _leak;
}

- (void)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2;
- (void)leakTemporaryDirectory;
- (id)URL;
- (id)path;
- (void)dealloc;
- (id)initWithSignature:(id)arg1 subdirectory:(id)arg2;
- (id)initWithSignature:(id)arg1;
- (id)init;

@end

