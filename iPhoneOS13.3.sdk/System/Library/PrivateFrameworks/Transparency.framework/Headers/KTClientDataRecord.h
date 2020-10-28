//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSDate;

@interface KTClientDataRecord : NSObject <NSSecureCoding>
{
    BOOL _verified;
    NSData *_clientData;
    NSUInteger _applicationVersion;
    NSData *_clientDataVRFOutput;
    NSDate *_markedForDeletion;
    NSDate *_deletionEscrowExpiry;
    NSDate *_addedDate;
}

+ (BOOL)supportsSecureCoding;
@property BOOL verified; // @synthesize verified=_verified;
@property(retain) NSDate *addedDate; // @synthesize addedDate=_addedDate;
@property(retain) NSDate *deletionEscrowExpiry; // @synthesize deletionEscrowExpiry=_deletionEscrowExpiry;
@property(retain) NSDate *markedForDeletion; // @synthesize markedForDeletion=_markedForDeletion;
@property(retain) NSData *clientDataVRFOutput; // @synthesize clientDataVRFOutput=_clientDataVRFOutput;
@property NSUInteger applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(retain) NSData *clientData; // @synthesize clientData=_clientData;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithSingleDataRecord:(id)arg1;
- (id)initWithMutation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)debugDescription;

@end

