//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosFormats/PFAVReaderWriterAdjustDelegate-Protocol.h>

@class CIContext, PFAVReaderWriter;

@interface PFColorConverter : NSObject <PFAVReaderWriterAdjustDelegate>
{
    PFAVReaderWriter *_readerWriter;
    CIContext *_conversionContext;
}

// - (void).cxx_destruct;
- (void)adjustPixelBuffer:(struct __CVBuffer )arg1 toOutputBuffer:(struct __CVBuffer )arg2;
- (void)convertWithVideoURL:(id)arg1 outURL:(id)arg2 progress:(id /* CDUnknownBlockType */)arg3 completion:(id /* CDUnknownBlockType */)arg4;

@end

