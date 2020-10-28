//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, SXComponentClassification, SXComponentTextStyle, SXComponents;
@protocol SXAutoPlacement, SXComponent, SXComponentLayout, SXComponentStyle, SXComponentTextStyle, SXDocumentStyle, SXImageResource, SXResource, SXTextStyle;

@protocol SXDOMObjectProviding <NSObject>
@property(readonly, nonatomic) id <SXAutoPlacement> autoPlacement;
@property(readonly, nonatomic) SXComponents *components;
@property(readonly, nonatomic) id <SXDocumentStyle> documentStyle;
- (id <SXImageResource>)imageResourceForIdentifier:(NSString *)arg1;
- (id <SXResource>)resourceForIdentifier:(NSString *)arg1;
- (id <SXComponentTextStyle>)componentTextStyleForIdentifier:(NSString *)arg1 inheritingFromComponentTextStyle:(SXComponentTextStyle *)arg2;
- (id <SXComponentTextStyle>)componentTextStyleForIdentifier:(NSString *)arg1 classification:(SXComponentClassification *)arg2;
- (id <SXComponentTextStyle>)componentTextStyleForIdentifiers:(NSArray *)arg1;
- (id <SXTextStyle>)textStyleForIdentifier:(NSString *)arg1;
- (id <SXComponentStyle>)componentStyleForIdentifiers:(NSArray *)arg1;
- (id <SXComponentStyle>)componentStyleForComponent:(id <SXComponent>)arg1;
- (id <SXComponentStyle>)componentStyleForIdentifier:(NSString *)arg1;
- (id <SXComponentLayout>)componentLayoutForIdentifier:(NSString *)arg1;
@end

