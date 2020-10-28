//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>

#import <NanoTimeKitCompanion/NTKActivityFaceViewFactoryDelegate-Protocol.h>

@class ARUIRingsView, NSDate, NTKActivityFaceViewFactory, NTKFaceViewTapControl, NTKPolygonCylinderView, UILabel, UIView;

@interface NTKActivityDigitalFaceView : NTKDigitalFaceView <NTKActivityFaceViewFactoryDelegate>
{
    NTKActivityFaceViewFactory *_faceViewFactory;
    ARUIRingsView *_ringsView;
    UILabel *_moveLabel;
    UILabel *_exerciseLabel;
    UILabel *_standLabel;
    NTKFaceViewTapControl *_tapToLaunchButton;
    UIView *_timeLabelBackgroundView;
    NTKPolygonCylinderView *_densityEditingPolygonView;
    NSDate *_timeDensityEditingOverrideDate;
    struct RingLayout _currentRingLayout;
    double _lastMovePercentage;
    double _lastExercisePercentage;
    double _lastStandPercentage;
    double _blinkerAndSecondsWidth;
    long long _moveStringMetricWidth;
    long long _exerciseStringMetricWidth;
    long long _standStringMetricWidth;
    BOOL _showSeconds;
    double _rightTimeViewInset;
}

+ (id)_newRingsView;
+ (id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2;
+ (void)_prewarmForDevice:(id)arg1;
@property(nonatomic) BOOL showSeconds; // @synthesize showSeconds=_showSeconds;
@property(nonatomic) double rightTimeViewInset; // @synthesize rightTimeViewInset=_rightTimeViewInset;
// - (void).cxx_destruct;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (double)_blinkerAndSecondsWidth;
- (void)_removeActivityRelatedUIs;
- (void)_createActivityRelatedUIs;
- (id)_newActivitySubviewWithTextColor:(id)arg1;
- (void)_enumerateActivityLabels:(id /* CDUnknownBlockType */)arg1;
- (void)_updateTimeViewSecondsDisplayState;
- (BOOL)slotUsesCurvedText:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)timeTravelDateEnteredOrExitedTimelineBounds:(BOOL)arg1;
- (void)_applyEntryModel:(id)arg1 byFraction:(double)arg2 updateLabels:(BOOL)arg3 animated:(BOOL)arg4;
- (void)_applyCurrentEntryModelByFraction:(double)arg1 updateLabels:(BOOL)arg2 animated:(BOOL)arg3;
- (void)applyEntryModelWithUnfilledRings:(id)arg1;
- (void)applyEntryModel:(id)arg1 animated:(BOOL)arg2;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (void)_cleanupAfterZoom;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_applyShowsCanonicalContent;
- (void)_applyShowsLockedUI;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (long long)_polygonIndexForAccuracy:(NSUInteger)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_setActivityViewsAlpha:(double)arg1 animated:(BOOL)arg2;
- (double)_rightTimeViewInsetForEditMode:(long long)arg1;
- (double)_timeAlphaForEditMode:(long long)arg1;
- (double)_ringAlphaForEditMode:(long long)arg1;
- (void)_cleanUpAfterDetailEditing;
- (void)_configureForDetailEditing;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (CGRect)_timeViewBackgroundRect;
- (CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (NSUInteger)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (NSUInteger)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(NSUInteger)arg1 slot:(id)arg2;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (BOOL)_needsForegroundContainerView;
- (void)_loadLayoutRules;
- (void)setDataMode:(long long)arg1;
- (void)_launchButtonPressed:(id)arg1;
- (CGPoint)_ringCenterForLayout:(struct RingLayout)arg1;
- (void)_applyCurrentRingLayout;
- (void)_updateCurrentRingLayoutIfNecessary;
- (void)_layoutForegroundContainerView;
- (void)layoutSubviews;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(CGRect)arg2;
- (NSUInteger)_timeLabelOptions;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2;
- (void)screenWillTurnOn;
- (void)screenDidTurnOff;
- (void)_applyFrozen;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

@end

