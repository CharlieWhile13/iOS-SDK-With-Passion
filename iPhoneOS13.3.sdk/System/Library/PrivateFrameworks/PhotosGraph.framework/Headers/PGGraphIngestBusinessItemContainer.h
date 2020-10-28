//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestBusiness-Protocol.h>

@class CLSBusinessItem, CLSLocationOfInterestVisit, NSArray, NSDateInterval, NSString;

@interface PGGraphIngestBusinessItemContainer : NSObject <PGGraphIngestBusiness>
{
    CLSBusinessItem *_businessItem;
    CLSLocationOfInterestVisit *_visit;
    NSDateInterval *_dateInterval;
}

@property(readonly, nonatomic) CLSLocationOfInterestVisit *visit; // @synthesize visit=_visit;
@property(readonly, nonatomic) CLSBusinessItem *businessItem; // @synthesize businessItem=_businessItem;
// - (void).cxx_destruct;
@property(readonly, nonatomic) long long venueCapacity;
@property(readonly, nonatomic) double routineVisitConfidence;
@property(readonly, nonatomic) BOOL hasRoutineVisit;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) NSArray *businessCategories;
@property(readonly, nonatomic) NSUInteger muid;
@property(readonly, nonatomic) NSString *name;
- (void)updateBusinessItem:(id)arg1;
- (id)initWithBusinessItem:(id)arg1 dateInterval:(id)arg2;
- (id)initWithBusinessItem:(id)arg1 visit:(id)arg2;
- (id)initWithBusinessItem:(id)arg1 visit:(id)arg2 dateInterval:(id)arg3;

@end

