//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPhotoLibraryForceExitObserver : NSObject
{
}

+ (id)sharedInstance;
- (void)_photoLibraryForceClientExitNotification;
- (void)_photoLibraryCorruptNotification;
- (void)dealloc;
- (id)init;

@end

