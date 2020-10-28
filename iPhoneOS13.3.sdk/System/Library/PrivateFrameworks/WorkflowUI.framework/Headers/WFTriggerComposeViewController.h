//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFComposeViewController.h>

@protocol WFTriggerComposeViewControllerDelegate;

@interface WFTriggerComposeViewController : WFComposeViewController
{
    id <WFTriggerComposeViewControllerDelegate> delegate;
    NSUInteger _mode;
}

@property(readonly, nonatomic) NSUInteger mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <WFTriggerComposeViewControllerDelegate> delegate; // @synthesize delegate;
// - (void).cxx_destruct;
- (void)didTapNext:(id)arg1;
- (id)doneBarButtonItem;
- (void)dismissForTutorial:(BOOL)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)emptyStateString;
- (void)viewDidLoad;
- (BOOL)isModalInPresentation;
- (id)initWithWorkflow:(id)arg1 mode:(NSUInteger)arg2 database:(id)arg3;

@end

