//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class NSString, UIAlertController;
@protocol GKFriendRequestComposeViewControllerDelegate;

@interface GKFriendRequestComposeViewController : UINavigationController
{
    unsigned int _rid;
    id <GKFriendRequestComposeViewControllerDelegate> _composeViewDelegateWeak;
    NSString *_message;
    NSUInteger _recipientCount;
    UIAlertController *_alertController;
}

+ (NSUInteger)maxNumberOfRecipients;
+ (BOOL)_preventsAppearanceProxyCustomization;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(nonatomic) NSUInteger recipientCount; // @synthesize recipientCount=_recipientCount;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)sendFinishedMessageToDelegateCancelled:(BOOL)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (void)addRecipientPlayers:(id)arg1;
- (void)_addRecipientInternals:(id)arg1;
- (void)prepareForNewRecipients:(id)arg1;
@property(nonatomic) unsigned int rid; // @synthesize rid=_rid;
@property(nonatomic) id <GKFriendRequestComposeViewControllerDelegate> composeViewDelegate; // @synthesize composeViewDelegate=_composeViewDelegateWeak;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (NSUInteger)supportedInterfaceOrientations;
- (void)_setupChildViewController;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

