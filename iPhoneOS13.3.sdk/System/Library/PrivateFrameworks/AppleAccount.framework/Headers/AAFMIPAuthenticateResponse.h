//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAFMIPAuthenticateResponse : AAResponse
{
    NSDictionary *_tokens;
    NSDictionary *_appleAccountInfo;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fmipWipeToken;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

