//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXUIWidgetBar.h>

#import <PhotosUICore/PXUIWidgetHeaderViewDelegate-Protocol.h>

@interface PXUIWidgetHeaderBar : PXUIWidgetBar <PXUIWidgetHeaderViewDelegate>
{
}

- (void)widgetHeaderView:(id)arg1 didSelectCaption:(id)arg2;
- (void)widgetHeaderView:(id)arg1 didSelectSubtitle:(id)arg2;
- (void)setSpec:(id)arg1;
- (void)setDisclosureTitle:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (double)viewHeight;
- (void)updateView;
- (id)createView;

@end

