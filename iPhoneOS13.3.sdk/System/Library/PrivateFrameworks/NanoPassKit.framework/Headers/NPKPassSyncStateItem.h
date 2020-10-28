//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSDictionary, NSNumber, NSString;

@interface NPKPassSyncStateItem : NSObject <NSSecureCoding>
{
    NSString *_passTypeIdentifier;
    NSString *_serialNumber;
    NSNumber *_sequenceCounter;
    NSData *_manifestHash;
    NSDictionary *_manifest;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(retain, nonatomic) NSNumber *sequenceCounter; // @synthesize sequenceCounter=_sequenceCounter;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToPassSyncStateItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)shortDescription;
- (id)description;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)initWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 sequenceCounter:(id)arg3 manifestHash:(id)arg4 manifest:(id)arg5;
- (id)initWithPass:(id)arg1;
- (id)protoSyncStateItem;
- (id)initWithProtoSyncStateItem:(id)arg1;

@end

