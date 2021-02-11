/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

@interface RemoteProcessingBlockClient : NSObject

+ (int)addRPBListener:(id)arg1;
+ (int)addRPBPropertyListener:(id)arg1 inPropertyID:(unsigned int)arg2 inServerID:(unsigned int)arg3 inRPBlockID:(unsigned int)arg4;
+ (int)copyItemProperty:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2 inItemID:(unsigned int)arg3 inPropertyID:(unsigned int)arg4 inScope:(unsigned int)arg5 inElement:(unsigned int)arg6 outData:(id*)arg7;
+ (int)copyProperty:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2 inPropertyID:(unsigned int)arg3 outData:(id*)arg4;
+ (int)getItemParameter:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2 inItemID:(unsigned int)arg3 inParameterID:(unsigned int)arg4 inScope:(unsigned int)arg5 inElement:(unsigned int)arg6 outValue:(float*)arg7;
+ (int)removeRPBListener:(id)arg1;
+ (int)removeRPBPropertyListener:(id)arg1 inPropertyID:(unsigned int)arg2 inServerID:(unsigned int)arg3 inRPBlockID:(unsigned int)arg4;
+ (int)setItemParameter:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2 inItemID:(unsigned int)arg3 inParameterID:(unsigned int)arg4 inScope:(unsigned int)arg5 inElement:(unsigned int)arg6 inValue:(float)arg7;
+ (int)setItemProperty:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2 inItemID:(unsigned int)arg3 inPropertyID:(unsigned int)arg4 inScope:(unsigned int)arg5 inElement:(unsigned int)arg6 inData:(id)arg7;
+ (int)setProperty:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2 inPropertyID:(unsigned int)arg3 inData:(id)arg4;

@end