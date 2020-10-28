//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/MSStreamsProtocolDelegate-Protocol.h>

@class MSBackoffManager, NSMutableDictionary, NSString;

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate>
{
    NSString *_personID;
    NSString *_manifestPath;
    NSMutableDictionary *_userManifest;
    MSBackoffManager *_streamsBackoffManager;
    MSBackoffManager *_MMCSBackoffManager;
    BOOL _hasDeactivated;
}

@property(nonatomic) BOOL hasDeactivated; // @synthesize hasDeactivated=_hasDeactivated;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(retain, nonatomic) NSMutableDictionary *_userManifest; // @synthesize _userManifest;
// - (void).cxx_destruct;
- (void)protocol:(id)arg1 didReceiveRetryAfterDate:(id)arg2;
- (void)_forget;
- (void)_abort;
- (void)_updateMasterManifest;
- (id)_latestNextActivityDate;
- (void)_didReceiveMMCSRetryAfterDate:(id)arg1;
- (void)_backoffMMCSBackoffTimer;
- (void)_resetMMCSBackoffTimer;
- (void)_didReceiveStreamsRetryAfterDate:(id)arg1;
- (void)_backoffStreamsBackoffTimer;
- (void)_resetStreamsBackoffTimer;
- (void)_commitUserManifest;
- (void)forget;
- (void)deactivate;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1;

@end

