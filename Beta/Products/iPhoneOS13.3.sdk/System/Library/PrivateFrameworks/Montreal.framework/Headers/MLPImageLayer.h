/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

@interface MLPImageLayer : MLPLayer {
    NSMutableDictionary * _inputImagesToFirstKernel;
    NSMutableDictionary * _inputImagesToSecondKernel;
    NSMutableDictionary * _primaryCurrentStates;
    NSMutableDictionary * _secondaryCurrentStates;
}

@property (readonly) NSMutableDictionary *inputImagesToFirstKernel;
@property (readonly) NSMutableDictionary *inputImagesToSecondKernel;
@property (readonly) NSArray *inputToFirstKernel;
@property (readonly) NSArray *inputToSecondKernel;
@property (readonly) NSArray *primaryCurrentState;
@property (readonly) NSMutableDictionary *primaryCurrentStates;
@property (readonly) NSArray *secondaryCurrentState;
@property (readonly) NSMutableDictionary *secondaryCurrentStates;

- (void).cxx_destruct;
- (void)allocateInputDictionaries;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3 params:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg4;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 neuronType:(int)arg3 neuronParams:(id)arg4;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 parameters:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg3;
- (id)inputImagesToFirstKernel;
- (id)inputImagesToSecondKernel;
- (struct NSArray { Class x1; }*)inputToFirstKernel;
- (struct NSArray { Class x1; }*)inputToSecondKernel;
- (struct NSArray { Class x1; }*)primaryCurrentState;
- (id)primaryCurrentStates;
- (struct NSArray { Class x1; }*)secondaryCurrentState;
- (id)secondaryCurrentStates;
- (void)updateInputToFirstKernel:(struct NSArray { Class x1; }*)arg1 index:(id)arg2 inference:(bool)arg3;
- (void)updateInputToFirstKernel:(struct NSArray { Class x1; }*)arg1 inference:(bool)arg2;
- (void)updateInputToSecondKernel:(struct NSArray { Class x1; }*)arg1 index:(id)arg2 inference:(bool)arg3;
- (void)updateInputToSecondKernel:(struct NSArray { Class x1; }*)arg1 inference:(bool)arg2;
- (void)updatePrimaryCurrentState:(struct NSArray { Class x1; }*)arg1 index:(id)arg2 inference:(bool)arg3;
- (void)updatePrimaryCurrentState:(struct NSArray { Class x1; }*)arg1 inference:(bool)arg2;
- (void)updateSecondaryCurrentState:(struct NSArray { Class x1; }*)arg1 index:(id)arg2 inference:(bool)arg3;
- (void)updateSecondaryCurrentState:(struct NSArray { Class x1; }*)arg1 inference:(bool)arg2;

@end