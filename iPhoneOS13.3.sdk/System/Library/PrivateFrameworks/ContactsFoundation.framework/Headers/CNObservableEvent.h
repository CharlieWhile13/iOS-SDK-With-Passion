//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface CNObservableEvent : NSObject
{
}

+ (id)failureEventWithError:(id)arg1;
+ (id)completionEvent;
+ (id)eventWithResult:(id)arg1;
- (void)dematerializeWithObserver:(id)arg1;
@property(readonly, copy, nonatomic) NSError *error;
@property(readonly, nonatomic) id value;
@property(readonly, nonatomic) BOOL hasValue;
@property(readonly, nonatomic) NSUInteger eventType;

@end

