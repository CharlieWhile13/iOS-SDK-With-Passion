//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLIndirectComputeCommand-Protocol.h>

@class _MTLIndirectDispatchThreadgroupsArguments, _MTLIndirectDispatchThreadsArguments;

@protocol MTLIndirectComputeCommandSPI <MTLIndirectComputeCommand>
- (NSUInteger)getPipelineStateUniqueIdentifier;
- (BOOL)hasBarrier;
- (CDStruct_1e3be3a8)getStageInRegion;
- (NSUInteger)getThreadgroupMemoryLengthAtIndex:(NSUInteger)arg1;
- (_MTLIndirectDispatchThreadsArguments *)dispatchThreadsArguments;
- (_MTLIndirectDispatchThreadgroupsArguments *)dispatchThreadgroupsArguments;
- (NSUInteger)getCommandType;
- (void )getKernelBufferAtIndex:(NSUInteger)arg1;
@end
