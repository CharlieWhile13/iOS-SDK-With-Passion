//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDocCamDocumentInfo, ICDocCamImageCache;

__attribute__((visibility("hidden")))
@interface DCMarkupActivityItem : NSObject
{
    ICDocCamDocumentInfo *_documentInfo;
    ICDocCamImageCache *_imageCache;
}

@property(retain, nonatomic) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) ICDocCamDocumentInfo *documentInfo; // @synthesize documentInfo=_documentInfo;
// - (void).cxx_destruct;
- (id)initWithDocumentInfo:(id)arg1 imageCache:(id)arg2;

@end

