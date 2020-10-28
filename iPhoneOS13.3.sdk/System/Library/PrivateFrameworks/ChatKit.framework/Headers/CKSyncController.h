//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKSyncController : NSObject
{
    int _restoreStateChangedToken;
    int _attachmentRestoredToken;
    BOOL _restoring;
}

+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isRestoring) BOOL restoring; // @synthesize restoring=_restoring;
- (void)postAttachmentRestored;
- (void)attachmentRestored;
- (void)prioritizeAttachmentAtPath:(id)arg1;

@end
