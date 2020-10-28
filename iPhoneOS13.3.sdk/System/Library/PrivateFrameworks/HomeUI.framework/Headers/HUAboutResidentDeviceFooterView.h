//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>


@class NSMutableArray, UITextView;
@protocol HUAboutResidentDeviceFooterViewDelegate;

@interface HUAboutResidentDeviceFooterView : UITableViewHeaderFooterView <UITextViewDelegate>
{
    id <HUAboutResidentDeviceFooterViewDelegate> _delegate;
    UITextView *_messageView;
    NSMutableArray *_constraints;
    UIEdgeInsets _messageInsets;
}

@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UITextView *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) UIEdgeInsets messageInsets; // @synthesize messageInsets=_messageInsets;
@property(nonatomic) __weak id <HUAboutResidentDeviceFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_linkTextAttributes;
- (id)_textAttributes;
- (void)_setupViews;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4;
- (void)updateConstraints;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end
