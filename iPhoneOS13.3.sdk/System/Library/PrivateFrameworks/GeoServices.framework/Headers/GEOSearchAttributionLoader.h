//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOSearchAttributionManifest;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionLoader : NSObject
{
    GEOSearchAttributionManifest *_attributionManifest;
}

// - (void).cxx_destruct;
- (void)loadAttributionInfoForIdentifier:(id)arg1 allowNetwork:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initWithAttributionManifest:(id)arg1;

@end

