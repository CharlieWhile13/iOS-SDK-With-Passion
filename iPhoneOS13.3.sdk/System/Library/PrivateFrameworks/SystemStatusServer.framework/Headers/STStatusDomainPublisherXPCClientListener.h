//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSXPCListener;
@protocol STStatusDomainPublisherServerHandle;

@interface STStatusDomainPublisherXPCClientListener : NSObject <NSXPCListenerDelegate>
{
    id <STStatusDomainPublisherServerHandle> _serverHandle;
    NSXPCListener *_xpcListener;
}

@property(readonly, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(readonly, nonatomic) __weak id <STStatusDomainPublisherServerHandle> serverHandle; // @synthesize serverHandle=_serverHandle;
// - (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)initWithServerHandle:(id)arg1;

@end

