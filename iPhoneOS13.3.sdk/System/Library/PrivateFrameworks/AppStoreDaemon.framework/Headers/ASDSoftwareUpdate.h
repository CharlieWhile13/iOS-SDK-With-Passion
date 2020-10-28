//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface ASDSoftwareUpdate : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_blockedBy;
    NSDate *_installDate;
    NSDictionary *_metrics;
    BOOL _perDevice;
    BOOL _profileValidated;
    NSDictionary *_rawUpdateDictionary;
    long long _rawUpdateState;
    NSDate *_timestamp;
    long long _updateState;
    BOOL _downloaded;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long rawUpdateState; // @synthesize rawUpdateState=_rawUpdateState;
@property(copy, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) long long updateState; // @synthesize updateState=_updateState;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSDictionary *rawUpdateDictionary; // @synthesize rawUpdateDictionary=_rawUpdateDictionary;
@property(nonatomic, getter=isProfileValidated) BOOL profileValidated; // @synthesize profileValidated=_profileValidated;
@property(nonatomic, getter=isPerDevice) BOOL perDevice; // @synthesize perDevice=_perDevice;
@property(nonatomic, getter=isDownloaded) BOOL downloaded; // @synthesize downloaded=_downloaded;
@property(copy, nonatomic) NSDate *installDate; // @synthesize installDate=_installDate;
@property(copy, nonatomic) NSArray *blockedBy; // @synthesize blockedBy=_blockedBy;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSDictionary *updateDictionary;
@property(readonly, nonatomic) long long storeItemIdentifier;
- (id)releaseDate;
@property(readonly, nonatomic) long long parentalControlsRank;
@property(readonly, nonatomic) NSNumber *externalVersionIdentifier;
@property(readonly, nonatomic) NSString *buyParams;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)initWithUpdateDictionary:(id)arg1;

@end

