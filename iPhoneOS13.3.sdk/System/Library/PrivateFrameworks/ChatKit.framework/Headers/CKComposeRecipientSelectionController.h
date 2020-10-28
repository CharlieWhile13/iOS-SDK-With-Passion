//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKRecipientSelectionController.h>


@class NSArray, UIView;

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate>
{
    UIView *_pillContainerView;
    id /* CDUnknownBlockType */ _sendBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ sendBlock; // @synthesize sendBlock=_sendBlock;
@property(retain, nonatomic) UIView *pillContainerView; // @synthesize pillContainerView=_pillContainerView;
// - (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)_handlesForRecipients:(id)arg1;
- (BOOL)recipientIsiMessagable:(id)arg1;
- (BOOL)_updateBackfillForNewRecipients;
- (id)autocompleteResultIdentifier:(id)arg1;
- (id)conversationGUIDForRecipient:(id)arg1;
- (BOOL)shouldInvalidateIDSRequests;
- (BOOL)_hasExistingConversationWithAddedRecipient:(id)arg1;
- (id)conversationList;
- (BOOL)alwaysShowSearchResultsTable;
- (BOOL)shouldSuppressSearchResultsTable;
- (BOOL)homogenizePreferredServiceForiMessage;
- (BOOL)shouldAtomizeToConversationName;
- (void)recipientSelectionControllerDidChange;
- (void)reset;
- (void)atomizeAndSendTimeoutHandler;
- (void)atomizeAndInvokeBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_legacyAddRecipient:(id)arg1;
- (id)_subscriptionContextForSimID:(id)arg1 phoneNumber:(id)arg2;
- (void)addRecipient:(id)arg1;
- (void)_atomizeToConversationNameIfNecessary:(NSUInteger)arg1;
@property(readonly, nonatomic) NSArray *proposedRecipients;
@property(readonly, nonatomic) NSArray *expandedRecipients;
- (void)_updatePillViewIfNeededIfIsNewConversation:(BOOL)arg1;
- (BOOL)_canShowWhileLocked;
- (BOOL)deviceHasMultipleSubscriptions;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;

@end

