//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSSet, NSString;

@interface CLSEKCalendar : NSObject <NSCoding>
{
    BOOL _hasSharees;
    NSSet *_shareesAndOwner;
    NSString *_calendarIdentifier;
}

@property(readonly) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(readonly) NSSet *shareesAndOwner; // @synthesize shareesAndOwner=_shareesAndOwner;
@property(readonly) BOOL hasSharees; // @synthesize hasSharees=_hasSharees;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKCalendar:(id)arg1;

@end
