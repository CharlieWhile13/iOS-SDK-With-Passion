//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBSplashController.h>

#import <SetupAssistantUI/BFFFlowItem-Protocol.h>

@class NSArray;
@protocol BFFFlowItemDelegate;

__attribute__((visibility("hidden")))
@interface BuddyChoiceController : OBSplashController <BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;
    NSArray *_choices;
}

+ (id)cloudConfigSkipKey;
@property(copy, nonatomic) NSArray *choices; // @synthesize choices=_choices;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)didSelectChoice:(id)arg1;
- (void)_tappedChoice:(id)arg1;

@end

