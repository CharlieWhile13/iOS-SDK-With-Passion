//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCPeerID, NSString;

@interface AXSSInterDeviceSearchResult : NSObject
{
    NSString *_deviceType;
    MCPeerID *_peerID;
}

+ (id)searchResultWithPeerID:(id)arg1 deviceType:(id)arg2;
@property(retain, nonatomic) MCPeerID *peerID; // @synthesize peerID=_peerID;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *name;
- (id)initWithPeerID:(id)arg1 deviceType:(id)arg2;

@end

