//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TeaUI/TUCommandCenterType-Protocol.h>

@class MISSING_TYPE;

@interface TUCommandCenter : NSObject <TUCommandCenterType>
{
    MISSING_TYPE *commandCenter;
}

+ (void)setSharedCommandCenter:(id)arg1;
+ (id)sharedCommandCenter;
// - (void).cxx_destruct;
- (id)init;
- (long long)stateForCommand:(id)arg1;
- (void)removeContextProvider:(id)arg1 forCommand:(id)arg2;
- (void)removeContextProvider:(id)arg1;
- (void)addContextProvider:(id)arg1 forCommand:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)canExecuteCommand:(id)arg1;
- (void)executeCommand:(id)arg1;

@end

