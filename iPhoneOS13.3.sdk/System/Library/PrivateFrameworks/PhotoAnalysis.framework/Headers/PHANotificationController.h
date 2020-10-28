//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PGManager;

@interface PHANotificationController : NSObject
{
    PGManager *_graphManager;
}

// - (void).cxx_destruct;
- (void)postNotificationForSuggestion:(id)arg1 deliveryDate:(id)arg2;
- (void)fireNotificationForSuggestionIdentifiers:(id)arg1;
- (void)postNotificationForMemory:(id)arg1 withCreationReason:(NSUInteger)arg2;
- (void)fireNotificationForMemoryIdentifiers:(id)arg1 withCreationReason:(NSUInteger)arg2;
- (BOOL)shouldFireNotificationForMemories:(id)arg1 withCreationReason:(NSUInteger)arg2;
- (id)bestDateForDeliveringNotification;
- (BOOL)userIsActivelyUsingPhotos;
- (id)initWithGraphManager:(id)arg1;

@end

