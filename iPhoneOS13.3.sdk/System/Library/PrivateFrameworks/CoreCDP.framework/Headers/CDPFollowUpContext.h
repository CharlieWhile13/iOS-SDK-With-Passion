//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface CDPFollowUpContext : NSObject <NSSecureCoding>
{
    NSUInteger _repairType;
    BOOL _shouldNotify;
    BOOL _force;
    NSString *_followUpType;
}

+ (BOOL)supportsSecureCoding;
+ (id)contextForRecoveryKeyRepair;
+ (id)contextForOfflinePasscodeChange;
+ (id)contextWithType:(id)arg1;
+ (id)contextForStateRepair;
@property(copy, nonatomic) NSString *followUpType; // @synthesize followUpType=_followUpType;
@property(nonatomic) BOOL force; // @synthesize force=_force;
@property(nonatomic) BOOL shouldNotify; // @synthesize shouldNotify=_shouldNotify;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) NSUInteger repairType;

@end

