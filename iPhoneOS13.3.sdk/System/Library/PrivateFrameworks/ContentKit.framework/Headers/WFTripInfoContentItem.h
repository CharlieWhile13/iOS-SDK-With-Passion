//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class WFTripInfo;

@interface WFTripInfoContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id )arg3;
- (id)distance;
- (id)routeName;
- (id)arrivalTime;
- (id)travelTime;
@property(readonly, nonatomic) WFTripInfo *tripInfo;

@end

