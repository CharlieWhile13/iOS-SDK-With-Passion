//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray, NSDictionary;

@interface WLKPlayActivityDecorateVODOperation : WLKUTSNetworkRequestOperation
{
    NSArray *_playActivityIdentifiers;
    NSDictionary *_metadataByIdentifier;
}

+ (id)identifierForPlayActivityID:(id)arg1 channelID:(id)arg2 duration:(id)arg3;
@property(readonly, copy, nonatomic) NSDictionary *metadataByIdentifier; // @synthesize metadataByIdentifier=_metadataByIdentifier;
@property(readonly, copy, nonatomic) NSArray *playActivityIdentifiers; // @synthesize playActivityIdentifiers=_playActivityIdentifiers;
// - (void).cxx_destruct;
- (void)processResponse;
- (id)initWithIdentifiers:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

