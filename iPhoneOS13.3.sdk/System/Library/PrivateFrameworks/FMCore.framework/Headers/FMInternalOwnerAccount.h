//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCore/FMOwnerAccountIdentity-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FMInternalOwnerAccount : NSObject <FMOwnerAccountIdentity>
{
    NSString *_personId;
    NSString *_username;
    NSString *_firstName;
    NSString *_lastName;
}

@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *personId; // @synthesize personId=_personId;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithAccount:(id)arg1;

@end

