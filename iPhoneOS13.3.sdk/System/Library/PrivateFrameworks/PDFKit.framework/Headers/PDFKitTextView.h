//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PDFKitTextViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFKitTextView : NSObject <UITextViewDelegate>
{
    PDFKitTextViewPrivate *_private;
}

// - (void).cxx_destruct;
- (void)_setAttributedString:(id)arg1;
- (void)_setup;
- (void)_setAlignment:(long long)arg1;
- (void)_setFontColor:(id)arg1;
- (void)_setFont:(id)arg1;
- (void)_setString:(id)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_textWidgetDone;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)removeFromSuperview;
- (void)rotateByAngle:(double)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)annotation;
- (id)layer;
- (id)textView;
- (id)initWithAnnotation:(id)arg1 pdfPageView:(id)arg2 pdfView:(id)arg3;

@end

