//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarKit/CARInputDevice.h>

@protocol CARInputDeviceTouchpadDelegate;

@interface CARInputDeviceTouchpad : CARInputDevice
{
    BOOL _characterRecognitionSupported;
    double _sensitivity;
    NSUInteger _supportedFeedbackTypes;
    id <CARInputDeviceTouchpadDelegate> _delegate;
    CGSize _physicalSize;
}

+ (CGSize)physicalSizeForTouchpadWithDigitizerProperties:(id)arg1;
@property(nonatomic) __weak id <CARInputDeviceTouchpadDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSUInteger supportedFeedbackTypes; // @synthesize supportedFeedbackTypes=_supportedFeedbackTypes;
@property(readonly, nonatomic) BOOL characterRecognitionSupported; // @synthesize characterRecognitionSupported=_characterRecognitionSupported;
@property(readonly, nonatomic) CGSize physicalSize; // @synthesize physicalSize=_physicalSize;
@property(nonatomic) double sensitivity; // @synthesize sensitivity=_sensitivity;
// - (void).cxx_destruct;
- (void)_setDelegate:(id)arg1;
- (id)_initWithSupportedHapticTypes:(NSUInteger)arg1 physicalSize:(CGSize)arg2 characterRecognitionSupported:(BOOL)arg3 senderID:(NSUInteger)arg4 UUID:(id)arg5;
- (BOOL)_characterRecognitionSupportedForServiceClient:(struct __IOHIDServiceClient )arg1;
- (CGSize)_physicalSizeForTouchpadServiceClient:(struct __IOHIDServiceClient )arg1;
- (void)performFeedbackOfType:(NSUInteger)arg1;
- (void)updateSettingsWithSettings:(id)arg1;
- (id)description;
@property(readonly, nonatomic) BOOL feedbackSupported;
- (id)initWithServiceClient:(struct __IOHIDServiceClient )arg1 UUID:(id)arg2 settings:(id)arg3 delegate:(id)arg4;

@end

