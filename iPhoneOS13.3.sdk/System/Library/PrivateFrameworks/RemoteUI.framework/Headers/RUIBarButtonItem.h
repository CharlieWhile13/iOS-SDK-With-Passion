//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

@class UIBarButtonItem;

@interface RUIBarButtonItem : RUIElement
{
    UIBarButtonItem *_barButtonItem;
    id /* CDUnknownBlockType */ _action;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem;
- (void)_buttonPressed:(id)arg1;

@end

