//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLSerializerCommandEncoder.h>

#import <MTLSimDriver/MTLComputeCommandEncoderSPI-Protocol.h>

@protocol MTLSerializerBuffer, MTLSerializerComputePipelineState, MTLSerializerSamplerState, MTLSerializerTexture;

__attribute__((visibility("hidden")))
@interface MTLSerializerComputeCommandEncoder : MTLSerializerCommandEncoder <MTLComputeCommandEncoderSPI>
{
    BOOL hadSplit;
    id <MTLSerializerBuffer> buffers[31];
    id <MTLSerializerTexture> textures[128];
    id <MTLSerializerSamplerState> samplers[16];
    id <MTLSerializerComputePipelineState> pipelineState;
}

- (void)executeCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2;
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(NSUInteger)arg3;
- (void)setImageblockWidth:(NSUInteger)arg1 height:(NSUInteger)arg2;
- (NSUInteger)getType;
- (void)memoryBarrierWithScope:(NSUInteger)arg1;
- (void)memoryBarrierWithResources:(const id )arg1 count:(NSUInteger)arg2;
- (id)newKernelDebugInfo;
- (void)waitForFence:(id)arg1;
- (void)updateFence:(id)arg1;
- (void)setThreadgroupMemoryLength:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setTextures:(const id )arg1 withRange:(NSRange)arg2;
- (void)setTexture:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2;
- (void)setStageInRegion:(CDStruct_caaed6bc)arg1;
- (void)setSamplerStates:(const id )arg1 withRange:(NSRange)arg2;
- (void)setSamplerStates:(const id )arg1 lodMinClamps:(const float )arg2 lodMaxClamps:(const float )arg3 withRange:(NSRange)arg4;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(NSUInteger)arg4;
- (void)setSamplerState:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setComputePipelineState:(id)arg1;
- (void)setBytes:(const void )arg1 length:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(NSRange)arg3;
- (void)setBufferOffset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)dispatchThreads:(CDStruct_da2e99ad)arg1 threadsPerThreadgroup:(CDStruct_da2e99ad)arg2;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 threadsPerThreadgroup:(CDStruct_da2e99ad)arg3;
- (void)dispatchThreadgroups:(CDStruct_da2e99ad)arg1 threadsPerThreadgroup:(CDStruct_da2e99ad)arg2;
- (BOOL)handleSplits;
- (void)beginSegment:(BOOL)arg1;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1 dispatchType:(NSUInteger)arg2;
- (void)split;

@end

