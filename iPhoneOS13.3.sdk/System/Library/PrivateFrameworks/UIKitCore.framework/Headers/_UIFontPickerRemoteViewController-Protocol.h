//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSXPCListenerEndpoint, UIFontDescriptor, UIFontPickerViewControllerConfiguration;

@protocol _UIFontPickerRemoteViewController <NSObject>
- (void)_setFontServicesFontPickerSupportListenerEndpoint:(NSXPCListenerEndpoint *)arg1;
- (void)_prepareForDisplayWithCompletion:(void (^)(void))arg1;
- (void)_setHideNavigationBar:(BOOL)arg1;
- (void)_setConfiguration:(UIFontPickerViewControllerConfiguration *)arg1;
- (void)_setSelectedFont:(UIFontDescriptor *)arg1 scrollToVisible:(BOOL)arg2;
@end

