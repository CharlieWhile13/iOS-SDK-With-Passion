//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TLKProminenceView : UIView
{
    NSUInteger _prominence;
}

+ (id)viewWithProminence:(NSUInteger)arg1;
@property(nonatomic) NSUInteger prominence; // @synthesize prominence=_prominence;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithProminence:(NSUInteger)arg1;
- (id)init;

@end
