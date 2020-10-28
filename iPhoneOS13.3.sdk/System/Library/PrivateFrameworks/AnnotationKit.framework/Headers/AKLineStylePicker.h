//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKModernToolbarPicker.h>

@interface AKLineStylePicker : AKModernToolbarPicker
{
    NSUInteger _lineType;
    long long _lineStyle;
}

@property(readonly) long long lineStyle; // @synthesize lineStyle=_lineStyle;
@property(readonly) NSUInteger lineType; // @synthesize lineType=_lineType;
- (void)revalidateItems:(id)arg1;
- (id)_buttonImagesForType:(NSUInteger)arg1;
- (long long)_shapeTagForType:(NSUInteger)arg1;
- (void)_styleButtonPressed:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 lineType:(NSUInteger)arg2 controller:(id)arg3;

@end

