//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/_UIDocumentPickerCell.h>

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentCell : _UIDocumentPickerCell
{
    BOOL _enabled;
}

@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)_showPickableDiagnostic;
- (void)updateThumbnail;
- (void)updateContents;
- (void)reloadItem:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;

@end

