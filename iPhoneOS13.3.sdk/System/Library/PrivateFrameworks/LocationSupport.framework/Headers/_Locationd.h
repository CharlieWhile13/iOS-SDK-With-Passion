//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LocationSupport/CLIntersiloServiceProtocol-Protocol.h>

@interface _Locationd : NSObject <CLIntersiloServiceProtocol>
{
    BOOL _valid;
}

+ (void)performSyncOnSilo:(id)arg1 invoker:(id /* CDUnknownBlockType */)arg2;
+ (void)becameFatallyBlocked:(id)arg1 index:(NSUInteger)arg2;
+ (id)getSilo;
+ (BOOL)isSupported;
@property(nonatomic) BOOL valid; // @synthesize valid=_valid;

@end

