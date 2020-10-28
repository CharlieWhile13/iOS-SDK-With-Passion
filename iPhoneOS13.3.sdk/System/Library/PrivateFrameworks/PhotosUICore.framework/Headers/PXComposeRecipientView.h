//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIFont;
@protocol PXComposeRecipientViewDelegate;

@interface PXComposeRecipientView : UIView
{
    struct {
        BOOL textDidChange;
        BOOL didFinishEnteringAddress;
        BOOL requestAddRecipient;
        BOOL didFinishPickingRecipient;
        BOOL didAddRecipient;
        BOOL didRemoveRecipient;
        BOOL didChangeSize;
    } _delegateRespondsTo;
    BOOL _separatorHidden;
    id <PXComposeRecipientViewDelegate> _delegate;
    UIFont *_baseFont;
    NSString *_text;
    NSString *_label;
    UIButton *_addButton;
    long long _maxRecipients;
    NSArray *_recipients;
}

@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic, getter=isSeparatorHidden) BOOL separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(nonatomic) long long maxRecipients; // @synthesize maxRecipients=_maxRecipients;
@property(readonly, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) UIFont *baseFont; // @synthesize baseFont=_baseFont;
@property(nonatomic) __weak id <PXComposeRecipientViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)removeRecipients:(id)arg1;
- (void)addRecipients:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (void)addRecipient:(id)arg1;
- (id)init;

@end

