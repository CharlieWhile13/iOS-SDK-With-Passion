//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, UITraitCollection, UIView, UIWindow;

@interface _UIContextMenuStyle : NSObject <NSCopying>
{
    BOOL _hasInteractivePreview;
    BOOL _preventPreviewRasterization;
    BOOL _reversesActionOrderWhenAttachedToTop;
    UIWindow *_containerWindow;
    UIView *_containerView;
    NSUInteger _preferredLayout;
    UITraitCollection *_preferredTraitCollection;
    NSArray *_preferredBackgroundEffects;
    UIEdgeInsets _preferredEdgeInsets;
    UIEdgeInsets _preferredBackgroundInsets;
}

+ (id)defaultStyle;
@property(nonatomic) UIEdgeInsets preferredBackgroundInsets; // @synthesize preferredBackgroundInsets=_preferredBackgroundInsets;
@property(retain, nonatomic) NSArray *preferredBackgroundEffects; // @synthesize preferredBackgroundEffects=_preferredBackgroundEffects;
@property(retain, nonatomic) UITraitCollection *preferredTraitCollection; // @synthesize preferredTraitCollection=_preferredTraitCollection;
@property(nonatomic) BOOL reversesActionOrderWhenAttachedToTop; // @synthesize reversesActionOrderWhenAttachedToTop=_reversesActionOrderWhenAttachedToTop;
@property(nonatomic) BOOL preventPreviewRasterization; // @synthesize preventPreviewRasterization=_preventPreviewRasterization;
@property(nonatomic) BOOL hasInteractivePreview; // @synthesize hasInteractivePreview=_hasInteractivePreview;
@property(nonatomic) UIEdgeInsets preferredEdgeInsets; // @synthesize preferredEdgeInsets=_preferredEdgeInsets;
@property(nonatomic) NSUInteger preferredLayout; // @synthesize preferredLayout=_preferredLayout;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIWindow *containerWindow; // @synthesize containerWindow=_containerWindow;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

