//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSSPresetSource-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCHStyleBootstrapping : NSObject <TSSPresetSource>
{
}

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(NSUInteger)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (void)bootstrapStylesInStylesheet:(id)arg1 numberOfPresets:(NSUInteger)arg2;
+ (id)stylePresetForStylesheet:(id)arg1 roleIndex:(NSUInteger)arg2;
+ (id)p_bootstrappedStylePresetInContext:(id)arg1 stylesheet:(id)arg2 presetIndex:(NSUInteger)arg3;
+ (id)p_defaultParagraphStyleOfClass:(Class)arg1 stylesheet:(id)arg2 identifier:(id)arg3;
+ (id)p_defaultStyleOfClass:(Class)arg1 stylesheet:(id)arg2 identifier:(id)arg3;

@end

