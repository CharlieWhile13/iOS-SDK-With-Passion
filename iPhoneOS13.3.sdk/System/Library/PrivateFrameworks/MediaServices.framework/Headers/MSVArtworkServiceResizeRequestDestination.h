//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSURL;

@interface MSVArtworkServiceResizeRequestDestination : NSObject <NSSecureCoding>
{
    long long _format;
    NSURL *_destinationURL;
    double _compressionQuality;
    CGSize _size;
}

+ (BOOL)supportsSecureCoding;
+ (id)jpegDestinationWithSize:(CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3;
+ (id)destinationWithFormat:(long long)arg1 size:(CGSize)arg2 url:(id)arg3;
@property(readonly, nonatomic) double compressionQuality; // @synthesize compressionQuality=_compressionQuality;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) long long format; // @synthesize format=_format;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(long long)arg1 size:(CGSize)arg2 compressionQuality:(double)arg3 destinationURL:(id)arg4;

@end

