//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCH3DChartAllSceneObjectDelegate-Protocol.h>
#import <iWorkImport/TSCH3DChartElementSceneObjectGeometryDelegate-Protocol.h>
#import <iWorkImport/TSCH3DSceneDelegate-Protocol.h>
#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, TSCH3DChartRep, TSCH3DGeometry, TSCH3DScene;

__attribute__((visibility("hidden")))
@interface TSCH3DGetSelectionKnobsPositionsPipelineDelegate : NSObject <TSCHUnretainedParent, TSCH3DSceneDelegate, TSCH3DChartAllSceneObjectDelegate, TSCH3DChartElementSceneObjectGeometryDelegate>
{
    TSCH3DChartRep *mRep;
    NSArray *mSelection;
    NSMutableArray *mProjectedPoints;
    TSCH3DGeometry *mGeometry;
    NSMutableDictionary *mLabelsBoundsForMerging;
    TSCH3DScene *mScene;
    int mCurrentLabelType;
    int mKnobsMode;
}

@property(retain, nonatomic) NSMutableArray *projectedPoints; // @synthesize projectedPoints=mProjectedPoints;
@property(retain, nonatomic) TSCH3DGeometry *geometry; // @synthesize geometry=mGeometry;
- (id)p_selectedSeries;
- (BOOL)p_labelSelectedForType:(int)arg1 alignment:(NSUInteger)arg2 elementIndex:(long long)arg3;
- (BOOL)willSubmitGeometry:(id)arg1;
@property(readonly, nonatomic) BOOL shouldMerge;
- (void)updateExternalLabelAttribute:(id)arg1 sceneObject:(id)arg2 labelRenderInfo:(id)arg3;
- (BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(id)arg2;
- (BOOL)willSubmitLabelType:(int)arg1 boundsIndex:(long long)arg2 alignment:(NSUInteger)arg3 elementIndex:(NSUInteger)arg4 forSceneObject:(id)arg5;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)addLabelBoundsForMerging:(CGRect)arg1;
- (void)setOffset:(const tvec3_17f03ce0 )arg1 labelType:(int)arg2 boundsIndex:(long long)arg3 forSceneObject:(id)arg4;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2_3b141483 )arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;
- (BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (struct ElementRenderPass)renderPassForSceneObject:(id)arg1;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didEndProcessingSceneObject:(id)arg1;
- (BOOL)willBeginProcessingSceneObject:(id)arg1;
- (BOOL)willSubmitElement:(id)arg1 sceneObject:(id)arg2;
- (BOOL)willRenderElement:(id)arg1 sceneObject:(id)arg2;
- (void)didTransformElement:(id)arg1 sceneObject:(id)arg2;
- (BOOL)willUpdateElementEffectsStatesForElement:(id)arg1 sceneObject:(id)arg2;
- (struct ElementRenderPass)renderPassForElement:(id)arg1 sceneObject:(id)arg2;
- (BOOL)willProcessElement:(id)arg1 sceneObject:(id)arg2;
- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didRunForScene:(id)arg1 pipeline:(id)arg2;
- (void)willRunForScene:(id)arg1 pipeline:(id)arg2;
- (void)clearParent;
- (void)dealloc;
- (id)initWithRep:(id)arg1 selection:(id)arg2;

@end

