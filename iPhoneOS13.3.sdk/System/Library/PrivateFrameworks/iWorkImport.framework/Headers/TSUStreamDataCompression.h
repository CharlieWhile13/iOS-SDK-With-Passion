//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUStreamCompression.h>

@class NSObject;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface TSUStreamDataCompression : TSUStreamCompression
{
    NSObject<OS_dispatch_data> *_outputData;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *outputData;
- (void)setHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)handleData:(id)arg1 isDone:(BOOL)arg2;
- (id)initWithAlgorithm:(int)arg1 operation:(int)arg2;

@end

