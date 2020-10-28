//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface NPKPeerPaymentQuickTypeParser : NSObject
{
    NSSet *_supportedCurrencyCodes;
    NSSet *_allowedPayloadIDs;
}

@property(readonly, nonatomic) NSSet *allowedPayloadIDs; // @synthesize allowedPayloadIDs=_allowedPayloadIDs;
@property(readonly, nonatomic) NSSet *supportedCurrencyCodes; // @synthesize supportedCurrencyCodes=_supportedCurrencyCodes;
// - (void).cxx_destruct;
- (id)parsePayload:(id)arg1 payloadID:(id)arg2 maxCount:(NSUInteger)arg3;
- (id)parsePayload:(id)arg1 payloadID:(id)arg2;
- (id)initWithSupportedCurrencyCodes:(id)arg1 allowedPayloadIDs:(id)arg2;

@end

