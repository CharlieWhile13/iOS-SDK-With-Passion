//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface IMPeople : NSObject
{
    NSMutableArray *_people;
    int _coalesceCount;
    BOOL _hidePeople;
}

@property(nonatomic, setter=setShouldHidePeople:) BOOL hidePeople; // @synthesize hidePeople=_hidePeople;
// - (void).cxx_destruct;
- (void)imHandle:(id)arg1 buddyStatusChanged:(BOOL)arg2;
- (BOOL)addPeopleFromArray:(id)arg1;
- (BOOL)addPeopleFromArray:(id)arg1 skipMe:(BOOL)arg2;
- (BOOL)removePeopleFromArray:(id)arg1;
- (BOOL)removeIMHandle:(id)arg1;
- (BOOL)addIMHandle:(id)arg1;
@property(readonly, nonatomic) BOOL coalescingChanges;
- (void)endCoalescedChanges;
- (void)beginCoalescedChanges;
- (void)removedIMHandle:(id)arg1;
- (void)_addedPeople:(id)arg1;
- (void)addedIMHandle:(id)arg1;
@property(readonly, nonatomic) NSArray *people;
@property(readonly, nonatomic) NSArray *groups;
- (BOOL)containsIMHandle:(id)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (void)addNotificationObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeNotificationObserver:(id)arg1;
- (void)dealloc;

@end

