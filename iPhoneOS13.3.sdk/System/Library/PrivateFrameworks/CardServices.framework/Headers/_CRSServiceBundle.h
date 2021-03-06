//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBundle.h>

#import <CardServices/CRSIdentifiedServing-Protocol.h>

@class NSString;
@protocol CRSServing;

@interface _CRSServiceBundle : NSBundle <CRSIdentifiedServing>
{
    id <CRSServing> _service;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier;
- (void)_initializeServiceWithClass:(Class)arg1;
- (id)underlyingService;

@end

