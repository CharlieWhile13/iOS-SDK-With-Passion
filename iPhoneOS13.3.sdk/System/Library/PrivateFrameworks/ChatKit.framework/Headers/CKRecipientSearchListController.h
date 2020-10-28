//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocompleteUI/CNAutocompleteResultsTableViewController.h>

#import <ChatKit/CKContactsSearchManagerDelegate-Protocol.h>
#import <ChatKit/IDSBatchIDQueryControllerDelegate-Protocol.h>

@class CKContactsSearchManager, IDSBatchIDQueryController, IMAccount, NSArray, NSDate;

@interface CKRecipientSearchListController : CNAutocompleteResultsTableViewController <IDSBatchIDQueryControllerDelegate, CKContactsSearchManagerDelegate>
{
    BOOL shouldHideGroupsDonations;
    BOOL _smsEnabled;
    NSArray *_enteredRecipients;
    NSArray *_prefilteredRecipients;
    IMAccount *_defaultiMessageAccount;
    IDSBatchIDQueryController *_statusQueryController;
    CKContactsSearchManager *_searchManager;
    NSArray *_searchResults;
    NSDate *_idsQueryStartTime;
    NSArray *_conversationCache;
}

@property(copy, nonatomic) NSArray *conversationCache; // @synthesize conversationCache=_conversationCache;
@property(retain, nonatomic) NSDate *idsQueryStartTime; // @synthesize idsQueryStartTime=_idsQueryStartTime;
@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) CKContactsSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(retain, nonatomic) IDSBatchIDQueryController *statusQueryController; // @synthesize statusQueryController=_statusQueryController;
@property(retain, nonatomic) IMAccount *defaultiMessageAccount; // @synthesize defaultiMessageAccount=_defaultiMessageAccount;
@property(nonatomic) BOOL smsEnabled; // @synthesize smsEnabled=_smsEnabled;
@property(retain, nonatomic) NSArray *prefilteredRecipients; // @synthesize prefilteredRecipients=_prefilteredRecipients;
@property(retain, nonatomic) NSArray *enteredRecipients; // @synthesize enteredRecipients=_enteredRecipients;
@property(nonatomic) BOOL shouldHideGroupsDonations; // @synthesize shouldHideGroupsDonations;
// - (void).cxx_destruct;
- (long long)idsStatusForAddress:(id)arg1;
- (BOOL)_serviceColorForRecipients:(id)arg1;
- (id)_statusQueryController;
- (id)_conversationList;
- (void)removeRecipient:(id)arg1;
- (void)didSelectRecipient:(id)arg1 atIndex:(NSUInteger)arg2;
@property(nonatomic) BOOL suppressGroupSuggestions;
- (void)invalidateSearchManager;
- (void)cancelSearch;
- (void)invalidateOutstandingIDStatusRequests;
- (BOOL)isSearchResultsHidden;
- (BOOL)hasSearchResults;
- (void)searchWithText:(id)arg1;
- (void)chatStateChanged:(id)arg1;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (id)conversationCacheForContactsSearchManager:(id)arg1;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;

@end

