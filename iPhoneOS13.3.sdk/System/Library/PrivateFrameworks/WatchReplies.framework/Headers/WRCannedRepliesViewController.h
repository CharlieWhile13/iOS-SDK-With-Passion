//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier, UIImage, WRCannedRepliesStore;

@interface WRCannedRepliesViewController : PSListController
{
    WRCannedRepliesStore *_repliesStore;
    PSSpecifier *_addNewSpecifier;
    PSSpecifier *_smartRepliesSpecifier;
    UIImage *_accessoryImage;
    UIImage *_highlightedAccessoryImage;
    BOOL _supportedEnhancedEditing;
    NSUInteger _category;
}

@property(readonly, nonatomic) NSUInteger category; // @synthesize category=_category;
// - (void).cxx_destruct;
- (void)saveReplies;
- (void)loadRepliesStoreIfNeeded;
- (id)cannedReplies;
- (id)cannedRepliesFromSpecifiers;
- (void)addNewReply:(id)arg1;
- (void)configureCellAccessoryImage:(id)arg1;
- (NSUInteger)numberOfDefaultReplySpecifiers;
- (id)includeSmartReplies;
- (void)setIncludeSmartReplies:(id)arg1 specifier:(id)arg2;
- (id)customReply:(id)arg1;
- (void)setCustomReply:(id)arg1 specifier:(id)arg2;
- (void)_returnKeyPressed:(id)arg1;
- (id)newCannedReplySpecifier;
- (void)returnPressedAtEnd;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateEditDoneButton;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

