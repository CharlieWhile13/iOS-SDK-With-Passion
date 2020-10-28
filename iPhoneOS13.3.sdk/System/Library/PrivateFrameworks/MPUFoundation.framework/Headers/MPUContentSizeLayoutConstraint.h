//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSLayoutConstraint.h>

@class MPUNotificationObserver, NSString, UILabel;

@interface MPUContentSizeLayoutConstraint : NSLayoutConstraint
{
    MPUNotificationObserver *_preferredContentSizeDidChangeObserver;
    double _textStyleDefaultLeading;
    BOOL _isBaselineConstraint;
    BOOL _isLineNumberConstraint;
    NSUInteger _numberOfLines;
    UILabel *_targetLabel;
    double _fontSizeMultiplier;
    double _defaultSizeConstant;
    NSString *_textStyle;
}

+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 autoupdatingConstantFromLabel:(id)arg7 textStyle:(id)arg8 numberOfLines:(NSUInteger)arg9;
+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 withTextStyle:(id)arg5 multiplier:(double)arg6 nonStandardLeading:(double)arg7;
+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 withTextStyle:(id)arg5 nonStandardLeading:(double)arg6;
+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 toView:(id)arg2 attribute:(long long)arg3 withTextStyle:(id)arg4 nonStandardLeading:(double)arg5;
+ (id)contentSizeAutoupdatingConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 textStyle:(id)arg7 defaultSizeConstant:(double)arg8;
@property(copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) double defaultSizeConstant; // @synthesize defaultSizeConstant=_defaultSizeConstant;
@property(nonatomic) double fontSizeMultiplier; // @synthesize fontSizeMultiplier=_fontSizeMultiplier;
// - (void).cxx_destruct;
- (void)_updatePreferredContentSize;

@end

