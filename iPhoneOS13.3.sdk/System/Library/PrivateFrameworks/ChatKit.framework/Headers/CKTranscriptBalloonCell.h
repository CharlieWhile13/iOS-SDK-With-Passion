//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptMessageContentCell.h>

@class CKBalloonView;

@interface CKTranscriptBalloonCell : CKTranscriptMessageContentCell
{
    BOOL _mayReparentPluginViews;
    CKBalloonView *_balloonView;
}

@property(nonatomic) BOOL mayReparentPluginViews; // @synthesize mayReparentPluginViews=_mayReparentPluginViews;
@property(retain, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;
// - (void).cxx_destruct;
- (void)setAnimationPauseReasons:(long long)arg1;
- (id)messageDisplayView;
- (void)willLayoutDrawerLabelFrame:(CGRect )arg1;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)configureForChatItem:(id)arg1;

@end

