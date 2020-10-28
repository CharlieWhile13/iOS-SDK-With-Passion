//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DTransformGeometryRenderProcessor.h>

@class NSMutableArray, TSCH3DGetSelectionKnobsPositionsPipelineDelegate;

__attribute__((visibility("hidden")))
@interface TSCH3DGetSelectionKnobsPositionsRenderProcessor : TSCH3DTransformGeometryRenderProcessor
{
    NSMutableArray *mProjectedPoints;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate *mSceneObjectDelegate;
    float mNormalizedKnobRadius;
}

@property(nonatomic) float normalizedKnobRadius; // @synthesize normalizedKnobRadius=mNormalizedKnobRadius;
@property(retain, nonatomic) NSMutableArray *projectedPoints; // @synthesize projectedPoints=mProjectedPoints;
@property(retain, nonatomic) TSCH3DGetSelectionKnobsPositionsPipelineDelegate *sceneObjectDelegate; // @synthesize sceneObjectDelegate=mSceneObjectDelegate;
- (void)submit:(id)arg1;
- (tmat4x4_3074befe)modelViewNormalizedProjection;
- (void)dealloc;

@end

