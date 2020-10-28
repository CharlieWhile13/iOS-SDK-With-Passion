//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGRelationshipAnalyzer-Protocol.h>

@class NSString, PGGraphRelationshipProcessor;

@interface PGRelationshipHolidayAnalyzer : NSObject <PGRelationshipAnalyzer>
{
    PGGraphRelationshipProcessor *_processor;
}

@property(readonly, nonatomic) __weak PGGraphRelationshipProcessor *processor; // @synthesize processor=_processor;
// - (void).cxx_destruct;
- (id)_familyHolidayMomentsFromMomentNodes:(id)arg1;
- (void)runAnalysisWithProgressBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithRelationshipProcessor:(id)arg1;
@property(readonly, nonatomic) NSString *name;

@end

