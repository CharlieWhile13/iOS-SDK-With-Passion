//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapBuildingSection-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOMapAccessBuildingSection : NSObject <GEOMapBuildingSection>
{
    CDStruct_c3b9c2ee _coordinates;
    NSUInteger _coordinateCount;
    double _baseHeight;
    double _height;
    NSUInteger _sectionIndex;
    CDStruct_2c43369c _centerCoordinate;
    double _radius;
}

@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CDStruct_c3b9c2ee centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double baseHeight; // @synthesize baseHeight=_baseHeight;
@property(readonly, nonatomic) NSUInteger coordinateCount; // @synthesize coordinateCount=_coordinateCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinates; // @synthesize coordinates=_coordinates;
- (void)dealloc;
- (id)initWithFeature:(CDStruct_0c54f6ee )arg1 sectionIndex:(NSUInteger)arg2;

@end

