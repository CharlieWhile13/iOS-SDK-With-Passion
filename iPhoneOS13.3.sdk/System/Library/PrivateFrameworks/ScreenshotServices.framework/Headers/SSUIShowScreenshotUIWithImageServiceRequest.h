//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenshotServices/SSUIServiceRequest.h>

@class SSUIServiceOptions, UIImage;

@interface SSUIShowScreenshotUIWithImageServiceRequest : SSUIServiceRequest
{
    UIImage *_image;
    SSUIServiceOptions *_options;
}

+ (id)entitlement;
@property(retain, nonatomic) SSUIServiceOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;

@end

