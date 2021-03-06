//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface SGMatchinfoData : NSObject
{
    NSNumber *_entityId;
    NSNumber *_detailEntityId;
    NSData *_matchinfoData;
}

+ (id)matchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3;
@property(readonly, nonatomic) NSData *matchinfoData; // @synthesize matchinfoData=_matchinfoData;
@property(readonly, nonatomic) NSNumber *detailEntityId; // @synthesize detailEntityId=_detailEntityId;
@property(readonly, nonatomic) NSNumber *entityId; // @synthesize entityId=_entityId;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToMatchinfoData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (id)initWithMatchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3;
- (id)init;

@end

