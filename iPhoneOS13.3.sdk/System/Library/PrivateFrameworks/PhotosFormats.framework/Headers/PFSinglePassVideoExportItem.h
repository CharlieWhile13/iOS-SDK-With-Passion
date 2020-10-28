//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, AVAssetTrack, AVAssetWriter, AVAssetWriterInput, NSArray, NSFileHandle, NSProgress, NSString, NSURL, PFProportionalIntegralController, PFSinglePassVideoExportItemStatistics, PFVideoExportRangeCoordinator;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface PFSinglePassVideoExportItem : NSObject
{
    BOOL _shouldDeleteDestinationURLOnDeallocation;
    BOOL _needsCurrentEncodingBitRateUpdate;
    BOOL _maximizePowerEfficiency;
    NSString *_identifier;
    NSUInteger _targetOutputFileSize;
    NSProgress *_progress;
    NSArray *_additionalMetadata;
    NSUInteger _state;
    NSObject<OS_dispatch_queue> *_stateQueue;
    AVAsset *_inputAsset;
    AVAssetTrack *_videoTrack;
    NSArray *_additionalTracks;
    NSFileHandle *_conversionOutputFileHandle;
    NSURL *_destinationFileURL;
    NSUInteger _outputFileLastEndOffset;
    long long _targetOutputMediaDataSize;
    PFSinglePassVideoExportItemStatistics *_statistics;
    PFProportionalIntegralController *_bitRateController;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_videoReaderTrackOutput;
    NSArray *_additionalReaderTrackOutputs;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoWriterInput;
    NSArray *_additionalWriterInputs;
    NSObject<OS_dispatch_source> *_outputFileSizeChangeSource;
    NSUInteger _minimumChunkLength;
    NSObject<OS_dispatch_group> *_inputReadingCompletionGroup;
    PFVideoExportRangeCoordinator *_availableRangeCoordinator;
    struct OpaqueVTCompressionSession _compressionSession;
    long long _currentEncodingBitRate;
}

@property BOOL maximizePowerEfficiency; // @synthesize maximizePowerEfficiency=_maximizePowerEfficiency;
@property BOOL needsCurrentEncodingBitRateUpdate; // @synthesize needsCurrentEncodingBitRateUpdate=_needsCurrentEncodingBitRateUpdate;
@property long long currentEncodingBitRate; // @synthesize currentEncodingBitRate=_currentEncodingBitRate;
@property struct OpaqueVTCompressionSession compressionSession; // @synthesize compressionSession=_compressionSession;
@property(retain) PFVideoExportRangeCoordinator *availableRangeCoordinator; // @synthesize availableRangeCoordinator=_availableRangeCoordinator;
@property(retain) NSObject<OS_dispatch_group> *inputReadingCompletionGroup; // @synthesize inputReadingCompletionGroup=_inputReadingCompletionGroup;
@property NSUInteger minimumChunkLength; // @synthesize minimumChunkLength=_minimumChunkLength;
@property(retain) NSObject<OS_dispatch_source> *outputFileSizeChangeSource; // @synthesize outputFileSizeChangeSource=_outputFileSizeChangeSource;
@property(retain) NSArray *additionalWriterInputs; // @synthesize additionalWriterInputs=_additionalWriterInputs;
@property(retain) AVAssetWriterInput *videoWriterInput; // @synthesize videoWriterInput=_videoWriterInput;
@property(retain) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain) NSArray *additionalReaderTrackOutputs; // @synthesize additionalReaderTrackOutputs=_additionalReaderTrackOutputs;
@property(retain) AVAssetReaderTrackOutput *videoReaderTrackOutput; // @synthesize videoReaderTrackOutput=_videoReaderTrackOutput;
@property(retain) AVAssetReader *assetReader; // @synthesize assetReader=_assetReader;
@property(retain) PFProportionalIntegralController *bitRateController; // @synthesize bitRateController=_bitRateController;
@property(retain) PFSinglePassVideoExportItemStatistics *statistics; // @synthesize statistics=_statistics;
@property long long targetOutputMediaDataSize; // @synthesize targetOutputMediaDataSize=_targetOutputMediaDataSize;
@property NSUInteger outputFileLastEndOffset; // @synthesize outputFileLastEndOffset=_outputFileLastEndOffset;
@property BOOL shouldDeleteDestinationURLOnDeallocation; // @synthesize shouldDeleteDestinationURLOnDeallocation=_shouldDeleteDestinationURLOnDeallocation;
@property(retain) NSURL *destinationFileURL; // @synthesize destinationFileURL=_destinationFileURL;
@property(retain) NSFileHandle *conversionOutputFileHandle; // @synthesize conversionOutputFileHandle=_conversionOutputFileHandle;
@property(retain) NSArray *additionalTracks; // @synthesize additionalTracks=_additionalTracks;
@property(retain) AVAssetTrack *videoTrack; // @synthesize videoTrack=_videoTrack;
@property(retain) AVAsset *inputAsset; // @synthesize inputAsset=_inputAsset;
@property(retain) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property NSUInteger state; // @synthesize state=_state;
@property(copy, nonatomic) NSArray *additionalMetadata; // @synthesize additionalMetadata=_additionalMetadata;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) NSUInteger targetOutputFileSize; // @synthesize targetOutputFileSize=_targetOutputFileSize;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (double)inputAssetDuration;
- (void)_cancel;
- (id)bitRateControllerForTargetEncodingBitRate:(long long)arg1;
- (void)notifyDataAvailableToHandler:(id /* CDUnknownBlockType */)arg1 ignoreMinimumChunkLength:(BOOL)arg2;
- (void)setupOutputFileSourceWithOutputAvailableHandler:(id /* CDUnknownBlockType */)arg1;
- (void)processCompressedSampleBuffer:(struct opaqueCMSampleBuffer )arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2;
- (void)startReadingInputAssetWithOutputAvailableHandler:(id /* CDUnknownBlockType */)arg1;
- (long long)estimatedOutputBitRate;
- (void)configureDroppableFrameRateForCompressionSession:(struct OpaqueVTCompressionSession )arg1 inputWidth:(int)arg2 inputHeight:(int)arg3;
- (BOOL)setupConversionWithError:(id )arg1;
- (id)outputDataInRange:(NSRange)arg1 waitUntilAvailableWithTimeout:(NSUInteger)arg2 error:(id )arg3;
- (BOOL)startConversionWithError:(id )arg1 outputAvailableHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)preflight;
- (void)dealloc;
- (id)init;

@end

