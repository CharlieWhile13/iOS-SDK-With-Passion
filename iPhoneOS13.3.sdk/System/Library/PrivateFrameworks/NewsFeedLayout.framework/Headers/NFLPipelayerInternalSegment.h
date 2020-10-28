//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NFLPipeSegment, NFLPipelayerDelegate;

@interface NFLPipelayerInternalSegment : NSObject
{
    NSUInteger _pipeSegmentType;
    NSUInteger _cumulativeHeadlinesUsedCount;
    NSObject<NFLPipeSegment> *_pipeSegment;
    id <NFLPipelayerDelegate> _delegate;
}

@property(nonatomic) __weak id <NFLPipelayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<NFLPipeSegment> *pipeSegment; // @synthesize pipeSegment=_pipeSegment;
@property(nonatomic) NSUInteger cumulativeHeadlinesUsedCount; // @synthesize cumulativeHeadlinesUsedCount=_cumulativeHeadlinesUsedCount;
@property(nonatomic) NSUInteger pipeSegmentType; // @synthesize pipeSegmentType=_pipeSegmentType;
// - (void).cxx_destruct;
- (id)description;

@end

