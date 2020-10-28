//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface AXMVisionColor : NSObject <NSSecureCoding>
{
    unsigned char _red;
    unsigned char _green;
    unsigned char _blue;
    unsigned char _hue;
    unsigned char _saturation;
    unsigned char _brightness;
}

+ (BOOL)supportsSecureCoding;
+ (id)colorWithHueDegrees:(double)arg1 saturation:(double)arg2 brightness:(double)arg3;
+ (id)colorWithHue:(unsigned char)arg1 saturation:(unsigned char)arg2 brightness:(unsigned char)arg3;
+ (id)colorWithRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;
@property(readonly, nonatomic) double brightnessFloat;
@property(readonly, nonatomic) double saturationFloat;
- (double)hueRadians;
@property(readonly, nonatomic) double hueFloat;
@property(readonly, nonatomic) double blueFloat;
@property(readonly, nonatomic) double greenFloat;
@property(readonly, nonatomic) double redFloat;
- (double)euclidianDistanceHS:(id)arg1;
- (double)euclidianDistanceHSV:(id)arg1;
- (void)_getRed:(char )arg1 green:(char )arg2 blue:(char )arg3;
- (void)_getHue:(char )arg1 saturation:(char )arg2 brightness:(char )arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToAXMVisionColor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

