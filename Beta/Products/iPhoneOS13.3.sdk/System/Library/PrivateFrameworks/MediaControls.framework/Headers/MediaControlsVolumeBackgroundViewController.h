/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsVolumeBackgroundViewController : CCUISliderModuleBackgroundViewController <MediaControlsVolumeControllerObserver, UIGestureRecognizerDelegate> {
    MediaControlsBluetoothListeningModeButton * _primaryBluetoothListeningModeButton;
    MediaControlsRouteView * _primaryRouteView;
    NSTimer * _primaryUpdateTimer;
    MediaControlsBluetoothListeningModeButton * _secondaryBluetoothListeningModeButton;
    MediaControlsRouteView * _secondaryRouteView;
    NSTimer * _secondaryUpdateTimer;
    MediaControlsVolumeController * _volumeController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) MediaControlsVolumeController *volumeController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_configureOptionsButton:(id)arg1 forRouteType:(unsigned long long)arg2;
- (void)_configurePrimaryOptionsButtonIfNeeded;
- (void)_configureRouteView:(id)arg1 forRouteType:(unsigned long long)arg2;
- (void)_configureRouteViews;
- (void)_configureSecondaryOptionsButtonIfNeeded;
- (double)_horizontalPadding;
- (void)_performLayoutWithAnimation:(id /* block */)arg1;
- (void)_springAnimate:(id /* block */)arg1;
- (void)_updateButton:(id)arg1 routeType:(unsigned long long)arg2;
- (void)_updateButtonAxis;
- (void)_updateVisibility;
- (double)_verticalPadding;
- (void)collapseBluetoothListeningModeButtons;
- (void)didTapPrimaryBluetoothListeningModeButton:(id)arg1;
- (void)didTapSecondaryBluetoothListeningModeButton:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)mediaControlsVolumeController:(id)arg1 didChangeVolumeAvailable:(bool)arg2 effectiveVolume:(float)arg3 forRoute:(unsigned long long)arg4;
- (void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(bool)arg2;
- (void)primaryBluetoothListeningModeButtonDidChangeValue:(id)arg1;
- (void)secondaryBluetoothListeningModeButtonDidChangeValue:(id)arg1;
- (void)setVolumeController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)volumeController;

@end
