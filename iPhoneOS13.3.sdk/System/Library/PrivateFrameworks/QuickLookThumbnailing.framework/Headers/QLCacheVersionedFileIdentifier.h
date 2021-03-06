//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class QLCacheFileIdentifier, QLThumbnailVersion;

@interface QLCacheVersionedFileIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    QLThumbnailVersion *_version;
    QLCacheFileIdentifier *_fileIdentifier;
}

+ (id)versionedFileIdentifierWithThumbnailRequest:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly) QLCacheFileIdentifier *fileIdentifier; // @synthesize fileIdentifier=_fileIdentifier;
@property(readonly) QLThumbnailVersion *version; // @synthesize version=_version;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithFileIdentifier:(id)arg1 version:(id)arg2;

@end

