//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ATVModel : NSObject
{
    NSDictionary *_atvLUT;
}

+ (NSUInteger)atvStateFromState:(struct BTStatus )arg1;
+ (void)addTuple:(id)arg1 ToLUT:(id)arg2;
@property(retain) NSDictionary *atvLUT; // @synthesize atvLUT=_atvLUT;
// - (void).cxx_destruct;
- (id)findTupleForATVState:(NSUInteger)arg1;
- (id)init;

@end

