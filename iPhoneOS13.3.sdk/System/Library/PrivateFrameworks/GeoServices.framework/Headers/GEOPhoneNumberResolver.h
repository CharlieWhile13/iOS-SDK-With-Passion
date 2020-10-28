//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GEOPhoneNumberResolving;

@interface GEOPhoneNumberResolver : NSObject
{
    id <GEOPhoneNumberResolving> _resolver;
}

+ (void)useRemoteResolver;
+ (void)useLocalResolver;
+ (void)useProxy:(Class)arg1;
+ (id)sharedResolver;
// - (void).cxx_destruct;
- (void)_alePackResolution:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2 queue:(id)arg3;
- (void)resolvePhoneNumbers:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2 queue:(id)arg3;
- (id)init;

@end

