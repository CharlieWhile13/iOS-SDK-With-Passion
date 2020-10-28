//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupConfigurationResponse : TRResponseMessage
{
    BOOL _needsNetwork;
    NSSet *_unauthenticatedAccountServices;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSSet *unauthenticatedAccountServices; // @synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices;
@property(nonatomic) BOOL needsNetwork; // @synthesize needsNetwork=_needsNetwork;
// - (void).cxx_destruct;
- (id)_stringFromAccountServices:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

