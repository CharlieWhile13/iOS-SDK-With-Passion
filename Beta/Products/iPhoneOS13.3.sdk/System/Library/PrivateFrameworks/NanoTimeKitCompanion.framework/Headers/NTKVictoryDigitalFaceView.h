/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVictoryDigitalFaceView : NTKFaceView <NTKVictoryDigitalTimeViewDelegate> {
    UIColor * _complicationForegroundColor;
    UIColor * _complicationPlatterColor;
    double  _currentLogoPlatterXOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _logoPlatterCenter;
    NTKComplicationDisplayWrapperView * _logoWrapperView;
    NTKUtilityComplicationFactory * _utilityComplicationFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyColor:(id)arg1 platterColor:(id)arg2 toComplicationView:(id)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3 fromPlatterColor:(id)arg4 toPlatterColor:(id)arg5 fromBackgroundColor:(id)arg6 toBackgroundColor:(id)arg7 slot:(id)arg8;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (double)_bottomComplicationAlphaForEditMode:(long long)arg1;
- (void)_cleanupAfterEditing;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (double)_keylineEdgeGapForState:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (double)_logoPlatterAlphaForEditMode:(long long)arg1;
- (double)_logoPlatterXOffsetForEditMode:(long long)arg1;
- (void)_logoTapped;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_positionLogoPlatterView;
- (void)_prepareForEditing;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (void)_setupLogoViews;
- (bool)_supportsTimeScrubbing;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (double)_timeAlphaForEditMode:(long long)arg1;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_timeViewFrame;
- (void)_unloadSnapshotContentViews;
- (void)_updateImageToBlur;
- (long long)_utilitySlotForSlot:(id)arg1;
- (double)_verticalPaddingForStatusBar;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (void)victoryDigitalTimeViewDidChangeTime:(id)arg1;

@end