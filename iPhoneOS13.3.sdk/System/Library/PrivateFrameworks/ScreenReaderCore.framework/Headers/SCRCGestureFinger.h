//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCRCGestureFinger : NSObject
{
    NSUInteger _identifier;
    CGPoint _location;
    double _pressure;
}

- (long long)type;
- (double)pressure;
- (CGPoint)location;
- (NSUInteger)identifier;
- (id)description;
- (id)initWithIdentifier:(NSUInteger)arg1 location:(CGPoint)arg2 pressure:(double)arg3;

@end

