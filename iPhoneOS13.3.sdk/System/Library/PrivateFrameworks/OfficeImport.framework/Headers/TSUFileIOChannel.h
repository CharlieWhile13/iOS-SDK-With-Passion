//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/TSURandomWriteChannel-Protocol.h>
#import <OfficeImport/TSUReadChannel-Protocol.h>
#import <OfficeImport/TSUStreamWriteChannel-Protocol.h>

@protocol OS_dispatch_io, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUFileIOChannel : NSObject <TSUReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel>
{
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_io> *_channel;
    BOOL _isClosed;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValid;
- (void)truncateToLength:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)flushWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)addBarrier:(id /* CDUnknownBlockType */)arg1;
- (void)setLowWater:(NSUInteger)arg1;
- (void)close;
- (void)writeData:(id)arg1 offset:(long long)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)writeData:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)readWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)readFromOffset:(long long)arg1 length:(NSUInteger)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)dealloc;
- (id)initWithType:(NSUInteger)arg1 descriptor:(int)arg2 queue:(id)arg3 cleanupHandler:(id /* CDUnknownBlockType */)arg4;
- (id)initForRandomReadingWritingURL:(id)arg1 error:(id )arg2 cleanupHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initForRandomReadingWritingURL:(id)arg1 error:(id )arg2;
- (id)initForRandomWritingURL:(id)arg1 error:(id )arg2 cleanupHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initForRandomWritingURL:(id)arg1 error:(id )arg2;
- (id)initForStreamWritingURL:(id)arg1 error:(id )arg2 cleanupHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initForStreamWritingURL:(id)arg1 error:(id )arg2;
- (id)initForReadingDescriptor:(int)arg1 queue:(id)arg2 cleanupHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initForReadingURL:(id)arg1 error:(id )arg2 cleanupHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initForReadingURL:(id)arg1 error:(id )arg2;
- (id)initWithType:(NSUInteger)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4 error:(id )arg5 cleanupHandler:(id /* CDUnknownBlockType */)arg6;

@end

