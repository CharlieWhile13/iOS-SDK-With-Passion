//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNAvatarView.h>

@class NSString, UIViewController;

@interface CKAvatarView : CNAvatarView
{
    UIViewController *_presentingViewController;
    NSString *_preferredHandle;
}

@property(nonatomic) __weak NSString *preferredHandle; // @synthesize preferredHandle=_preferredHandle;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
// - (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;

@end

