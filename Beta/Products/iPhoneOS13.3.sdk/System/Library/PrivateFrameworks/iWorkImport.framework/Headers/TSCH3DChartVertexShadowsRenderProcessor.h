/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartVertexShadowsRenderProcessor : TSCH3DRetargetRenderProcessor {
    NSArray * mShadowsEffects;
}

- (long long)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg3;
- (void)dealloc;
- (id)init;
- (id)p_effects;
- (void)submit:(id)arg1;
- (long long)texture:(id)arg1 resource:(id)arg2 attributes:(const struct TextureAttributes { int x1; int x2; bool x3; bool x4; bool x5; struct TextureSizeHint { int x_6_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_6_1_2; } x6; bool x7; }*)arg3;

@end