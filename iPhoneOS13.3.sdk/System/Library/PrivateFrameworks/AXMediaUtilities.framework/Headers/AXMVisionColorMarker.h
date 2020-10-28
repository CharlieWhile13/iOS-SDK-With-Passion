//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMVisionColor.h>

@class NSString;

@interface AXMVisionColorMarker : AXMVisionColor
{
    NSString *_localizedName;
}

+ (id)closestMarkerToColor:(id)arg1 withMaximumThreshold:(double)arg2;
+ (id)allColorMarkers;
+ (id)colorWithHueDegrees:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 localizedName:(id)arg4;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
// - (void).cxx_destruct;
- (id)description;

@end

