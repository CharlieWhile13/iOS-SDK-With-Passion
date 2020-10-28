//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface TSPDocumentResourceLegacyInfo : NSObject <NSCopying>
{
    NSString *_digestString;
    NSString *_locator;
}

// - (void).cxx_destruct;
- (BOOL)isEqualToDocumentResourceLegacyInfo:(id)arg1;
@property(readonly, copy) NSString *locator;
@property(readonly, copy) NSString *digestString;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithDigestString:(id)arg1 locator:(id)arg2;
- (id)init;

@end

