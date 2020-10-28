//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueIdentifier-Protocol.h>

@class NSArray;

@interface GEOVenueIdentifier : NSObject <GEOVenueIdentifier>
{
    BOOL _hasVenueID;
    NSUInteger _venueID;
    BOOL _hasFeatureID;
    NSUInteger _featureID;
    BOOL _hasBusinessID;
    NSUInteger _businessID;
    NSArray *_componentIdentifiers;
    NSArray *_originalIdentifiers;
}

+ (id)componentIdentifiersFromVenueIdentifiers:(id)arg1;
@property(readonly, nonatomic) NSArray *componentIdentifiers; // @synthesize componentIdentifiers=_componentIdentifiers;
@property(readonly, nonatomic) NSUInteger businessID; // @synthesize businessID=_businessID;
@property(readonly, nonatomic, getter=_hasBusinessID) BOOL hasBusinessID; // @synthesize hasBusinessID=_hasBusinessID;
@property(readonly, nonatomic) NSUInteger featureID; // @synthesize featureID=_featureID;
@property(readonly, nonatomic, getter=_hasFeatureID) BOOL hasFeatureID; // @synthesize hasFeatureID=_hasFeatureID;
@property(readonly, nonatomic) NSUInteger venueID; // @synthesize venueID=_venueID;
@property(readonly, nonatomic, getter=_hasVenueID) BOOL hasVenueID; // @synthesize hasVenueID=_hasVenueID;
// - (void).cxx_destruct;
- (id)placeDataVenueIdentifierForVenue;
- (id)placeDataVenueIdentifier;
- (id)initWithVenueID:(NSUInteger)arg1 featureID:(NSUInteger)arg2 businessID:(NSUInteger)arg3;
- (id)initWithVenueID:(NSUInteger)arg1;
- (id)initWithVenueID:(NSUInteger)arg1 featureID:(NSUInteger)arg2 businessID:(NSUInteger)arg3 componentIdentifiers:(id)arg4;
- (id)initWithVenueID:(NSUInteger)arg1 componentIdentifiers:(id)arg2;
- (id)initWithVenueIdentifiers:(id)arg1;
- (id)init;

@end

