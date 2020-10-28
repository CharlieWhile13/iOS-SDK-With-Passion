//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class NSNumber;

@interface ADLATStatusManager : ADSingleton
{
    BOOL _sendingLATToAdPlatforms;
    BOOL _sendingLATToJingle;
    NSNumber *_pendingJingleRequestToken;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSNumber *pendingJingleRequestToken; // @synthesize pendingJingleRequestToken=_pendingJingleRequestToken;
@property(nonatomic) BOOL sendingLATToJingle; // @synthesize sendingLATToJingle=_sendingLATToJingle;
@property(nonatomic) BOOL sendingLATToAdPlatforms; // @synthesize sendingLATToAdPlatforms=_sendingLATToAdPlatforms;
// - (void).cxx_destruct;
- (id)handleJingleOptOutResponse:(id)arg1;
- (void)sendLATStatusToJingle:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)sendLATStatusToAdPlatforms:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;

@end

