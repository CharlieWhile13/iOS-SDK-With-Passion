//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationModuleView.h>

#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplate, NSDate;

@interface NTKModularTemplateView : NTKComplicationModuleView <NTKTemplateComplicationDisplay>
{
    NSDate *_timeTravelDate;
    CLKComplicationTemplate *_complicationTemplate;
    NSUInteger _highlightMode;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
@property(nonatomic) NSUInteger highlightMode; // @synthesize highlightMode=_highlightMode;
@property(readonly) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property(retain, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
// - (void).cxx_destruct;
- (void)_propagateColorSchemeToSubviews:(id)arg1;
- (void)_enumerateColoringViewsSubviewsWithBlock:(id /* CDUnknownBlockType */)arg1 invertedHighlight:(BOOL)arg2;
- (BOOL)_useInvertedHighlightForColorScheme:(id)arg1;
- (void)_update;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(NSUInteger)arg2 toFaceColor:(NSUInteger)arg3 units:(NSUInteger)arg4 brightenedUnits:(NSUInteger)arg5;
- (void)setContainsOverrideFaceColor:(id)arg1;
- (void)_setColorScheme:(id)arg1 propagateToSubviews:(BOOL)arg2;
- (void)applyFaceColor:(NSUInteger)arg1 units:(NSUInteger)arg2;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;

@end

