/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebufferCopyPipeline : TSCH3DFramebufferTransformPipeline {
    NSArray * mEffects;
    struct RenderState { 
        struct BlendState { 
            bool mBlend; 
            int mBlendMode; 
        } blendState; 
        struct DepthState { 
            bool depthTest; 
            bool depthMask; 
        } depthState; 
        bool culling; 
        bool cullBack; 
        bool polygonOffset; 
        float polygonOffsetFactor; 
        float polygonOffsetUnits; 
        struct EnableClipDistances { 
            struct array<bool, 8> { 
                bool __elems_[8]; 
            } states; 
        } enableClipDistances; 
    }  mRenderState;
    struct box<glm::detail::tvec2<int> > { 
        struct tvec2<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
        } mMin; 
        struct tvec2<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
        } mMax; 
    }  mTargetViewport;
    TSCH3DResource * mTexcoords;
    struct tmat4x4<float> { 
        struct tvec4<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
            union { 
                float z; 
                float b; 
                float p; 
            } ; 
            union { 
                float w; 
                float a; 
                float q; 
            } ; 
        } value[4]; 
    }  mTransform;
    id /* block */  mUpdateShaderEffectsStatesBlock;
    TSCH3DResource * mVertices;
    struct tvec4<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
        union { 
            float w; 
            float a; 
            float q; 
        } ; 
    }  mWipeColor;
    bool  mWipeTarget;
}

@property (nonatomic, copy) NSArray *effects;
@property (nonatomic) struct RenderState { struct BlendState { bool x_1_1_1; int x_1_1_2; } x1; struct DepthState { bool x_2_1_1; bool x_2_1_2; } x2; bool x3; bool x4; bool x5; float x6; float x7; /* Warning: unhandled struct encoding: '{EnableClipDistances={array<bool' */ struct x8; } renderState; /* unknown property attribute:  8>=[8B]}}} */
@property (nonatomic) struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; } targetViewport;
@property (nonatomic, retain) TSCH3DResource *texcoords;
@property (nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; } transform;
@property (nonatomic, copy) id /* block */ updateShaderEffectsStatesBlock;
@property (nonatomic, retain) TSCH3DResource *vertices;
@property (nonatomic) struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } wipeColor;
@property (nonatomic) bool wipeTarget;

- (id).cxx_construct;
- (void)dealloc;
- (id)effects;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;
- (struct RenderState { struct BlendState { bool x_1_1_1; int x_1_1_2; } x1; struct DepthState { bool x_2_1_1; bool x_2_1_2; } x2; bool x3; bool x4; bool x5; float x6; float x7; struct EnableClipDistances { struct array<bool, 8> { bool x_1_2_1[8]; } x_8_1_1; } x8; })renderState;
- (void)setEffects:(id)arg1;
- (void)setRenderState:(struct RenderState { struct BlendState { bool x_1_1_1; int x_1_1_2; } x1; struct DepthState { bool x_2_1_1; bool x_2_1_2; } x2; bool x3; bool x4; bool x5; float x6; float x7; struct EnableClipDistances { struct array<bool, 8> { bool x_1_2_1[8]; } x_8_1_1; } x8; })arg1;
- (void)setTargetViewport:(struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; })arg1;
- (void)setTexcoords:(id)arg1;
- (void)setTransform:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; })arg1;
- (void)setUpdateShaderEffectsStatesBlock:(id /* block */)arg1;
- (void)setVertices:(id)arg1;
- (void)setWipeColor:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })arg1;
- (void)setWipeTarget:(bool)arg1;
- (struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; })targetViewport;
- (id)texcoords;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; })transform;
- (void)transformFramebuffer;
- (void)updateShaderEffectsStates;
- (id /* block */)updateShaderEffectsStatesBlock;
- (id)vertices;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })wipeColor;
- (bool)wipeTarget;

@end