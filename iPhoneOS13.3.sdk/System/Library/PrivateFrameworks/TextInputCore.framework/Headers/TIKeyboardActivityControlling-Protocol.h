//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol TIKeyboardActivityObserving;

@protocol TIKeyboardActivityControlling <NSObject>
@property(readonly, nonatomic) NSUInteger activityState;
- (void)removeActivityObserver:(id <TIKeyboardActivityObserving>)arg1;
- (void)addActivityObserver:(id <TIKeyboardActivityObserving>)arg1;
@end

