//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CURangingPeer : NSObject
{
    NSData *_deviceAddress;
    NSData *_deviceIRK;
    NSString *_deviceModel;
}

@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSData *deviceIRK; // @synthesize deviceIRK=_deviceIRK;
@property(copy, nonatomic) NSData *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

