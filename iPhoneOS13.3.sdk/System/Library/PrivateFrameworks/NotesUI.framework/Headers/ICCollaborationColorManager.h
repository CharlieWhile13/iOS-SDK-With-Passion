//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ICCollaborationColorManager : NSObject
{
    NSMutableDictionary *_userIDToColorsDict;
    NSMutableArray *_colorUsageCounts;
    NSUInteger _colorUsageCountMinimum;
}

+ (id)participantColors;
@property(nonatomic) NSUInteger colorUsageCountMinimum; // @synthesize colorUsageCountMinimum=_colorUsageCountMinimum;
@property(retain, nonatomic) NSMutableArray *colorUsageCounts; // @synthesize colorUsageCounts=_colorUsageCounts;
@property(retain, nonatomic) NSMutableDictionary *userIDToColorsDict; // @synthesize userIDToColorsDict=_userIDToColorsDict;
// - (void).cxx_destruct;
- (id)participantAXDisplayNameForUserID:(id)arg1 forNote:(id)arg2;
- (id)containerScopedUserRecordNameForAccount:(id)arg1;
- (id)baseColorValuesForUserID:(id)arg1;
- (UIColor )highlightColorForUserID:(id)arg1 withPercentage:(double)arg2 forNote:(id)arg3 darkAppearance:(BOOL)arg4;
- (id)init;

@end

