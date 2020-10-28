//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MusicCarDisplayUI/CAMLParserDelegate-Protocol.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

@interface MCDNowPlayingButtonView : UIView <CAMLParserDelegate>
{
    CALayer *_animatedGlyphLayer;
    CAStateController *_stateController;
    NSMutableArray *_barLayers;
    CALayer *_platterLayer;
    BOOL _highlighted;
    NSString *_stateName;
}

+ (id)classSubstitions;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(copy, nonatomic) NSString *stateName; // @synthesize stateName=_stateName;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)_updateColors;
- (void)layoutSubviews;
- (void)_handleGlyphLayerDidLoad:(id)arg1;
- (id)initWithCAML:(id)arg1;

@end

