//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TestFlightCore/TFFeedbackFormBaseCell.h>


@class TFFeedbackEntryLongText, UITextView;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormLongTextCell : TFFeedbackFormBaseCell <UITextViewDelegate>
{
    UITextView *_textView;
    TFFeedbackEntryLongText *_longTextEntry;
}

+ (id)_createTextViewFontForTraitCollection:(id)arg1;
+ (double)_adjustedTextViewHeightForCandidateHeight:(double)arg1 font:(id)arg2;
+ (CGSize)_sizeToFitText:(id)arg1 fittingSize:(CGSize)arg2 inTraitEnvironment:(id)arg3;
+ (UIEdgeInsets)_textViewInsetsInTraitEnvironment:(id)arg1;
+ (CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(CGSize)arg3 inTraitEnvironment:(id)arg4;
@property(retain, nonatomic) TFFeedbackEntryLongText *longTextEntry; // @synthesize longTextEntry=_longTextEntry;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
// - (void).cxx_destruct;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)_updateCellHeightForTextUpdatesInTableView:(id)arg1;
- (void)_updateCellHeightForTextIfNecessary;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3;
- (void)setDisplayedDataString:(id)arg1;
- (NSUInteger)displayableDataType;
- (void)applyContentsOfEntry:(id)arg1;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

