//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKDashboardCollectionViewController.h>

#import <GameCenterUI/GKComposeControllerDelegate-Protocol.h>

@class GKChallenge, NSArray, NSLayoutConstraint, NSString, UIBarButtonItem, UIButton, UILabel, UITextField, UIView, UIViewController;

@interface GKDashboardChallengePlayerPickerViewController : GKDashboardCollectionViewController <UITextFieldDelegate, UISearchBarDelegate, GKComposeControllerDelegate>
{
    BOOL _shouldIgnoreClearSelection;
    BOOL _shouldApplyInitialOffset;
    NSString *_message;
    id /* CDUnknownBlockType */ _completionHandler;
    GKChallenge *_challenge;
    NSArray *_initiallySelectedPlayers;
    UILabel *_descriptionLabel;
    UIButton *_sendButton;
    UIBarButtonItem *_customizeMessageButton;
    UITextField *_messageField;
    UIView *_scrollingHeader;
    NSLayoutConstraint *_scrollingHeaderTopConstraint;
    double _scrollingHeaderTopConstraintConstant;
    NSLayoutConstraint *_customizeMessageBottomConstraint;
    double _initialCustomizeMessageBottomConstraintConstant;
    UIViewController *_composeController;
    UIEdgeInsets _initialInsets;
}

@property(retain, nonatomic) UIViewController *composeController; // @synthesize composeController=_composeController;
@property(nonatomic) double initialCustomizeMessageBottomConstraintConstant; // @synthesize initialCustomizeMessageBottomConstraintConstant=_initialCustomizeMessageBottomConstraintConstant;
@property(nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint; // @synthesize customizeMessageBottomConstraint=_customizeMessageBottomConstraint;
@property(nonatomic) BOOL shouldApplyInitialOffset; // @synthesize shouldApplyInitialOffset=_shouldApplyInitialOffset;
@property(nonatomic) UIEdgeInsets initialInsets; // @synthesize initialInsets=_initialInsets;
@property(nonatomic) double scrollingHeaderTopConstraintConstant; // @synthesize scrollingHeaderTopConstraintConstant=_scrollingHeaderTopConstraintConstant;
@property(nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint; // @synthesize scrollingHeaderTopConstraint=_scrollingHeaderTopConstraint;
@property(nonatomic) UIView *scrollingHeader; // @synthesize scrollingHeader=_scrollingHeader;
@property(nonatomic) UITextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) UIBarButtonItem *customizeMessageButton; // @synthesize customizeMessageButton=_customizeMessageButton;
@property(nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) BOOL shouldIgnoreClearSelection; // @synthesize shouldIgnoreClearSelection=_shouldIgnoreClearSelection;
@property(retain, nonatomic) NSArray *initiallySelectedPlayers; // @synthesize initiallySelectedPlayers=_initiallySelectedPlayers;
@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setSearchText:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_updateButtonEnableState;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)cancel:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)send:(id)arg1;
- (void)clearSelection;
- (id)preferredFocusEnvironments;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)selectPlayersAtIndexPaths:(id)arg1;
- (void)dataUpdated:(BOOL)arg1 withError:(id)arg2;
- (void)loadData;
- (void)applyInitialContentOffset;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)adjustCustomizeMessageConstraint;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithChallenge:(id)arg1 initiallySelectedPlayers:(id)arg2;

@end

