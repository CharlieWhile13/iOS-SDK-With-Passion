//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinBoard/BBBulletinUpdate.h>

@interface BBBulletinRemoveUpdate : BBBulletinUpdate
{
    BOOL _shouldSync;
}

+ (BOOL)supportsSecureCoding;
+ (id)updateWithBulletin:(id)arg1 feeds:(NSUInteger)arg2 shouldSync:(BOOL)arg3;
@property(readonly, nonatomic) BOOL shouldSync; // @synthesize shouldSync=_shouldSync;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)typeDescription;
- (id)initWithBulletin:(id)arg1 feeds:(NSUInteger)arg2 shouldSync:(BOOL)arg3;

@end

