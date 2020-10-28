//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSURL;

@interface FCMultiResolutionImage : NSObject <NSCopying>
{
    NSURL *_imageURL1x;
    NSURL *_imageURL2x;
    NSURL *_imageURL3x;
}

@property(retain, nonatomic) NSURL *imageURL3x; // @synthesize imageURL3x=_imageURL3x;
@property(retain, nonatomic) NSURL *imageURL2x; // @synthesize imageURL2x=_imageURL2x;
@property(retain, nonatomic) NSURL *imageURL1x; // @synthesize imageURL1x=_imageURL1x;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithImageURL1X:(id)arg1 imageURL2X:(id)arg2 imageURL3X:(id)arg3;
- (id)initWithConfigDictionary:(id)arg1;
- (id)init;

@end

