//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol OS_dispatch_queue, TSUStreamWriteChannel;

__attribute__((visibility("hidden")))
@interface TSPCGDataConsumer : NSObject
{
    NSObject<OS_dispatch_queue> *_writeQueue;
    id <TSUStreamWriteChannel> _writeChannel;
    NSError *_error;
}

+ (CGDataConsumer )newCGDataConsumerForWriteChannel:(id)arg1;
// - (void).cxx_destruct;
- (void)_close;
- (void)close;
- (NSUInteger)putBytes:(const void )arg1 count:(NSUInteger)arg2;
- (id)initWithWriteChannel:(id)arg1;
- (id)init;

@end

