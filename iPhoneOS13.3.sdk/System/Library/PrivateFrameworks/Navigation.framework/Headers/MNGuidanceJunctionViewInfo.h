//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSUUID;

@interface MNGuidanceJunctionViewInfo : NSObject <NSSecureCoding>
{
    NSUUID *_uniqueID;
    NSArray *_images;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithID:(id)arg1 images:(id)arg2;

@end
