//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMContext.h>

@class PXCMMFileBackedActionManager;

@interface PXCMMFileBackedContext : PXCMMContext
{
    PXCMMFileBackedActionManager *_fileBackedActionManager;
}

+ (id)fileBackedContextWithDirectoryURL:(id)arg1 activityType:(NSUInteger)arg2 title:(id)arg3;
// - (void).cxx_destruct;
- (id)actionManager;
- (id)initWithAssetsDataSourceManager:(id)arg1 mediaProvider:(id)arg2 activityType:(NSUInteger)arg3;

@end
