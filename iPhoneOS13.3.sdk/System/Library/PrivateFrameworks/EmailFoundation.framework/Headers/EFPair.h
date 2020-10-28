//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol NSObject;

@interface EFPair : NSObject <NSCopying>
{
    id <NSObject> _first;
    id <NSObject> _second;
}

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
@property(readonly, nonatomic) id <NSObject> second; // @synthesize second=_second;
@property(readonly, nonatomic) id <NSObject> first; // @synthesize first=_first;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqualToPair:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end

