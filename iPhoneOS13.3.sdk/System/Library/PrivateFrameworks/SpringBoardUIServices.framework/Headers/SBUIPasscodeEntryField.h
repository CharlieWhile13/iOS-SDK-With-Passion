//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class NSMutableCharacterSet, NSString, SBUIPasscodeTextField, UIColor, UIFont, UITextField;
@protocol SBUIPasscodeEntryFieldDelegate;

@interface SBUIPasscodeEntryField : UIView <UITextFieldDelegate>
{
    id <SBUIPasscodeEntryFieldDelegate> _delegate;
    SBUIPasscodeTextField *_textField;
    NSMutableCharacterSet *_numericTrimmingSet;
    BOOL _ignoreCallbacks;
    BOOL _resigningFirstResponder;
    UIColor *_customBackgroundColor;
}

+ (BOOL)_usesTextFieldForFirstResponder;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) __weak id <SBUIPasscodeEntryFieldDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)notePasscodeFieldDidAcceptEntry;
- (void)notePasscodeFieldTextDidChange;
- (BOOL)shouldInsertPasscodeText:(id)arg1;
- (void)_autofillForBiometricAuthenticationWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_handleKeyUIEvent:(id)arg1 source:(int)arg2;
- (CGSize)_viewSize;
@property(readonly, nonatomic, getter=_textField) UITextField *textField; // @synthesize textField=_textField;
- (void)_resetForFailedPasscode:(BOOL)arg1;
- (BOOL)_hasAnyCharacters;
- (void)_deleteLastCharacter;
- (void)_appendString:(id)arg1;
- (void)_setLuminosityBoost:(double)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)reset;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
- (void)deleteLastCharacter;
- (void)appendString:(id)arg1;
@property(retain, nonatomic) UIFont *font;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1;

@end

