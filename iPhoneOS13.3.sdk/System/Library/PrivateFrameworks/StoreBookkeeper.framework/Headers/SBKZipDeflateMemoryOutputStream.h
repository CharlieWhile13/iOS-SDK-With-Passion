//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface SBKZipDeflateMemoryOutputStream : NSObject
{
    NSMutableData *deflatedData;
    struct z_stream_s zstream;
    char _outputBuffer;
    int _bufferingSize;
}

+ (id)dataByDeflatingData:(id)arg1;
// - (void).cxx_destruct;
- (BOOL)writeBuffer:(const char )arg1 size:(NSUInteger)arg2;
- (id)close;
- (void)dealloc;
- (id)initWithBufferingSize:(int)arg1 compressionType:(NSUInteger)arg2;

@end

