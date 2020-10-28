//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponents, NSNumber;

@interface HAMenstrualAlgorithmsDayStreamProcessorConfig : NSObject
{
    float _menstruationStartCoefficient;
    float _menstruationEndCoefficient;
    float _fertilityStartCoefficient;
    float _fertilityEndCoefficient;
    float _projectionOffCoefficient;
    unsigned int _todayAsJulianDay;
    NSNumber *_userReportedCycleLength;
    NSNumber *_julianDayOfUserReportedCycleLength;
    NSNumber *_userReportedMenstruationLength;
    NSNumber *_julianDayOfUserReportedMenstruationLength;
    NSDateComponents *_birthDateComponents;
}

@property(nonatomic) unsigned int todayAsJulianDay; // @synthesize todayAsJulianDay=_todayAsJulianDay;
@property(nonatomic) float projectionOffCoefficient; // @synthesize projectionOffCoefficient=_projectionOffCoefficient;
@property(nonatomic) float fertilityEndCoefficient; // @synthesize fertilityEndCoefficient=_fertilityEndCoefficient;
@property(nonatomic) float fertilityStartCoefficient; // @synthesize fertilityStartCoefficient=_fertilityStartCoefficient;
@property(nonatomic) float menstruationEndCoefficient; // @synthesize menstruationEndCoefficient=_menstruationEndCoefficient;
@property(nonatomic) float menstruationStartCoefficient; // @synthesize menstruationStartCoefficient=_menstruationStartCoefficient;
@property(retain, nonatomic) NSDateComponents *birthDateComponents; // @synthesize birthDateComponents=_birthDateComponents;
@property(retain, nonatomic) NSNumber *julianDayOfUserReportedMenstruationLength; // @synthesize julianDayOfUserReportedMenstruationLength=_julianDayOfUserReportedMenstruationLength;
@property(retain, nonatomic) NSNumber *userReportedMenstruationLength; // @synthesize userReportedMenstruationLength=_userReportedMenstruationLength;
@property(retain, nonatomic) NSNumber *julianDayOfUserReportedCycleLength; // @synthesize julianDayOfUserReportedCycleLength=_julianDayOfUserReportedCycleLength;
@property(retain, nonatomic) NSNumber *userReportedCycleLength; // @synthesize userReportedCycleLength=_userReportedCycleLength;
// - (void).cxx_destruct;

@end

