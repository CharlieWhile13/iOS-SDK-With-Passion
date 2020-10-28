//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BLTBulletinDistributorSubscriberList, NSXPCListener;
@protocol BLTBulletinDistributorSubscriberDeviceDelegate;

@interface BLTPingSubscriberManager : NSObject <NSXPCListenerDelegate>
{
    BLTBulletinDistributorSubscriberList *_subscribers;
    NSXPCListener *_listener;
    id <BLTBulletinDistributorSubscriberDeviceDelegate> _deviceDelegate;
}

@property(retain, nonatomic) id <BLTBulletinDistributorSubscriberDeviceDelegate> deviceDelegate; // @synthesize deviceDelegate=_deviceDelegate;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) BLTBulletinDistributorSubscriberList *subscribers; // @synthesize subscribers=_subscribers;
// - (void).cxx_destruct;
- (void)_loadPingSubscriberBundles:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithDeviceDelegate:(id)arg1;

@end

