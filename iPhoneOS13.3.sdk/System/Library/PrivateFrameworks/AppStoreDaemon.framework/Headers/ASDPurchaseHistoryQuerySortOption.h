//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface ASDPurchaseHistoryQuerySortOption : NSObject <NSSecureCoding>
{
    BOOL _ascending;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
@property BOOL ascending; // @synthesize ascending=_ascending;
@property(copy) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 ascending:(BOOL)arg2;

@end

