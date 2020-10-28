//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GKContentView, GKSession, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UITableView;

@interface GKPeerPickerViewController : UIViewController
{
    id _delegate;
    NSMutableDictionary *_sessionMap;
    GKContentView *_btView;
    GKContentView *_listView;
    GKContentView *_statusView;
    GKContentView *_inviteView;
    GKContentView *_currentView;
    GKContentView *_connectTypeView;
    GKContentView *_noPeersView;
    UITableView *_peerTableView;
    NSUInteger _connectionTypesMask;
    NSString *_currentConnectionTypeKey;
    NSMutableArray *_menuQueue;
    BOOL _animating;
    BOOL _alertPresented;
    int _state;
    int _pendingState;
    BOOL _updating;
    NSTimer *_invitationWaitTimer;
    int _bluetoothStatus;
    NSString *_searchingForServicesString;
    NSMutableArray *_peers;
    NSString *_pendingPeer;
    BOOL _alertCancelled;
}

@property(retain, nonatomic) NSTimer *invitationWaitTimer; // @synthesize invitationWaitTimer=_invitationWaitTimer;
@property(nonatomic) BOOL updating; // @synthesize updating=_updating;
@property(nonatomic) int pendingState; // @synthesize pendingState=_pendingState;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) BOOL alertCancelled; // @synthesize alertCancelled=_alertCancelled;
@property(nonatomic) BOOL alertPresented; // @synthesize alertPresented=_alertPresented;
@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property(retain, nonatomic) NSMutableArray *menuQueue; // @synthesize menuQueue=_menuQueue;
@property(nonatomic) int bluetoothStatus; // @synthesize bluetoothStatus=_bluetoothStatus;
@property(nonatomic) NSString *currentConnectionTypeKey; // @synthesize currentConnectionTypeKey=_currentConnectionTypeKey;
@property NSUInteger connectionTypesMask; // @synthesize connectionTypesMask=_connectionTypesMask;
@property(retain, nonatomic) NSMutableArray *peers; // @synthesize peers=_peers;
@property(copy, nonatomic) NSString *searchingForServicesString; // @synthesize searchingForServicesString=_searchingForServicesString;
@property(retain, nonatomic) UITableView *peerTableView; // @synthesize peerTableView=_peerTableView;
@property(readonly, nonatomic) GKContentView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) GKContentView *noPeersView; // @synthesize noPeersView=_noPeersView;
@property(retain, nonatomic) GKContentView *connectTypeView; // @synthesize connectTypeView=_connectTypeView;
@property(retain, nonatomic) GKContentView *inviteView; // @synthesize inviteView=_inviteView;
@property(retain, nonatomic) GKContentView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) GKContentView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) GKContentView *btView; // @synthesize btView=_btView;
@property(retain, nonatomic) NSMutableDictionary *sessionMap; // @synthesize sessionMap=_sessionMap;
@property id delegate; // @synthesize delegate=_delegate;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)didPresentAlertView:(id)arg1;
- (void)_turnBluetoothOn:(id)arg1;
- (void)_nearbyButtonPressed:(id)arg1;
- (void)_onlineButtonPressed:(id)arg1;
- (void)_declineInvitation:(id)arg1;
- (void)_acceptInvitation:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 peerDidBecomeBusy:(id)arg2;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 didReceiveConnectionRequestFromPeer:(id)arg2;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)_changePanelAnimationDidEnd:(id)arg1;
- (void)contentView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_showView:(id)arg1 animated:(BOOL)arg2;
- (void)_showNoPeersView:(BOOL)arg1;
- (void)_showStatusView:(int)arg1 peerName:(id)arg2 animated:(BOOL)arg3;
- (void)_showInviteViewWithName:(id)arg1 animated:(BOOL)arg2;
- (void)_showListView:(BOOL)arg1;
- (void)_setupListView;
- (void)_showBluetoothErrorView:(BOOL)arg1;
- (void)_showRequestBluetoothView:(BOOL)arg1;
- (void)_showConnectTypeView:(BOOL)arg1;
- (BOOL)_shouldShowConnectTypeView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_createAlertFromGKContentView:(id)arg1;
- (BOOL)_updatePicker:(int)arg1;
- (void)loadInitialView;
- (void)loadView;
- (void)dismiss;
- (void)show;
- (void)_createNoPeersViewIfNeeded;
- (void)_createStatusViewIfNeeded;
- (void)_createInviteViewIfNeeded;
- (void)_createListViewIfNeeded;
- (void)_createBTViewIfNeeded;
- (void)_createConnectTypeViewIfNeeded;
- (void)_btPowerStateChanged:(id)arg1;
- (int)_determineBluetoothStatus;
- (void)_timedOutWaitingForInvitation:(id)arg1;
- (void)_setSessionAvailabilityForState:(int)arg1;
- (void)_sortAndUpdateTable;
@property(readonly, nonatomic, getter=isVisible) BOOL visible; // @dynamic visible;
@property(readonly, nonatomic) GKSession *currentSession; // @dynamic currentSession;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

@end

