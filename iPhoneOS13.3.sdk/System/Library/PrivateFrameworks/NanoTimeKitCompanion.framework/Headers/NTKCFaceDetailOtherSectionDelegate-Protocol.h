//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, NTKCFaceDetailOtherSectionController, NTKComplication, NTKDigitalTimeAccuracyOption;

#ifndef NTKCFaceDetailOtherSectionDelegate_Protocol
#define NTKCFaceDetailOtherSectionDelegate_Protocol

@protocol NTKCFaceDetailOtherSectionDelegate <NSObject>
- (void)otherSection:(NTKCFaceDetailOtherSectionController *)arg1 didChangeShowSeconds:(NTKDigitalTimeAccuracyOption *)arg2 forMode:(long long)arg3;
- (void)otherSectionDidSelectMonogramEdit:(NTKCFaceDetailOtherSectionController *)arg1;
- (void)otherSection:(NTKCFaceDetailOtherSectionController *)arg1 didToggleMonogram:(NTKComplication *)arg2 forSlot:(NSString *)arg3;
@end

#endif

