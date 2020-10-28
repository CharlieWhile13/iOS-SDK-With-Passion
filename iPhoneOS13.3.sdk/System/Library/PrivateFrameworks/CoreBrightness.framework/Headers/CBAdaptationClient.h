//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CBAdaptationClient : NSObject
{
    BOOL _supported;
}

+ (BOOL)supportsAdaptation;
@property BOOL supported; // @synthesize supported=_supported;
- (BOOL)animateFromWeakestAdaptationModeInArray:(int )arg1 withLength:(int)arg2 toWeakestInArray:(int )arg3 withLength:(int)arg4 withProgress:(float)arg5 andPeriod:(float)arg6;
- (BOOL)getStrengths:(float )arg1 nStrengths:(int)arg2;
- (BOOL)overrideStrengths:(float )arg1 forModes:(int )arg2 nModes:(int)arg3;
- (BOOL)setAdaptationMode:(int)arg1 withPeriod:(float)arg2;
- (BOOL)setWeakestAdaptationModeFromArray:(int )arg1 withLength:(int)arg2 andPeriod:(float)arg3;
- (int)getAdaptationMode;
- (BOOL)getEnabled;
- (BOOL)setEnabled:(BOOL)arg1;
- (id)init;
- (id)initWithClientObj:(id)arg1;

@end

