//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CURangingSample : NSObject
{
    int _channel;
    int _rawRSSI;
    NSData *_deviceAddress;
    NSString *_deviceModel;
}

@property(nonatomic) int rawRSSI; // @synthesize rawRSSI=_rawRSSI;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSData *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property(nonatomic) int channel; // @synthesize channel=_channel;
// - (void).cxx_destruct;
- (id)description;

@end

