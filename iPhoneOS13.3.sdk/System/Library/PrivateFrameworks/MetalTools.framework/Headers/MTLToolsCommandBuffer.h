//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLCommandBufferSPI-Protocol.h>

@class MTLToolsPointerArray, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSString;
@protocol MTLCommandQueue;

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI>
{
    struct {
        unsigned int hasCommit:1;
        unsigned int addedCompletedHandler:1;
        unsigned int addedScheduledHandler:1;
        unsigned int padding:29;
    } _flags;
    NSMutableSet *_retainedObjects;
    MTLToolsPointerArray *_renderCommandEncoders;
    MTLToolsPointerArray *_computeCommandEncoders;
    MTLToolsPointerArray *_blitCommandEncoders;
    MTLToolsPointerArray *_parallelRenderCommandEncoders;
    MTLToolsPointerArray *_fragmentRenderCommandEncoders;
    MTLToolsPointerArray *_resourceStateCommandEncoders;
    struct ILayerLockingPolicy _retainedObjectsLock;
}

@property(nonatomic) struct ILayerLockingPolicy retainedObjectsLock; // @synthesize retainedObjectsLock=_retainedObjectsLock;
@property(readonly, nonatomic) MTLToolsPointerArray *resourceStateCommandEncoders; // @synthesize resourceStateCommandEncoders=_resourceStateCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *fragmentRenderCommandEncoders; // @synthesize fragmentRenderCommandEncoders=_fragmentRenderCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *parallelRenderCommandEncoders; // @synthesize parallelRenderCommandEncoders=_parallelRenderCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *blitCommandEncoders; // @synthesize blitCommandEncoders=_blitCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *computeCommandEncoders; // @synthesize computeCommandEncoders=_computeCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *renderCommandEncoders; // @synthesize renderCommandEncoders=_renderCommandEncoders;
@property(readonly, nonatomic) NSMutableSet *retainedObjects; // @synthesize retainedObjects=_retainedObjects;
- (NSUInteger)protectionOptions;
- (void)setProtectionOptions:(NSUInteger)arg1;
- (void)encodeCacheHintFinalize:(NSUInteger)arg1 resourceGroups:(const id )arg2 count:(NSUInteger)arg3;
- (void)encodeCacheHintTag:(NSUInteger)arg1 resourceGroups:(const id )arg2 count:(NSUInteger)arg3;
- (void)dropResourceGroups:(const id )arg1 count:(NSUInteger)arg2;
- (void)setResourceGroups:(const id )arg1 count:(NSUInteger)arg2;
- (void)executeSynchronizationNotifications:(int)arg1 scope:(NSUInteger)arg2 resources:(const id )arg3 count:(NSUInteger)arg4;
- (void)executeSynchronizationNotifications:(int)arg1;
- (void)addSynchronizationNotification:(id /* CDUnknownBlockType */)arg1;
@property(nonatomic, getter=getListIndex) NSUInteger listIndex;
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;
@property(readonly) NSDictionary *profilingResults;
@property(getter=isProfilingEnabled) BOOL profilingEnabled;
- (id)sampledComputeCommandEncoderWithDispatchType:(NSUInteger)arg1 programInfoBuffer:(CDStruct_4af8c268 )arg2 capacity:(NSUInteger)arg3;
- (void)addPurgedHeap:(id)arg1;
- (void)addPurgedResource:(id)arg1;
- (void)encodeWaitForEvent:(id)arg1 value:(NSUInteger)arg2 timeout:(unsigned int)arg3;
- (void)encodeWaitForEvent:(id)arg1 value:(NSUInteger)arg2;
- (void)encodeSignalEvent:(id)arg1 value:(NSUInteger)arg2;
- (void)willEncodeSignalEvent:(id)arg1 value:(NSUInteger)arg2 writeableResources:(id)arg3;
- (id)computeCommandEncoderWithDispatchType:(NSUInteger)arg1;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 )arg1 capacity:(NSUInteger)arg2;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 )arg2 capacity:(NSUInteger)arg3;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 )arg2 capacity:(NSUInteger)arg3;
- (id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)addCompletedHandler:(id /* CDUnknownBlockType */)arg1;
- (void)addScheduledHandler:(id /* CDUnknownBlockType */)arg1;
- (id)unwrapMTLRenderPassDescriptor:(id)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void )debugBufferContentsWithLength:(NSUInteger )arg1;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
- (id)resourceStateCommandEncoder;
- (id)computeCommandEncoder;
- (id)blitCommandEncoder;
@property(readonly) NSError *error;
@property(readonly) NSUInteger status;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
- (void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1;
- (void)enqueue;
@property(copy) NSString *label;
@property(readonly) NSUInteger globalTraceObjectID;
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly) BOOL retainedReferences;
@property(readonly) id <MTLCommandQueue> commandQueue;
- (id)debugCommandEncoder;
- (BOOL)commitAndWaitUntilSubmitted;
- (void)commit;
- (void)preCommit;
- (void)preScheduledHandlers;
- (void)postScheduledHandlers;
- (void)preCompletionHandlers;
- (void)postCompletionHandlers;
- (void)clearRetainedObjects;
- (void)addRetainedObject:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

@end

