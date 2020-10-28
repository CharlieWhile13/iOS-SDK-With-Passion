//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray, NSString;
@protocol MTVisualStyleSetProviding;

@interface MTCoreMaterialVisualStylingProvider : NSObject
{
    id <MTVisualStyleSetProviding> _visualStyleSet;
    NSPointerArray *_observers;
}

+ (BOOL)canGenerateVisualStyleSetFromRecipe:(id)arg1;
+ (id)coreMaterialVisualStylingProviderForStyleSetNamed:(id)arg1 inBundle:(id)arg2;
+ (id)coreMaterialVisualStylingProviderForRecipe:(id)arg1 andCategory:(id)arg2;
@property(retain, nonatomic, getter=_observers) NSPointerArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic, getter=_visualStyleSet, setter=_setVisualStyleSet:) id <MTVisualStyleSetProviding> visualStyleSet; // @synthesize visualStyleSet=_visualStyleSet;
// - (void).cxx_destruct;
- (id)description;
- (void)_notifyObserversWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)visualStylingForStyle:(id)arg1;
- (void)updateVisualStyleSetGeneratedFromRecipe:(id)arg1;
- (void)updateVisualStyleSetFromRecipe:(id)arg1 andCategory:(id)arg2;
@property(readonly, copy, nonatomic) NSString *visualStyleSetName;

@end

