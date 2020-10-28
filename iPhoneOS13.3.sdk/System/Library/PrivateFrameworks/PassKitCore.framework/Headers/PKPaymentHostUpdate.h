//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PKContact, PKPaymentMethod, PKShippingMethod;

@interface PKPaymentHostUpdate : NSObject <NSSecureCoding>
{
    PKContact *_shippingContact;
    PKShippingMethod *_shippingMethod;
    PKPaymentMethod *_paymentMethod;
}

+ (BOOL)supportsSecureCoding;
+ (id)paymentUpdateWithProtobuf:(id)arg1;
@property(readonly, nonatomic) PKPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(readonly, nonatomic) PKShippingMethod *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property(readonly, nonatomic) PKContact *shippingContact; // @synthesize shippingContact=_shippingContact;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 shippingMethod:(id)arg2 paymentMethod:(id)arg3;
- (id)protobuf;

@end

