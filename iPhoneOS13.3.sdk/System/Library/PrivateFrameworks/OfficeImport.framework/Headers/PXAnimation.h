//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PXAnimation : NSObject
{
}

+ (void)writeAnimationFromSlideBase:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readAnimationFromTimingXmlNode:(struct _xmlNode )arg1 tgtAnimation:(id)arg2 drawingState:(id)arg3;
+ (id)readGraphicBuild:(struct _xmlNode )arg1 drawingState:(id)arg2;
+ (id)readOleChartBuild:(struct _xmlNode )arg1;
+ (int)readChartBuildType:(id)arg1;
+ (id)readParagraphBuild:(struct _xmlNode )arg1;
+ (void)readAnimSequentialElement:(struct _xmlNode )arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (id)sequentialNextActionMap;
+ (id)sequentialPreviousActionMap;
+ (void)readAnimParallelElement:(struct _xmlNode )arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readCommonBehaviorData:(struct _xmlNode )arg1 tgtCommonBehaviorData:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimRotationElement:(struct _xmlNode )arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimSetElement:(struct _xmlNode )arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (id)readAnimVariant:(struct _xmlNode )arg1 drawingState:(id)arg2;
+ (void)readAnimCmdElement:(struct _xmlNode )arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimVideoElement:(struct _xmlNode )arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimAudioElement:(struct _xmlNode )arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readCommonMediaNodeData:(struct _xmlNode )arg1 commonMediaData:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimScaleElement:(struct _xmlNode )arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimMotionElement:(struct _xmlNode )arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readPointFromNode:(struct _xmlNode )arg1 tgtPoint:(CGPoint )arg2;
+ (void)readAnimEffectElement:(struct _xmlNode )arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimElement:(struct _xmlNode )arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readChartType:(id)arg1 oleChartTarget:(id)arg2;
+ (id)chartTypeMap;
+ (void)readChartBuildStep:(id)arg1 chartTarget:(id)arg2;
+ (id)chartBuildStepMap;
+ (id)newShapeTarget:(struct _xmlNode )arg1 drawingState:(id)arg2;
+ (id)newTarget:(struct _xmlNode )arg1 drawingState:(id)arg2;
+ (void)readTriggerEvent:(id)arg1 timeCondition:(id)arg2;
+ (id)triggerEventMap;
+ (void)readCondition:(struct _xmlNode )arg1 timeCondition:(id)arg2 drawingState:(id)arg3;
+ (void)readStConditionList:(struct _xmlNode )arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (void)readConditionList:(struct _xmlNode )arg1 arrayOfConditions:(id)arg2 drawingState:(id)arg3;
+ (void)readIterate:(struct _xmlNode )arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (void)readChildTimeNodeList:(struct _xmlNode )arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (void)readRestartType:(id)arg1 commonTimeNodeData:(id)arg2;
+ (id)restartTypeMap;
+ (void)readPresetClass:(id)arg1 commonTimeNodeData:(id)arg2;
+ (id)presetClassMap;
+ (void)readTimeNodeType:(id)arg1 commonTimeNodeData:(id)arg2;
+ (id)timeNodeTypeMap;
+ (void)readCommonTimeNodeData:(struct _xmlNode )arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (BOOL)readOptionalStringAttribute:(id)arg1 fromNode:(struct _xmlNode )arg2 attributeMap:(id)arg3 toPDDomValue:(NSUInteger )arg4;
+ (id)timeNodeFillTypeMap;

@end

