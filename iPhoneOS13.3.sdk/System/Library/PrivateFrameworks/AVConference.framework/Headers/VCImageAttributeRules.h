//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCImageAttributeRules : NSObject
{
    NSMutableDictionary *_imageAttributeRules;
}

@property(retain, nonatomic) NSMutableDictionary *imageAttributeRules; // @synthesize imageAttributeRules=_imageAttributeRules;
- (void)interfaceKey:(id )arg1 forInterface:(int)arg2 directionKey:(id )arg3 forDirection:(int)arg4;
- (void)swapSendAndReceiveRules;
- (id)extractDimensionsForInterface:(int)arg1 direction:(int)arg2;
- (void)addRuleForVideoPayload:(int)arg1 withDirection:(int)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 priority:(int)arg6 interface:(int)arg7;
- (id)description;
- (void)dealloc;
- (id)init;

@end

