//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservableEvent.h>

@interface _CNObservableResultEvent : CNObservableEvent
{
    id _result;
}

// - (void).cxx_destruct;
- (void)dematerializeWithObserver:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)error;
- (id)value;
- (BOOL)hasValue;
- (NSUInteger)eventType;
- (id)description;
- (id)initWithResult:(id)arg1;

@end

