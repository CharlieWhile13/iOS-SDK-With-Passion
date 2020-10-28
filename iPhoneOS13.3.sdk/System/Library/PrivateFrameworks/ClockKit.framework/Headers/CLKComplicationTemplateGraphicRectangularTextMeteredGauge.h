//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKFullColorImageProvider, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicRectangularTextMeteredGauge : CLKComplicationTemplate
{
    CLKFullColorImageProvider *_headerImageProvider;
    CLKTextProvider *_headerTextProvider;
    CLKTextProvider *_body1TextProvider;
    CLKGaugeProvider *_gaugeProvider;
}

@property(copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
@property(copy, nonatomic) CLKTextProvider *body1TextProvider; // @synthesize body1TextProvider=_body1TextProvider;
@property(copy, nonatomic) CLKTextProvider *headerTextProvider; // @synthesize headerTextProvider=_headerTextProvider;
@property(copy, nonatomic) CLKFullColorImageProvider *headerImageProvider; // @synthesize headerImageProvider=_headerImageProvider;
// - (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end
