//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface BSActionListenerToken : NSObject
{
    unsigned int _port;
    NSObject<OS_xpc_object> *_endpoint;
}

@property(retain, nonatomic) NSObject<OS_xpc_object> *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1 endpoint:(id)arg2;

@end

