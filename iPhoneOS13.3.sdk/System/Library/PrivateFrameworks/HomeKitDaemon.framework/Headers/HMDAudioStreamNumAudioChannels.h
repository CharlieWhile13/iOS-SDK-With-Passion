//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface HMDAudioStreamNumAudioChannels : NSObject <NSCopying>
{
    unsigned char _numAudioChannels;
}

+ (id)parsedFromData:(id)arg1 error:(id )arg2;
@property(nonatomic) unsigned char numAudioChannels; // @synthesize numAudioChannels=_numAudioChannels;
- (id)description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializeWithError:(id )arg1;
- (BOOL)parseFromData:(id)arg1 error:(id )arg2;
- (id)initWithNumAudioChannels:(unsigned char)arg1;
- (id)init;

@end

