//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPHTMLComponent.h>

@class LPCaptionBarPresentationProperties, LPCaptionBarStyle;

__attribute__((visibility("hidden")))
@interface LPHTMLCaptionBarComponent : LPHTMLComponent
{
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
    BOOL _useProgressSpinner;
}

+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)additionalRulesForStyle:(id)arg1;
+ (id)baseRules;
// - (void).cxx_destruct;
- (void)buildComponents;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 useProgressSpinner:(BOOL)arg3 themePath:(id)arg4 generator:(id)arg5;

@end

