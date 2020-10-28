//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, PGGraphNode;

@interface PGPotentialPeopleMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_peopleNode;
    long long _year;
    NSArray *_facedAssets;
}

@property(retain) NSArray *facedAssets; // @synthesize facedAssets=_facedAssets;
@property(readonly) long long year; // @synthesize year=_year;
@property(retain) PGGraphNode *peopleNode; // @synthesize peopleNode=_peopleNode;
// - (void).cxx_destruct;
- (void)addMomentNode:(id)arg1;
- (id)initWithSubcategory:(NSUInteger)arg1 peopleNode:(id)arg2 year:(long long)arg3;

@end

