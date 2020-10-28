//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKAccountProvisioningControllerDelegate-Protocol.h>
#import <PassKitUI/PKFeatureDisplayableErrorProvider-Protocol.h>
#import <PassKitUI/PKSetupFlowControllerProtocol-Protocol.h>

@class PKAccount, PKAccountCredential, PKAccountProvisioningController, PKAccountService, PKAssertion, PKPaymentProvisioningController;
@protocol PKAccountFlowControllerDelegate, PKPaymentSetupViewControllerDelegate, PKSetupFlowControllerProtocol;

@interface PKAccountFlowController : NSObject <PKAccountProvisioningControllerDelegate, PKFeatureDisplayableErrorProvider, PKSetupFlowControllerProtocol>
{
    PKAccountProvisioningController *_accountProvisioningController;
    PKAccount *_account;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    long long _context;
    PKAccountService *_accountService;
    NSUInteger _postProvisoningContentIndex;
    NSUInteger _madeDefault;
    BOOL _endedProvisioningFlow;
    PKAssertion *_notificationSupressionAssertion;
    BOOL _isMerchantApp;
    BOOL _shownMoreInfoItems;
    NSUInteger _operations;
    PKAccountCredential *_accountCredential;
    PKPaymentProvisioningController *_provisioningController;
    id <PKSetupFlowControllerProtocol> _parentFlowController;
    id <PKAccountFlowControllerDelegate> _delegate;
}

+ (id)displayableErrorForError:(id)arg1 featureIdentifier:(NSUInteger)arg2 genericErrorTitle:(id)arg3 genericErrorMessage:(id)arg4;
@property(nonatomic) __weak id <PKAccountFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <PKSetupFlowControllerProtocol> parentFlowController; // @synthesize parentFlowController=_parentFlowController;
@property(readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(readonly, nonatomic) PKAccountCredential *accountCredential; // @synthesize accountCredential=_accountCredential;
@property(readonly, nonatomic) NSUInteger operations; // @synthesize operations=_operations;
// - (void).cxx_destruct;
- (void)authAndDecryptWithVirtualCard:(id)arg1 authenticationReason:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_invalidateAssertion;
- (void)_acquireAssertion;
- (void)_resetPostProvisioningContent;
- (void)_nextPostProvisioningViewControllerWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)endProvisioningFlow;
@property(readonly, nonatomic) PKAccountProvisioningController *accountProvisioningController;
- (void)_requestPresentationOfActiviationViewControllerShowingMadeDefault:(BOOL)arg1;
- (void)_accountProvisoningControllerRequiresNextViewController:(id)arg1;
- (void)_checkAccountProvisioningControllerState:(id)arg1;
- (void)accountProvisioningController:(id)arg1 displayableError:(id)arg2;
- (void)accountProvisioningControllerUpdatedState:(id)arg1;
- (void)makeAccountPassDefault:(BOOL)arg1;
- (void)performInitalOperations;
- (void)nextViewControllerWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)firstAccountViewController;
- (NSUInteger)_fitleredOperations:(NSUInteger)arg1 account:(id)arg2 context:(long long)arg3;
- (void)dealloc;
- (id)initWithAccountCredential:(id)arg1 provisioningController:(id)arg2 setupDelegate:(id)arg3 context:(long long)arg4 operations:(NSUInteger)arg5;
- (id)init;

@end

