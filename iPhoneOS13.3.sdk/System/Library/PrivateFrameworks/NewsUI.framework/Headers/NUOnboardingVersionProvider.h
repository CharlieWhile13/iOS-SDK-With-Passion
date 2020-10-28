//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdContextProvider-Protocol.h>

@interface NUOnboardingVersionProvider : NSObject <NUAdContextProvider>
{
    long long _onboardingVersion;
}

@property(readonly, nonatomic) long long onboardingVersion; // @synthesize onboardingVersion=_onboardingVersion;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithOnboardingVersion:(long long)arg1;

@end

