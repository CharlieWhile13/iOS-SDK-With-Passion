//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesGeotaggable-Protocol.h>

@class NSString;

@interface PXPlacesTestDataPoint : NSObject <PXPlacesGeotaggable>
{
    struct CLLocationCoordinate2D _coordinate;
    NSString *_name;
}

@property(readonly) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
@property(readonly) CGImage image;
- (long long)compareTo:(id)arg1;
- (struct CLLocationCoordinate2D)coordinate;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 location:(struct CLLocationCoordinate2D)arg2;

@end

