/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

@interface MLPImageDataBatch : MLPDataBatch {
    struct NSArray { Class x1; } * _images;
    NSArray * _labels;
    struct NSArray { Class x1; } * _lossLabels;
}

@property (retain) NSArray *images;
@property (retain) NSArray *labels;
@property (retain) NSArray *lossLabels;

- (void).cxx_destruct;
- (struct NSArray { Class x1; }*)images;
- (id)initWithDataBatch:(id)arg1 batchSize:(unsigned long long)arg2 network:(id)arg3;
- (id)labels;
- (struct NSArray { Class x1; }*)lossLabels;
- (void)setImages:(struct NSArray { Class x1; }*)arg1;
- (void)setLabels:(id)arg1;
- (void)setLossLabels:(struct NSArray { Class x1; }*)arg1;

@end
