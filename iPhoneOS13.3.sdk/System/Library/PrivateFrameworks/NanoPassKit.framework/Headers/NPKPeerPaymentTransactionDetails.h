//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, PKPaymentTransaction;

@interface NPKPeerPaymentTransactionDetails : NSObject
{
    PKPaymentTransaction *_transaction;
    NSString *_serviceIdentifier;
    NSUInteger _paymentStatus;
    NSArray *_availableActions;
    NSDate *_availableActionsFetchDate;
}

@property(retain, nonatomic) NSDate *availableActionsFetchDate; // @synthesize availableActionsFetchDate=_availableActionsFetchDate;
@property(retain, nonatomic) NSArray *availableActions; // @synthesize availableActions=_availableActions;
@property(nonatomic) NSUInteger paymentStatus; // @synthesize paymentStatus=_paymentStatus;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
// - (void).cxx_destruct;
- (id)description;

@end

