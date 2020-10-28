//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface CPLDerivativesFilter : NSObject <NSSecureCoding>
{
    BOOL _dropForImages;
    BOOL _dropForVideos;
}

+ (id)dropDerivativesForImages:(BOOL)arg1 videos:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
- (id)description;
- (id)redactedDescription;
- (BOOL)isEqual:(id)arg1;
- (BOOL)shouldDropDerivativeOfType:(NSUInteger)arg1 fromSourceType:(NSUInteger)arg2 isVideo:(BOOL)arg3;
- (BOOL)mightDropSomeDerivativesForSourceType:(NSUInteger)arg1 isVideo:(BOOL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initDroppingDerivativesForImages:(BOOL)arg1 videos:(BOOL)arg2;
- (id)init;

@end

