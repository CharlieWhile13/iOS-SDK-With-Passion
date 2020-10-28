//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, NSString, NSUUID, VSViewServiceResponse;

@protocol VSViewServiceHostProtocol <NSObject>
- (void)_didChooseProviderWithIdentifier:(NSString *)arg1 vetoHandler:(void (^)(BOOL))arg2;
- (void)_didCancelRequest:(NSUUID *)arg1;
- (void)_didChooseAdditionalProvidersForRequest:(NSUUID *)arg1;
- (void)_request:(NSUUID *)arg1 didFailWithError:(NSError *)arg2;
- (void)_request:(NSUUID *)arg1 didFinishWithResponse:(VSViewServiceResponse *)arg2;
- (void)_dismissViewController;
- (void)_presentViewController;
@end

