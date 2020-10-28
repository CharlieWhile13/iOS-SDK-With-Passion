//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface TSUUUIDPath : NSObject <NSCopying, NSFastEnumeration>
{
    NSArray *_uuids;
}

+ (id)tokenizeUUIDPathString:(id)arg1;
+ (id)lastUUIDFromUUIDPathString:(id)arg1;
@property(readonly, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;
// - (void).cxx_destruct;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *UUIDPathString;
@property(readonly, nonatomic) NSUUID *lastUUID;
- (id)UUIDPathByAppendingUUID:(id)arg1;
- (id)initWithUUIDPathString:(id)arg1;
- (id)initWithArray:(id)arg1;
- (void)saveToMessage:(struct UUIDPath )arg1;
- (id)initWithMessage:(const struct UUIDPath )arg1;

@end

