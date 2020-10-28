//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDSmartStroke.h>

__attribute__((visibility("hidden")))
@interface TSDBrushStroke : TSDSmartStroke
{
}

+ (void)p_clearFrameBuffers:(id)arg1;
+ (void)p_drawFrameBuffers:(id)arg1 intoFrameBuffer:(id)arg2 withAlpha:(double)arg3 usingDataBuffer:(id)arg4;
+ (id)p_glOpacityShaderForCurrentContext;
+ (id)p_glBrushShaderForCurrentContext;
+ (id)p_glContextArray;
+ (id)p_glContextQueue;
+ (id)p_glContextSemaphore;
+ (NSUInteger)p_glContextCount;
+ (void)p_drawColor:(id)arg1 intoContext:(CGContext )arg2 usingImageAsMask:(CGImage )arg3 withRect:(CGRect)arg4;
+ (BOOL)brushStrokeUsesMetal;
+ (BOOL)brushStrokeUsesOpenGL;
+ (Class)mutableClass;
- (CGImage )p_newCGImageFromGLWithWidth:(int)arg1 height:(int)arg2;
- (id)p_glTextureForCurrentStrokeAndContext;
- (long long)p_fastElementPercentage:(double )arg1 forOverallPercentage:(double)arg2 onPath:(id)arg3 withCachedCurrentElementPercentage:(CDStruct_45a6b6f8 )arg4;
- (BOOL)p_isFreehandDrawingStrokeWithFixedTileWidth;
- (BOOL)p_isDrawingRasterizedIntoPDFWithContext:(CGContext )arg1;
- (BOOL)p_prefersRasterRenderingInContext:(CGContext )arg1;
- (BOOL)p_shouldDrawAsVectorInContext:(CGContext )arg1;
- (void)p_finishOpenGLRenderInContext:(CGContext )arg1 orDirectly:(id)arg2 pathVertexData:(vector_8bba9095 )arg3 parameterized:(BOOL)arg4 shouldReverseDrawOrder:(BOOL)arg5 withLayoutOptions:(id)arg6;
- (void)p_rasterRenderSection:(id)arg1 sectionIndex:(NSUInteger)arg2 ontoPath:(id)arg3 inElementRange:(NSRange)arg4 into:(vector_8bba9095 )arg5 viewScale:(double)arg6 strokeTileLayout:(CDStruct_d2b197d1)arg7 cachedCurrentElementPercentage:(CDStruct_45a6b6f8 )arg8;
- (void)p_rasterBrushPath:(CGPath )arg1 inContext:(CGContext )arg2 orDirectly:(id)arg3 parameterized:(BOOL)arg4 shouldReverseDrawOrder:(BOOL)arg5 withLayoutOptions:(id)arg6;
- (void)p_brushSection:(id)arg1 sectionIndex:(NSUInteger)arg2 ontoPath:(id)arg3 inElementRange:(NSRange)arg4 intoPath:(id)arg5 orIntoVector:(vector_8bba9095 )arg6 viewScale:(double)arg7 strokeTileLayout:(CDStruct_d2b197d1)arg8 cachedCurrentElementPercentage:(CDStruct_45a6b6f8 )arg9;
- (void)p_brushPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 inElementRange:(NSRange)arg3 intoPath:(id)arg4 orIntoVector:(vector_8bba9095 )arg5 sectionIndex:(NSUInteger )arg6 viewScale:(double)arg7 withLayoutOptions:(id)arg8 currentSubpathIndex:(NSUInteger)arg9 cachedCurrentElementPercentage:(CDStruct_45a6b6f8 )arg10;
- (void)p_brushPath:(CGPath )arg1 inContext:(CGContext )arg2 orDirectly:(id)arg3 parameterized:(BOOL)arg4 drawRasterized:(BOOL)arg5 shouldReverseDrawOrder:(BOOL)arg6 withLayoutOptions:(id)arg7;
- (void)paintPath:(CGPath )arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContext )arg3 useFastDrawing:(BOOL)arg4 parameterized:(BOOL)arg5 shouldReverseDrawOrder:(BOOL)arg6 withLayoutOptions:(id)arg7;
- (void)paintPath:(CGPath )arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContext )arg3 useFastDrawing:(BOOL)arg4 parameterized:(BOOL)arg5 shouldReverseDrawOrder:(BOOL)arg6;
- (void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContext )arg5 useFastDrawing:(BOOL)arg6;
- (id)strokeLineEnd:(id)arg1;
- (BOOL)needsToExtendJoinsForBoundsCalculation;
- (double)horizontalMarginForSwatch;
- (void)i_setCap:(int)arg1;
- (int)cap;
- (BOOL)supportsPattern;
- (BOOL)usesOpenGL;
- (BOOL)drawsInOneStep;
- (BOOL)prefersToApplyToShapeRenderableDuringManipulation;
- (BOOL)canApplyToShapeRenderable;
- (double)suggestedMinimumLineWidth;
- (double)lineEndInsetAdjustment;
- (id)description;
- (id)initWithArchive:(const struct StrokeArchive )arg1 unarchiver:(id)arg2;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end
