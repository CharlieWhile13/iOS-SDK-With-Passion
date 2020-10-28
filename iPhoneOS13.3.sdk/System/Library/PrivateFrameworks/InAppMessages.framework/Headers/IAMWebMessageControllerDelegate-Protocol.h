//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IAMWebMessageController, NSDictionary, NSURL;

@protocol IAMWebMessageControllerDelegate <NSObject>

@optional
- (void)webMessageControllerWebViewDidRequestAction:(IAMWebMessageController *)arg1 actionConfiguration:(NSDictionary *)arg2;
- (void)webMessageControllerWebViewDidReportEvent:(IAMWebMessageController *)arg1 event:(NSDictionary *)arg2;
- (void)webMessageControllerWebViewDidRequestOpenURL:(IAMWebMessageController *)arg1 url:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (void)webMessageControllerWebViewDidRequestClose:(IAMWebMessageController *)arg1;
@end

