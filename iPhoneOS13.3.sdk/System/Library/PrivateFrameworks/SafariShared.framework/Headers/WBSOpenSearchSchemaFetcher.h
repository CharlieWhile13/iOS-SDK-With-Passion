//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface WBSOpenSearchSchemaFetcher : NSObject
{
    NSMutableSet *_openSearchDescriptionURLs;
}

+ (id)sharedFetcher;
// - (void).cxx_destruct;
- (void)_didFinishFetchingOpenSearchDescriptionDocumentWithURL:(id)arg1;
- (void)fetchOpenSearchDescriptionWithURL:(id)arg1;

@end

