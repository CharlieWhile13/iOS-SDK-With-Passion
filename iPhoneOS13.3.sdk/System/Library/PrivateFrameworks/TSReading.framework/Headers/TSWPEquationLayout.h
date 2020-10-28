//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDLayout.h>

@class TSDShadow;
@protocol EQKitLayout, EQKitLayoutContext;

@interface TSWPEquationLayout : TSDLayout
{
    BOOL _equationIsValid;
    id <EQKitLayout> _equationLayout;
    id <EQKitLayoutContext> _equationLayoutContext;
    CGColor _textColor;
    TSDShadow *_textShadow;
}

@property(readonly, nonatomic) TSDShadow *textShadow; // @synthesize textShadow=_textShadow;
@property(readonly, nonatomic) CGColor textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) BOOL equationIsValid; // @synthesize equationIsValid=_equationIsValid;
@property(retain, nonatomic) id <EQKitLayoutContext> equationLayoutContext; // @synthesize equationLayoutContext=_equationLayoutContext;
@property(readonly, nonatomic) id <EQKitLayout> equationLayout; // @synthesize equationLayout=_equationLayout;
- (BOOL)wantsRoundedInlinePosition;
- (void)willLayoutInlineWithTextAttributes:(struct __CFDictionary )arg1 columnWidth:(double)arg2;
- (double)inlineCenteredAlignmentOffset;
- (double)inlineVerticalOffset;
- (CGRect)frameForCulling;
- (id)computeLayoutGeometry;
- (void)validate;
- (void)dealloc;

@end

