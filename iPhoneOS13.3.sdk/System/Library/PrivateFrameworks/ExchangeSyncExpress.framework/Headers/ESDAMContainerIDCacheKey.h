//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface ESDAMContainerIDCacheKey : NSObject <NSCopying>
{
    NSString *_accountID;
    long long _dataclass;
}

@property(readonly, nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithAccountID:(id)arg1 andDataclass:(long long)arg2;

@end
