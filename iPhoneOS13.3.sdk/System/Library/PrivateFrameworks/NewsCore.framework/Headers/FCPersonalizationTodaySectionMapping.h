//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NTPBTodaySectionsMapping;

@interface FCPersonalizationTodaySectionMapping : NSObject
{
    NTPBTodaySectionsMapping *_pbTodaySectionMapping;
    NSDictionary *_todaySectionIdentifiersToFRGroupViewExposureTypes;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *todaySectionIdentifiersToFRGroupViewExposureTypes; // @synthesize todaySectionIdentifiersToFRGroupViewExposureTypes=_todaySectionIdentifiersToFRGroupViewExposureTypes;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)groupViewExposureTypesForTodaySectionIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPBTodaySectionMapping:(id)arg1;

@end

