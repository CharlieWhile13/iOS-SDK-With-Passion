//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDAssertion : NSObject
{
    BOOL _invalidateWhenBackgrounded;
    NSUInteger _type;
    NSString *_identifier;
    NSString *_reason;
}

@property(nonatomic) BOOL invalidateWhenBackgrounded; // @synthesize invalidateWhenBackgrounded=_invalidateWhenBackgrounded;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithType:(NSUInteger)arg1 identifier:(id)arg2 reason:(id)arg3;

@end

