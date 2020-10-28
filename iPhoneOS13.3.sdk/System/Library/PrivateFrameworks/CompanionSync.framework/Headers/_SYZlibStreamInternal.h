//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/_SYStreamGuts.h>


@interface _SYZlibStreamInternal : _SYStreamGuts <NSLocking>
{
    struct z_stream_s _zStream;
    NSUInteger _inputSize;
    NSUInteger _outputSize;
    char _input;
    char _output;
    NSUInteger _writeOffset;
    NSUInteger _readOffset;
//     struct os_unfair_lock_s _lock;
}

- (long long)readOutputToStream:(id)arg1;
- (long long)readOutputToBuffer:(void )arg1 length:(long long)arg2;
- (long long)writeInputFromStream:(id)arg1;
- (long long)writeInputFromBuffer:(const void )arg1 length:(long long)arg2;
@property(readonly, nonatomic) const void outputPtr;
@property(readonly, nonatomic) long long outputAvailable;
@property(readonly, nonatomic) void inputPtr;
@property(readonly, nonatomic) long long inputRoom;
- (void)setStatusForStream:(id)arg1;
- (void)setZlibError:(int)arg1 forStream:(id)arg2;
- (void)setOutputSize:(long long)arg1;
- (void)setInputSize:(long long)arg1;
- (void)synchronized:(id /* CDUnknownBlockType */)arg1;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;

@end

