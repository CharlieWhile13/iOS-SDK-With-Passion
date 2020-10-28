//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNCommuteDestination, MNCommuteDestinationSuggestion, NSDate, NSHashTable, NSString;

@interface MNCommuteDestinationScore : NSObject
{
    BOOL _destinationInvalid;
    int _score;
    NSDate *_lastUpdate;
    MNCommuteDestination *_destination;
    NSString *_descriptionExtras;
    NSHashTable *_observers;
}

+ (id)sessionStartDateOrNow;
+ (id)sessionStartDate;
+ (void)setSessionStartDate:(id)arg1;
+ (double)weight;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSString *descriptionExtras; // @synthesize descriptionExtras=_descriptionExtras;
@property(nonatomic) __weak MNCommuteDestination *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(readonly, nonatomic) int score; // @synthesize score=_score;
@property(readonly, nonatomic) BOOL destinationInvalid; // @synthesize destinationInvalid=_destinationInvalid;
// - (void).cxx_destruct;
- (id)description;
- (void)notifyObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly) MNCommuteDestinationSuggestion *destinationSuggestion;
- (void)lastUpdateIsNow;
- (void)updateScoreIfPossible;
@property(readonly) double weightedScore;
- (id)initWithDestination:(id)arg1;
- (id)init;

@end

