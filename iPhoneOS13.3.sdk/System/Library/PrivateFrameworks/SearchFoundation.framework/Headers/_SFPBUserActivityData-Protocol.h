//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString, _SFPBUserActivityInfo;

@protocol _SFPBUserActivityData <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *userInfos;
@property(copy, nonatomic) NSString *activityType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBUserActivityInfo *)userInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)userInfoCount;
- (void)addUserInfo:(_SFPBUserActivityInfo *)arg1;
- (void)clearUserInfo;
@end

