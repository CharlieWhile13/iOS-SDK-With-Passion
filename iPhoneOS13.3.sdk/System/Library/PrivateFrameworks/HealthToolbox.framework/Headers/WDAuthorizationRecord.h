//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _HKAuthorizationRecord;

__attribute__((visibility("hidden")))
@interface WDAuthorizationRecord : NSObject
{
    _HKAuthorizationRecord *_internalAuthorizationRecord;
    long long _status;
}

@property long long status; // @synthesize status=_status;
// - (void).cxx_destruct;
- (BOOL)requestedReading;
- (BOOL)requestedSharing;
- (id)init;
- (id)initWithInternalAuthorizationRecord:(id)arg1;

@end
