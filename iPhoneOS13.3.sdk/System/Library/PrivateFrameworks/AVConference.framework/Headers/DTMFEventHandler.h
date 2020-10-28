//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DTMFEventHandler : NSObject
{
    NSMutableArray *dtmfEventQueue;
    NSObject<OS_dispatch_queue> *dtmfQueue;
    int _currentEventState;
    BOOL currentEventNeedsEndBlock;
    NSUInteger currentEventRetransmitFinalPacketCount;
    unsigned char currentEvent;
    unsigned char currentVolume;
    unsigned int currentStartTimestamp;
    unsigned int currentDurationCounter;
    unsigned int currentEndTimestamp;
    unsigned int _currentPauseCompleteTimestamp;
}

- (BOOL)shouldAdjustForLastPauseCompleteTimestamp:(unsigned int )arg1;
- (int)constructDTMFEventPacketWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 durationCounter:(unsigned int)arg3 interval:(unsigned int)arg4 dataBuffer:(char )arg5 isEnd:(BOOL)arg6;
- (BOOL)shouldTransmitDTMFWithTimestamp:(unsigned int)arg1;
- (void)stopDTMFEventAtTimestamp:(unsigned int)arg1 withSampleRate:(unsigned int)arg2;
- (void)sendingDTMFEventWithTimeStamp:(unsigned int)arg1 interval:(unsigned int)arg2 RTPHandle:(struct tagHANDLE )arg3;
- (void)sendDTMFEvent:(id)arg1 atTimestamp:(unsigned int)arg2 withSampleRate:(unsigned int)arg3;
- (BOOL)insertStopBlockWithEndTimestamp:(unsigned int)arg1 withPauseCompleteTimestamp:(unsigned int)arg2;
- (BOOL)insertStartBlockWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 timestamp:(unsigned int)arg3;
- (void)dealloc;
- (id)init;

@end

