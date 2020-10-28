//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKExporter-Protocol.h>

@class NSURL;
@protocol TSDImportExportDelegate;

@protocol TSKRenderingExporter <TSKExporter>
@property(nonatomic) BOOL paginate;
@property(readonly, nonatomic) NSUInteger pageCount;
@property(readonly, nonatomic) double progressForCurrentPage;
@property(readonly, nonatomic) CGRect unscaledClipRect;
@property(readonly, nonatomic) CGRect boundsRect;
- (void)performBlockWithImager:(void (^)(TSDImager *))arg1;
- (BOOL)drawCurrentPageInContext:(CGContext )arg1 viewScale:(double)arg2 unscaledClipRect:(CGRect)arg3 createPage:(BOOL)arg4;
- (BOOL)setInfosToCurrentPage;
- (BOOL)incrementPage;
- (BOOL)preparePage:(NSUInteger)arg1;
- (void)teardown;
- (void)setup;
- (BOOL)exportToURL:(NSURL *)arg1 pageNumber:(NSUInteger)arg2 delegate:(id <TSDImportExportDelegate>)arg3 error:(id )arg4;
@end

