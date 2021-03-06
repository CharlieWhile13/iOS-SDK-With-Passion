//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSXPCConnection;

@interface IDSXPCConnectionTimeoutProxy : NSObject
{
    id _target;
    IDSXPCConnection *_connection;
    double _timeout;
    id /* CDUnknownBlockType */ _errorHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) IDSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) id target; // @synthesize target=_target;
// - (void).cxx_destruct;
- (BOOL)_invocationHasBlock:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 timeoutInSeconds:(double)arg3 errorHandler:(id /* CDUnknownBlockType */)arg4;

@end

