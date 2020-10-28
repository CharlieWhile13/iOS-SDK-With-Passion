//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUSignificantEventOffsetPickerDelegate-Protocol.h>

@class NSDateComponents, NSString;
@protocol HUTimerTriggerOffsetEditorDelegate;

@interface HUTimerTriggerOffsetEditorViewController : HUItemTableViewController <HUSignificantEventOffsetPickerDelegate>
{
    NSString *_significantEvent;
    NSDateComponents *_currentOffset;
    id <HUTimerTriggerOffsetEditorDelegate> _delegate;
    NSDateComponents *_selectedOffset;
}

@property(retain, nonatomic) NSDateComponents *selectedOffset; // @synthesize selectedOffset=_selectedOffset;
@property(nonatomic) __weak id <HUTimerTriggerOffsetEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDateComponents *currentOffset; // @synthesize currentOffset=_currentOffset;
@property(readonly, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
// - (void).cxx_destruct;
- (void)significantEventOffsetPicker:(id)arg1 didSelectOffset:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)_done:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)viewDidLoad;
- (id)initWithSignificantEvent:(id)arg1 currentOffset:(id)arg2 delegate:(id)arg3;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;

@end

