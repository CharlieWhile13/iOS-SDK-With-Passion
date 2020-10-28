//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsRenderCommandEncoder.h>

@class MTLCountersTraceRenderCommandEncoder;

@interface MTLCountersRenderCommandEncoder : MTLToolsRenderCommandEncoder
{
    MTLCountersTraceRenderCommandEncoder *_traceEncoder;
}

- (void)memoryBarrierWithResources:(const id )arg1 count:(NSUInteger)arg2 afterStages:(NSUInteger)arg3 beforeStages:(NSUInteger)arg4;
- (void)memoryBarrierWithScope:(NSUInteger)arg1 afterStages:(NSUInteger)arg2 beforeStages:(NSUInteger)arg3;
- (void)drawIndexedPatches:(NSUInteger)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(NSUInteger)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(NSUInteger)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(NSUInteger)arg7;
- (void)drawIndexedPatches:(NSUInteger)arg1 patchStart:(NSUInteger)arg2 patchCount:(NSUInteger)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(NSUInteger)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(NSUInteger)arg7 instanceCount:(NSUInteger)arg8 baseInstance:(NSUInteger)arg9;
- (void)drawPatches:(NSUInteger)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(NSUInteger)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(NSUInteger)arg5;
- (void)drawPatches:(NSUInteger)arg1 patchStart:(NSUInteger)arg2 patchCount:(NSUInteger)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(NSUInteger)arg5 instanceCount:(NSUInteger)arg6 baseInstance:(NSUInteger)arg7;
- (void)setTessellationFactorScale:(float)arg1;
- (void)setTessellationFactorBuffer:(id)arg1 offset:(NSUInteger)arg2 instanceStride:(NSUInteger)arg3;
- (void)endEncoding;
- (void)waitForFence:(id)arg1 beforeStages:(NSUInteger)arg2;
- (void)updateFence:(id)arg1 afterStages:(NSUInteger)arg2;
- (void)drawIndexedPrimitives:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(NSUInteger)arg6;
- (void)drawPrimitives:(NSUInteger)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(NSUInteger)arg3;
- (void)drawIndexedPrimitives:(NSUInteger)arg1 indexCount:(NSUInteger)arg2 indexType:(NSUInteger)arg3 indexBuffer:(id)arg4 indexBufferOffset:(NSUInteger)arg5 instanceCount:(NSUInteger)arg6 baseVertex:(long long)arg7 baseInstance:(NSUInteger)arg8;
- (void)drawPrimitives:(NSUInteger)arg1 vertexStart:(NSUInteger)arg2 vertexCount:(NSUInteger)arg3 instanceCount:(NSUInteger)arg4 baseInstance:(NSUInteger)arg5;
- (void)drawIndexedPrimitives:(NSUInteger)arg1 indexCount:(NSUInteger)arg2 indexType:(NSUInteger)arg3 indexBuffer:(id)arg4 indexBufferOffset:(NSUInteger)arg5;
- (void)drawIndexedPrimitives:(NSUInteger)arg1 indexCount:(NSUInteger)arg2 indexType:(NSUInteger)arg3 indexBuffer:(id)arg4 indexBufferOffset:(NSUInteger)arg5 instanceCount:(NSUInteger)arg6;
- (void)drawPrimitives:(NSUInteger)arg1 vertexStart:(NSUInteger)arg2 vertexCount:(NSUInteger)arg3;
- (void)drawPrimitives:(NSUInteger)arg1 vertexStart:(NSUInteger)arg2 vertexCount:(NSUInteger)arg3 instanceCount:(NSUInteger)arg4;
- (void)setStencilResolveTexture:(id)arg1 slice:(NSUInteger)arg2 depthPlane:(NSUInteger)arg3 level:(NSUInteger)arg4 yInvert:(BOOL)arg5;
- (void)setStencilResolveTexture:(id)arg1 slice:(NSUInteger)arg2 depthPlane:(NSUInteger)arg3 level:(NSUInteger)arg4;
- (void)setDepthResolveTexture:(id)arg1 slice:(NSUInteger)arg2 depthPlane:(NSUInteger)arg3 level:(NSUInteger)arg4 yInvert:(BOOL)arg5;
- (void)setDepthResolveTexture:(id)arg1 slice:(NSUInteger)arg2 depthPlane:(NSUInteger)arg3 level:(NSUInteger)arg4;
- (void)setColorResolveTexture:(id)arg1 slice:(NSUInteger)arg2 depthPlane:(NSUInteger)arg3 level:(NSUInteger)arg4 yInvert:(BOOL)arg5 atIndex:(NSUInteger)arg6;
- (void)setColorResolveTexture:(id)arg1 slice:(NSUInteger)arg2 depthPlane:(NSUInteger)arg3 level:(NSUInteger)arg4 atIndex:(NSUInteger)arg5;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setVisibilityResultMode:(NSUInteger)arg1 offset:(NSUInteger)arg2;
- (void)setStencilStoreAction:(NSUInteger)arg1;
- (void)setDepthStoreAction:(NSUInteger)arg1;
- (void)setColorStoreAction:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setDepthStencilState:(id)arg1;
- (void)setTriangleFillMode:(NSUInteger)arg1;
- (void)setVertexAmplificationCount:(NSUInteger)arg1 viewMappings:(const CDStruct_c0454aff )arg2;
- (void)setVertexAmplificationMode:(NSUInteger)arg1 value:(NSUInteger)arg2;
- (void)setScissorRects:(const CDStruct_5f3a0cd7 )arg1 count:(NSUInteger)arg2;
- (void)setScissorRect:(CDStruct_5f3a0cd7)arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setLineWidth:(float)arg1;
- (void)setDepthClipMode:(NSUInteger)arg1;
- (void)setCullMode:(NSUInteger)arg1;
- (void)setFrontFacingWinding:(NSUInteger)arg1;
- (void)setViewports:(const CDStruct_8727d297 )arg1 count:(NSUInteger)arg2;
- (void)setViewport:(CDStruct_8727d297)arg1;
- (void)useHeaps:(const id )arg1 count:(NSUInteger)arg2;
- (void)useHeap:(id)arg1;
- (void)useResources:(const id )arg1 count:(NSUInteger)arg2 usage:(NSUInteger)arg3 stages:(NSUInteger)arg4;
- (void)useResource:(id)arg1 usage:(NSUInteger)arg2 stages:(NSUInteger)arg3;
- (void)useResources:(const id )arg1 count:(NSUInteger)arg2 usage:(NSUInteger)arg3;
- (void)useResource:(id)arg1 usage:(NSUInteger)arg2;
- (void)setThreadgroupMemoryLength:(NSUInteger)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1;
- (void)setTileSamplerStates:(const id )arg1 lodMinClamps:(const float )arg2 lodMaxClamps:(const float )arg3 withRange:(NSRange)arg4;
- (void)setTileSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(NSUInteger)arg4;
- (void)setTileSamplerStates:(const id )arg1 withRange:(NSRange)arg2;
- (void)setTileSamplerState:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setTileTextures:(const id )arg1 withRange:(NSRange)arg2;
- (void)setTileTexture:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setTileBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(NSRange)arg3;
- (void)setTileBufferOffset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setTileBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setTileBytes:(const void )arg1 length:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setFragmentTexture:(id)arg1 atTextureIndex:(NSUInteger)arg2 samplerState:(id)arg3 atSamplerIndex:(NSUInteger)arg4;
- (void)setFragmentSamplerStates:(const id )arg1 lodMinClamps:(const float )arg2 lodMaxClamps:(const float )arg3 withRange:(NSRange)arg4;
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(NSUInteger)arg4;
- (void)setFragmentSamplerStates:(const id )arg1 withRange:(NSRange)arg2;
- (void)setFragmentSamplerState:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setFragmentTextures:(const id )arg1 withRange:(NSRange)arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setFragmentBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(NSRange)arg3;
- (void)setFragmentBufferOffset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setFragmentBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setFragmentBytes:(const void )arg1 length:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setVertexSamplerStates:(const id )arg1 lodMinClamps:(const float )arg2 lodMaxClamps:(const float )arg3 withRange:(NSRange)arg4;
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(NSUInteger)arg4;
- (void)setVertexSamplerStates:(const id )arg1 withRange:(NSRange)arg2;
- (void)setVertexSamplerState:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setVertexTextures:(const id )arg1 withRange:(NSRange)arg2;
- (void)setVertexTexture:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setVertexBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(NSRange)arg3;
- (void)setVertexBufferOffset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setVertexBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setVertexBytes:(const void )arg1 length:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setRenderPipelineState:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)dealloc;
- (id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;

@end

