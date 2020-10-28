//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXFontAttributesConstructor-Protocol.h>

@protocol SXFontIndex;

@interface SXFontAttributesConstructor : NSObject <SXFontAttributesConstructor>
{
    id <SXFontIndex> _fontIndex;
}

@property(readonly, nonatomic) id <SXFontIndex> fontIndex; // @synthesize fontIndex=_fontIndex;
// - (void).cxx_destruct;
- (long long)weightByApplyingWeightLabels:(id)arg1 toWeight:(long long)arg2;
- (id)fontNameForAttributes:(id)arg1 size:(long long)arg2;
- (id)fontAttributesForFontDescriptions:(id)arg1;
- (id)initWithFontIndex:(id)arg1;

@end

