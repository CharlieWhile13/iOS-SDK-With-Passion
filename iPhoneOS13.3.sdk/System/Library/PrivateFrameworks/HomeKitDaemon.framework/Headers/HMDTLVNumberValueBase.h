//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>

@class NSNumber;

@interface HMDTLVNumberValueBase : NSObject <NSCopying, HMDTLVProtocol>
{
    NSNumber *_value;
}

@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_serialize;
- (id)serializeWithError:(id )arg1;
- (id)_parseFromData:(const char )arg1 length:(NSUInteger)arg2 status:(int )arg3;
- (BOOL)parseFromData:(id)arg1 error:(id )arg2;
- (id)initWithValue:(id)arg1;
- (id)init;

@end

