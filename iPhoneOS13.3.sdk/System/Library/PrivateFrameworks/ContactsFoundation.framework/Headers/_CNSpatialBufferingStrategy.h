//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/_CNBufferingStrategy-Protocol.h>

@interface _CNSpatialBufferingStrategy : NSObject <_CNBufferingStrategy>
{
    NSUInteger _capacity;
}

- (void)bufferDidSendResults:(id)arg1;
- (void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3;
- (id)initWithCapacity:(NSUInteger)arg1;

@end

