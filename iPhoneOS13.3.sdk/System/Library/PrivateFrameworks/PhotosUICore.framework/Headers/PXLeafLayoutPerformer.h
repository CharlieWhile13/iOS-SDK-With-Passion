//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXBaseLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXLeafLayoutPerformer : PXBaseLayoutPerformer
{
    NSArray *children;
    PXLayoutPerformerOutput *layoutOutput;
    CDStruct_392cfed4 layoutInput;
}

- (void)setLayoutInput:(CDStruct_392cfed4)arg1;
- (CDStruct_392cfed4)layoutInput;
- (void)setLayoutOutput:(id)arg1;
- (id)layoutOutput;
- (id)children;
// - (void).cxx_destruct;
- (CGSize)performLayout;

@end

