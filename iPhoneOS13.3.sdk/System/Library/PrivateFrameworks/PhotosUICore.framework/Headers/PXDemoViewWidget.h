//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXWidget-Protocol.h>

@class NSString, PXWidgetSpec, UIView;
@protocol PXAnonymousView, PXWidgetDelegate;

@interface PXDemoViewWidget : NSObject <PXWidget>
{
    BOOL _isExpanded;
    double _height;
    BOOL __didLoadContent;
    id <PXWidgetDelegate> _widgetDelegate;
    PXWidgetSpec *_spec;
    long long _contentViewAnchoringType;
    UIView *__containerView;
    UIView *__contentView;
    long long __animationCount;
    CGSize __contentSize;
}

@property(nonatomic, setter=_setAnimationCount:) long long _animationCount; // @synthesize _animationCount=__animationCount;
@property(nonatomic, setter=_setDidLoadContent:) BOOL _didLoadContent; // @synthesize _didLoadContent=__didLoadContent;
@property(nonatomic, setter=_setContentSize:) CGSize _contentSize; // @synthesize _contentSize=__contentSize;
@property(readonly, nonatomic) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(nonatomic, setter=_setContentViewAnchoringType:) long long contentViewAnchoringType; // @synthesize contentViewAnchoringType=_contentViewAnchoringType;
@property(retain, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
// - (void).cxx_destruct;
- (void)userDidSelectDisclosureControl;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)contentViewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
- (void)loadContentData;
- (void)setContentSize:(CGSize)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
@property(readonly, nonatomic) BOOL hasContentForCurrentInput;
- (void)_updateContentViewColor;
- (CGRect)_contentViewFrameForSize:(CGSize)arg1;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_loadViews;
- (id)init;

@end

