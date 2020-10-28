//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface TILoginCredential : NSObject <NSCopying>
{
    NSString *_username;
    NSString *_password;
    NSString *_site;
}

@property(readonly, nonatomic) NSString *site; // @synthesize site=_site;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2 site:(id)arg3;

@end
