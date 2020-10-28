//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _REMInProgressSaveRequestsContainer : NSObject
{
    NSMutableArray *_inProgressSaveRequests;
}

@property(retain, nonatomic) NSMutableArray *inProgressSaveRequests; // @synthesize inProgressSaveRequests=_inProgressSaveRequests;
// - (void).cxx_destruct;
- (id)_firstMatchInSaveRequests:(id /* CDUnknownBlockType */)arg1;
- (id)_latestSaveInProgressReminderForObjectID:(id)arg1 fallbackAccount:(id)arg2 fallbackList:(id)arg3 fallbackParentList:(id)arg4 fallbackParentReminder:(id)arg5 saveRequest:(id)arg6;
- (id)_latestSaveInProgressListForObjectID:(id)arg1 fallbackAccount:(id)arg2 fallbackParentList:(id)arg3 saveRequest:(id)arg4;
- (id)_latestSaveInProgressAccountForObjectID:(id)arg1 saveRequest:(id)arg2;
- (id)latestSaveInProgressReminderForReminderChangeItem:(id)arg1;
- (id)latestSaveInProgressReminder:(id)arg1;
- (id)latestSaveInProgressList:(id)arg1;
- (id)latestSaveInProgressAccount:(id)arg1;
- (void)saveRequestSaveDidFinish:(id)arg1;
- (void)saveRequestSaveDidStart:(id)arg1;
- (id)init;

@end

