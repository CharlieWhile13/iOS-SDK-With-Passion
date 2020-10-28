//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutMetrics.h>

#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>

@class NSString;

@interface PXExploreLayoutMetrics : PXLayoutMetrics <PXGDiagnosticsProvider>
{
    BOOL _allowHeaders;
    BOOL _allowSpecialPanoHeaders;
    long long _layoutType;
    long long _layoutSubtype;
    double _interitemSpacing;
    long long _largeHeroDensity;
    id /* CDUnknownBlockType */ _acceptableLargeHeroPredicate;
    UIEdgeInsets _safeAreaInsets;
}

@property(nonatomic) BOOL allowSpecialPanoHeaders; // @synthesize allowSpecialPanoHeaders=_allowSpecialPanoHeaders;
@property(nonatomic) BOOL allowHeaders; // @synthesize allowHeaders=_allowHeaders;
@property(copy, nonatomic) id /* CDUnknownBlockType */ acceptableLargeHeroPredicate; // @synthesize acceptableLargeHeroPredicate=_acceptableLargeHeroPredicate;
@property(nonatomic) long long largeHeroDensity; // @synthesize largeHeroDensity=_largeHeroDensity;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) long long layoutSubtype; // @synthesize layoutSubtype=_layoutSubtype;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSpec:(id)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)initWithUserInterfaceIdiom:(long long)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3 referenceSize:(CGSize)arg4 safeAreaInsets:(UIEdgeInsets)arg5;
- (id)init;

@end

