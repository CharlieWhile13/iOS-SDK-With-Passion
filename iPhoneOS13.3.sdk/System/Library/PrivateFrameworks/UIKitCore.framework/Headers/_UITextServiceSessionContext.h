//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, UIResponder, UIView;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface _UITextServiceSessionContext : NSObject <NSSecureCoding>
{
    UIResponder<UITextInput> *_textInput;
    UIView *_view;
    NSString *_textWithContext;
    NSRange _selectedRange;
    CGRect _presentationRect;
}

+ (id)sessionContextForType:(long long)arg1 withTextInput:(id)arg2;
+ (id)sessionContextWithText:(id)arg1 withRect:(CGRect)arg2 withRange:(NSRange)arg3 withView:(id)arg4;
+ (id)sessionContextWithText:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) CGRect presentationRect; // @synthesize presentationRect=_presentationRect;
@property(readonly, nonatomic) NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(readonly, copy, nonatomic) NSString *textWithContext; // @synthesize textWithContext=_textWithContext;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) UIResponder<UITextInput> *textInput; // @synthesize textInput=_textInput;
// - (void).cxx_destruct;
- (void)convertRectToView:(id)arg1;
- (void)_gatherAdditionalContext;
- (BOOL)_typeRequiresContext:(long long)arg1;
- (id)initForType:(long long)arg1 withText:(id)arg2 withTextInput:(id)arg3 withView:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
