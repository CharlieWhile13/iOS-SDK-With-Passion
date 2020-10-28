//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface AFSpeechSynthesisRecord : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_utterance;
    NSUInteger _beginTimestamp;
    NSUInteger _endTimestamp;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSUInteger endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(readonly, nonatomic) NSUInteger beginTimestamp; // @synthesize beginTimestamp=_beginTimestamp;
@property(readonly, copy, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)_descriptionWithIndent:(NSUInteger)arg1;
- (id)description;
- (id)initWithUtterance:(id)arg1 beginTimestamp:(NSUInteger)arg2 endTimestamp:(NSUInteger)arg3;
- (id)mutatedCopyWithMutator:(id /* CDUnknownBlockType */)arg1;

@end

