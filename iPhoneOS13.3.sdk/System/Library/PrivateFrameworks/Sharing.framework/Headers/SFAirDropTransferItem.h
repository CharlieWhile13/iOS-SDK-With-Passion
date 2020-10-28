//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface SFAirDropTransferItem : NSObject <NSSecureCoding>
{
    BOOL _isFile;
    NSString *_type;
    NSString *_subtype;
    long long _count;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL isFile; // @synthesize isFile=_isFile;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)incrementCount;
- (id)initWithType:(id)arg1 subtype:(id)arg2 isFile:(BOOL)arg3;
- (id)initWithType:(id)arg1 isFile:(BOOL)arg2;
- (id)init;

@end

