//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoWeatherComplicationsCompanion/NWCTemplateFormattable-Protocol.h>

@class CLKTextProvider, NWMTemperatureFormatter;

@interface NWCConditionsTemplateFormatter : NSObject <NWCTemplateFormattable>
{
    NWMTemperatureFormatter *_temperatureFormatter;
    CLKTextProvider *_noDataTextProvider;
}

+ (id)sharedFormatter;
@property(retain, nonatomic) CLKTextProvider *noDataTextProvider; // @synthesize noDataTextProvider=_noDataTextProvider;
@property(retain, nonatomic) NWMTemperatureFormatter *temperatureFormatter; // @synthesize temperatureFormatter=_temperatureFormatter;
// - (void).cxx_destruct;
- (id)_graphicRectangularTemplateWithTextProvider:(id)arg1 hourlyForecastedConditions:(id)arg2 timeZone:(id)arg3;
- (id)switcherTemplateWithFamily:(long long)arg1;
- (BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
- (id)utilitarianSmallTemplateForConditions:(id)arg1;
- (id)modularSmallTemplateForConditions:(id)arg1;
- (id)graphicRectangularTemplateForLocalLocation:(BOOL)arg1 timeZone:(id)arg2 conditions:(id)arg3 dailyForecastedConditions:(id)arg4 hourlyForecastedConditions:(id)arg5;
- (id)graphicCornerTemplateForConditions:(id)arg1;
- (id)graphicCircularTemplateForConditions:(id)arg1;
- (id)graphicBezelTemplateForConditions:(id)arg1 dailyForecastedConditions:(id)arg2;
- (id)extraLargeTemplateForConditions:(id)arg1;
- (id)circularSmallTemplateForConditions:(id)arg1;
- (id)circularMediumTemplateForConditions:(id)arg1;

@end

