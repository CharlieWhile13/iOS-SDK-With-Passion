//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSNumber, NSString;

@interface AASetupAssistantSetupDelegatesResponse : AAResponse
{
}

@property(readonly, nonatomic) NSString *dsid;
- (id)responseParametersForServiceIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *responseParameters;
@property(readonly, nonatomic) NSString *statusMessage;
@property(readonly, nonatomic) NSNumber *status;

@end

