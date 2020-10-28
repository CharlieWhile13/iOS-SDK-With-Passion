//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputView.h>


@class NSArray, SiriUIAudioRoutePickerButton, SiriUIContentButton, SiriUIHelpButton, UITextField;
@protocol SiriUIKeyboardViewDelegate;

@interface SiriUIKeyboardView : UIInputView <UITextFieldDelegate>
{
    SiriUIHelpButton *_helpButton;
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    SiriUIContentButton *_reportBugButton;
    double _interKeyboardAccessoryViewPadding;
    double _verticalCompensation;
    NSArray *_originalInstalledLanguageIdentifiers;
    UITextField *_textField;
    id <SiriUIKeyboardViewDelegate> _delegate;
}

+ (double)_paddingBetweenKeyboardAndInputAccessoryViewWhenMinimized:(BOOL)arg1;
+ (id)inputAccessoryViewBackgroundColor;
+ (double)heightForWidthSizeClass:(BOOL)arg1;
+ (double)_keyboardAccessoryViewHeight;
+ (double)_textFieldHeight;
+ (id)_textFieldFont;
@property(nonatomic) __weak id <SiriUIKeyboardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
// - (void).cxx_destruct;
- (void)dealloc;
- (double)_visibleHeightFromNotification:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)_undoTextFieldEdit:(id)arg1;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_createReportBugButtonWithTemplateImage:(id)arg1;
- (void)_configureReportButtonForAccessibility;
- (void)_configureReportBugButton;
- (BOOL)_showsReportBugButton;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (void)_audioRouteButtonTapped:(id)arg1;
- (void)setAudioRoutePickerBluetoothOn:(BOOL)arg1;
- (void)setShowAudioRoutePicker:(BOOL)arg1;
- (void)_configureAudioRoutePickerForAccessibility;
- (id)_createTextFieldWithFrame:(CGRect)arg1;
- (void)_helpButtonLongPressed:(id)arg1;
- (void)_helpButtonTapped:(id)arg1;
- (id)_createHelpButton:(CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setText:(id)arg1;
- (CGSize)intrinsicContentSize;
- (UIEdgeInsets)safeAreaInsets;
- (void)safeAreaInsetsDidChange;
- (CGRect)_defaultFrame;
- (id)initWithFrame:(CGRect)arg1 inputViewStyle:(long long)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

