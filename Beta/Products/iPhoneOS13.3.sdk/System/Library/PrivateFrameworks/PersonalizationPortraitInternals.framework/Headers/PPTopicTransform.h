/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPTopicTransform : NSObject {
    const float * _bias;
    NSData * _data;
    struct header_s { 
        unsigned int qidCount; 
        unsigned int topicCount; 
        unsigned int nonzeroCount; 
        unsigned int payloadLen; 
    }  _header;
    const float * _matrixElts;
    const unsigned int * _matrixIndices;
    const char * _payloads;
    const unsigned int * _qids;
}

@property (nonatomic, readonly) unsigned long long outputTopicCount;

- (void).cxx_destruct;
- (id)QIDWeightsWithMappedTopicIdentifier:(id)arg1;
- (void)_enumerateSparseColumnAtIndex:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)_enumerateSparseRowAtIndex:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)addBias:(float*)arg1;
- (void)addWeightedTopicScoreToBuffer:(float*)arg1 countNonZeroComponentsInBuffer:(unsigned short*)arg2 qid:(unsigned int)arg3 score:(float)arg4;
- (void)addWeightedTopicScoreToBuffer:(float*)arg1 qid:(unsigned int)arg2 score:(float)arg3;
- (void)halfSigmoid:(float*)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (unsigned long long)outputTopicCount;
- (id)payloadForTopic:(unsigned int)arg1;
- (void)scaleBuffer:(float*)arg1 withFactor:(float)arg2;
- (void)sigmoid:(float*)arg1;

@end