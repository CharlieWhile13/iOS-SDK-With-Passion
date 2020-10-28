//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHVisualization.h>

@class CHRecognitionSessionResult, NSSet;

@interface CHStrokeGroupBasedVisualization : CHVisualization
{
    BOOL _newGroupsDefaultToActive;
    CHRecognitionSessionResult *_resultDrawn;
    NSSet *_activeStrokeGroupAncestorIdentifiers;
}

@property(readonly, nonatomic) BOOL newGroupsDefaultToActive; // @synthesize newGroupsDefaultToActive=_newGroupsDefaultToActive;
@property(copy, nonatomic) NSSet *activeStrokeGroupAncestorIdentifiers; // @synthesize activeStrokeGroupAncestorIdentifiers=_activeStrokeGroupAncestorIdentifiers;
@property(retain, nonatomic) CHRecognitionSessionResult *resultDrawn; // @synthesize resultDrawn=_resultDrawn;
- (void)_markStrokeGroupsAsActive:(id)arg1;
- (void)toggleVisualizationRegionAtPoint:(CGPoint)arg1;
- (void)drawVisualizationInRect:(CGRect)arg1 context:(CGContext )arg2 viewBounds:(CGRect)arg3;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (CGRect)dirtyRectForStrokeGroup:(id)arg1;
- (void)dealloc;

@end

