//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLParallelRenderCommandEncoder-Protocol.h>

@protocol MTLRenderCommandEncoder;

@protocol MTLParallelRenderCommandEncoderSPI <MTLParallelRenderCommandEncoder>
@property BOOL separateCommits;

@optional
- (id <MTLRenderCommandEncoder>)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 )arg1 capacity:(NSUInteger)arg2;
@end
