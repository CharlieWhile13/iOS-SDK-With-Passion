//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDSettingModelBaseProtocol-Protocol.h>

@class HMSettingValue, NSData, NSNumber, NSString, NSUUID;

@protocol HMDSettingModelProtocol <HMDSettingModelBaseProtocol>
@property(copy, nonatomic) NSString *selectionValue;
@property(copy, nonatomic) NSUUID *selectionIdentifier;
@property(copy, nonatomic) NSData *dataValue;
@property(copy, nonatomic) NSString *stringValue;
@property(copy, nonatomic) NSNumber *numberValue;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSNumber *properties;
@property(copy, nonatomic) NSNumber *type;
- (BOOL)setSettingValue:(HMSettingValue *)arg1;
@end

