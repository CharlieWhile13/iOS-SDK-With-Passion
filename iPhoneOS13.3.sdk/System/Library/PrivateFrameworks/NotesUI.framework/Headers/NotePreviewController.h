//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotesUI/ICNotePreviewing-Protocol.h>
#import <NotesUI/NoteContentLayerAttachmentPresentationDelegate-Protocol.h>

@class ICSearchResult, NSArray, NoteContentLayer, NoteObject, NotesBackgroundView;

@interface NotePreviewController : UIViewController <UITextViewDelegate, NoteContentLayerAttachmentPresentationDelegate, ICNotePreviewing>
{
    NoteContentLayer *_contentLayer;
    NoteObject *_note;
    ICSearchResult *_searchResult;
    NSArray *_attachmentPresentations;
}

@property(retain, nonatomic) NSArray *attachmentPresentations; // @synthesize attachmentPresentations=_attachmentPresentations;
@property(retain, nonatomic) ICSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) NoteObject *note; // @synthesize note=_note;
@property(retain, nonatomic) NoteContentLayer *contentLayer; // @synthesize contentLayer=_contentLayer;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForceLightContentIfNecessary;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)attachmentPresentationForContentID:(id)arg1;
- (id)noteContentLayer:(id)arg1 attachmentPresentationForContentID:(id)arg2;
- (id)noteContentLayer:(id)arg1 fileURLForAttachmentWithContentID:(id)arg2;
@property(readonly, nonatomic) NotesBackgroundView *backgroundView;
- (id)attachmentContentIDs;
- (void)setupPreviewWithInitialFrame:(CGRect)arg1;
- (void)setupPreview;
- (id)initWithNote:(id)arg1;
- (id)initWithNote:(id)arg1 searchResult:(id)arg2;
- (void)dealloc;

@end

