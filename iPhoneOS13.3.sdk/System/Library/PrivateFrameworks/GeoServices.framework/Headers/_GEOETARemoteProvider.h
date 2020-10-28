//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _GEOETARemoteProvider : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    id /* CDUnknownBlockType */ _willSendRequestHandler;
    id /* CDUnknownBlockType */ _finishedHandler;
    id /* CDUnknownBlockType */ _networkActivityHandler;
    id /* CDUnknownBlockType */ _errorHandler;
}

+ (id)provderWithWillSendRequest:(id /* CDUnknownBlockType */)arg1 finished:(id /* CDUnknownBlockType */)arg2 networkActivity:(id /* CDUnknownBlockType */)arg3 error:(id /* CDUnknownBlockType */)arg4;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ networkActivityHandler; // @synthesize networkActivityHandler=_networkActivityHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ willSendRequestHandler; // @synthesize willSendRequestHandler=_willSendRequestHandler;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;

@end

