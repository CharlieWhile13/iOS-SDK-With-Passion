//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

__attribute__((visibility("hidden")))
@interface GQDWPListLabelGeometry : NSObject <GQDNameMappable>
{
    float mScale;
    float mBaselineOffset;
    BOOL mScaleWithText;
    int mLabelAlignment;
}

+ (const struct StateSpec )stateForReading;
- (int)labelAlignment;
- (BOOL)scaleWithText;
- (float)baselineOffset;
- (float)scale;
- (int)readAttributesFromReader:(struct _xmlTextReader )arg1;

@end

