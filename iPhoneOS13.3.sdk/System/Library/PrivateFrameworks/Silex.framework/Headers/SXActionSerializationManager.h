//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionSerializationManager-Protocol.h>
#import <Silex/SXActionSerializer-Protocol.h>

@class NSMutableDictionary;

@interface SXActionSerializationManager : NSObject <SXActionSerializer, SXActionSerializationManager>
{
    NSMutableDictionary *_serializers;
}

@property(readonly, nonatomic) NSMutableDictionary *serializers; // @synthesize serializers=_serializers;
// - (void).cxx_destruct;
- (void)registerSerializer:(id)arg1 actionType:(id)arg2;
- (id)URLForAction:(id)arg1 type:(long long)arg2;
- (id)init;

@end

