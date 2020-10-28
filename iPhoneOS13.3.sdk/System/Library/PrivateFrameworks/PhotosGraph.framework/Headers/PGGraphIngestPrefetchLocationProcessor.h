//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@interface PGGraphIngestPrefetchLocationProcessor : NSObject <PGGraphIngestProcessor>
{
}

- (BOOL)prefetchLocationsWithRegions:(id)arg1 graph:(id)arg2 progressBlock:(id /* CDUnknownBlockType */)arg3;
- (id)regionsWithMoments:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (BOOL)shouldRunWithGraphUpdate:(id)arg1;

@end
