//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMManagementTestMessageMessage_Reply : CEMPayloadBase
{
    NSString *_replyEcho;
}

+ (id)buildRequiredOnlyWithEcho:(id)arg1;
+ (id)buildWithEcho:(id)arg1;
+ (id)allowedReasons;
+ (id)allowedReplyKeys;
@property(copy, nonatomic) NSString *replyEcho; // @synthesize replyEcho=_replyEcho;
// - (void).cxx_destruct;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

