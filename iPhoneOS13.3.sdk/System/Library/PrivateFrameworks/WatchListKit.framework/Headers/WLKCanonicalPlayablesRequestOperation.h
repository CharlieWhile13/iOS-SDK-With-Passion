//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKCanonicalPlayablesResponse;

@interface WLKCanonicalPlayablesRequestOperation : WLKUTSNetworkRequestOperation
{
    NSString *_contentID;
    WLKCanonicalPlayablesResponse *_response;
}

@property(readonly, nonatomic) WLKCanonicalPlayablesResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
// - (void).cxx_destruct;
- (void)processResponse;
- (id)initWithContentID:(id)arg1 profiles:(id)arg2 caller:(id)arg3;

@end

