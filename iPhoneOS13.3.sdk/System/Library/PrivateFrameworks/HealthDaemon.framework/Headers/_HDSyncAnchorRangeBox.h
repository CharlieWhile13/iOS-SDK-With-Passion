//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface _HDSyncAnchorRangeBox : NSObject <NSSecureCoding>
{
    struct HDSyncAnchorRange _anchorRange;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct HDSyncAnchorRange)anchorRange;
- (id)initWithHDSyncAnchorRange:(struct HDSyncAnchorRange)arg1;

@end
