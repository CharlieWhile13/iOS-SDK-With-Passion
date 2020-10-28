//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIButton.h>

@class UIAlertController, UIImage, UIViewController, VUICircularProgress, VUIDownloadButtonViewModel;

__attribute__((visibility("hidden")))
@interface VUIDownloadButton : VUIButton
{
    BOOL _showsTextInDownloadedState;
    BOOL _observingDownloadProgress;
    BOOL _wasDeleted;
    BOOL _wasCanceled;
    BOOL _isForLibrary;
    UIViewController *_presentingViewController;
    id /* CDUnknownBlockType */ _downloadStateChangeHandler;
    UIImage *_notDownloadedImage;
    UIImage *_connectingImage;
    UIImage *_downloadingImage;
    UIImage *_downloadedImage;
    VUIDownloadButtonViewModel *_viewModel;
    VUICircularProgress *_progressIndicator;
    UIAlertController *_deleteConfirmationAlertController;
}

+ (id)defaultLayout;
@property(retain, nonatomic) UIAlertController *deleteConfirmationAlertController; // @synthesize deleteConfirmationAlertController=_deleteConfirmationAlertController;
@property(nonatomic) BOOL isForLibrary; // @synthesize isForLibrary=_isForLibrary;
@property(nonatomic) BOOL wasCanceled; // @synthesize wasCanceled=_wasCanceled;
@property(nonatomic) BOOL wasDeleted; // @synthesize wasDeleted=_wasDeleted;
@property(nonatomic) BOOL observingDownloadProgress; // @synthesize observingDownloadProgress=_observingDownloadProgress;
@property(retain, nonatomic) VUICircularProgress *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) VUIDownloadButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImage *downloadedImage; // @synthesize downloadedImage=_downloadedImage;
@property(retain, nonatomic) UIImage *downloadingImage; // @synthesize downloadingImage=_downloadingImage;
@property(retain, nonatomic) UIImage *connectingImage; // @synthesize connectingImage=_connectingImage;
@property(retain, nonatomic) UIImage *notDownloadedImage; // @synthesize notDownloadedImage=_notDownloadedImage;
@property(copy, nonatomic) id /* CDUnknownBlockType */ downloadStateChangeHandler; // @synthesize downloadStateChangeHandler=_downloadStateChangeHandler;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) BOOL showsTextInDownloadedState; // @synthesize showsTextInDownloadedState=_showsTextInDownloadedState;
// - (void).cxx_destruct;
- (void)_stopObservingDownloadProgress:(id)arg1;
- (void)_startObservingDownloadProgress:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_configureProgressIndicatorWithProperties:(id)arg1;
- (void)_insertProgressIndicatorWithFrame:(CGRect)arg1;
- (id)_buttonPropertiesForState:(NSUInteger)arg1;
- (void)_updateDownloadProgress:(double)arg1 animated:(BOOL)arg2;
- (void)_updateButtonToDownloadedWithProperties:(id)arg1;
- (void)_updateButtonToDownloadingWithProperties:(id)arg1;
- (void)_updateButtonToConnectingWithProperties:(id)arg1;
- (void)_updateButtonToNotDownloadedWithProperties:(id)arg1;
- (void)_updateButtonToState:(NSUInteger)arg1;
- (void)_updateButtonToState:(NSUInteger)arg1 oldState:(NSUInteger)arg2;
- (id)_imageForDownloadState:(NSUInteger)arg1;
- (id)_pausedImage;
- (id)_downloadedImage;
- (id)_downloadingImage;
- (id)_connectingImage;
- (id)_notDownloadedImage;
- (void)_setImage:(id)arg1;
- (void)_setTitleWithProperties:(id)arg1;
- (void)_startDownloadIfPossible;
- (void)_dismissConfirmationAlertController;
- (void)_handleAppDidEnterBackgroundNotification:(id)arg1;
- (void)_askUserAndDeleteIfNeeded;
- (void)_layoutProgressIndicator;
- (void)_downloadButtonTapped:(id)arg1;
- (CGSize)_imageSizeThatFits:(CGSize)arg1;
- (void)updateWithAssetController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateWithElement:(id)arg1;
- (id)initWithAssetController:(id)arg1 layout:(id)arg2;
- (id)initWithPlayable:(id)arg1 layout:(id)arg2;

@end

