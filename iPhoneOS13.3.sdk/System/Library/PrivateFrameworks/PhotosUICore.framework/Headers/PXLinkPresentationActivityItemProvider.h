//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PXLinkPresentationConfiguration;

@interface PXLinkPresentationActivityItemProvider : NSObject <UIActivityItemLinkPresentationSource>
{
    PXLinkPresentationConfiguration *_configuration;
}

@property(readonly, nonatomic) PXLinkPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)_linkMetadataForConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

