//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;
@protocol PKPassLibraryDataProvider, PKPassbookPeerPaymentSettingsDataSource, PKPassbookPeerPaymentSettingsDelegate, PKPaymentDataProvider, PKPaymentOptionsProtocol, PKPaymentSetupDelegate;

@protocol PKPassbookSettingsDataSource <NSObject>
- (id <PKPassbookPeerPaymentSettingsDataSource>)peerPaymentDataSource;
- (id <PKPassbookPeerPaymentSettingsDelegate>)peerPaymentDelegate;
- (BOOL)canRegisterForPeerPayment;
- (BOOL)deviceInRestrictedMode;
- (BOOL)deviceSupportsInAppPayments;
- (BOOL)secureElementIsProductionSigned;
- (NSString *)secureElementID;
- (id <PKPaymentOptionsProtocol>)optionsDelegate;
- (id <PKPaymentDataProvider>)paymentDataProvider;
- (id <PKPassLibraryDataProvider>)passLibraryDataProvider;
- (id <PKPaymentSetupDelegate>)setupDelegate;

@optional
- (BOOL)supportsCredentialType:(long long)arg1;
- (BOOL)hasFelicaSecureElement;
- (NSString *)deviceName;
@end

