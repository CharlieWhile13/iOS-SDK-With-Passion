//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AWAttentionEvent;

@protocol AWFrameworkClient <NSObject>
- (void)notifyPollEventType:(NSUInteger)arg1 event:(AWAttentionEvent *)arg2;
- (void)notifyEvent:(AWAttentionEvent *)arg1;
- (void)notify:(NSUInteger)arg1;
@end

