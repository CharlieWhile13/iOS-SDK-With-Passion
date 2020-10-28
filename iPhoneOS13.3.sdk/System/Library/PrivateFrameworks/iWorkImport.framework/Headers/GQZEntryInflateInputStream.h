//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQZEntryInputStream-Protocol.h>

@protocol GQZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface GQZEntryInflateInputStream : NSObject <GQZEntryInputStream>
{
    struct z_stream_s mStream;
    long long mOffset;
    long long mEnd;
    NSUInteger mCalculatedCrc;
    NSUInteger mCheckCrc;
    id <GQZArchiveInputStream> mInput;
    char mOutBuffer;
    NSUInteger mOutBufferSize;
}

- (NSUInteger)readToBuffer:(char )arg1 size:(NSUInteger)arg2;
- (void)readToOwnBuffer:(const char )arg1 size:(NSUInteger )arg2;
- (void)dealloc;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(NSUInteger)arg3 crc:(NSUInteger)arg4 input:(id)arg5;

@end

