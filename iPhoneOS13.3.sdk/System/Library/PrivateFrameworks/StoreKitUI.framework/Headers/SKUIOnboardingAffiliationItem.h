//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSURL, UIColor;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingAffiliationItem : NSObject <NSCopying>
{
    UIColor *_fillColor;
    NSString *_identifier;
    NSString *_imageName;
    NSString *_imageTreatment;
    NSURL *_imageURL;
    NSString *_title;
    long long _userAffinityCount;
}

@property(nonatomic) long long userAffinityCount; // @synthesize userAffinityCount=_userAffinityCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *imageTreatment; // @synthesize imageTreatment=_imageTreatment;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;

@end

