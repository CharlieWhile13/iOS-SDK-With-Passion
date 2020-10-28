//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDCollection, EDResources, NSArray, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDLegend : NSObject
{
    int mLegendPosition;
    OADGraphicProperties *mGraphicProperties;
    NSUInteger mFontIndex;
    EDCollection *mLegendEntries;
    EDResources *mResources;
    BOOL mIsVertical;
    BOOL mIsOverlay;
    NSArray *mLabelEffects;
}

// - (void).cxx_destruct;
- (id)description;
- (BOOL)isAutoSizeAndPosition;
- (void)setLabelEffects:(id)arg1;
- (id)labelEffects;
- (void)setIsOverlay:(BOOL)arg1;
- (BOOL)isOverlay;
- (void)setIsSingleColumnLegend:(BOOL)arg1;
- (BOOL)isSingleColumnLegend;
- (id)legendEntries;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setLegendPosition:(int)arg1;
- (int)legendPosition;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(NSUInteger)arg1;
- (NSUInteger)fontIndex;

@end

