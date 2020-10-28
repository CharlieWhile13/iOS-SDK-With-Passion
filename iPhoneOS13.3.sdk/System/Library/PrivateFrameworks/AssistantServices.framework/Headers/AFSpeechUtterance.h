//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface AFSpeechUtterance : NSObject <NSSecureCoding>
{
    NSArray *_interpretationIndices;
    long long _confidenceScore;
    long long _source;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(copy, nonatomic) NSArray *interpretationIndices; // @synthesize interpretationIndices=_interpretationIndices;
// - (void).cxx_destruct;
- (id)initWithInterpretationIndices:(id)arg1 confidenceScore:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end

