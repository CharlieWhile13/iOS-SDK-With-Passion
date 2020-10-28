//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIFont;

@interface ASDisplayContext : NSObject
{
    double _nameFontSize;
    double _dataFontSize;
    double _multilineDataFontSize;
    UIFont *_nameFont;
    UIFont *_dataFont;
    UIFont *_multilineDataFont;
    UIFont *_unitFont;
    UIFont *_multilineUnitFont;
    NSString *_contentSizeCategory;
    UIFont *_descriptionFont;
    NSDictionary *_titleColors;
    NSDictionary *_keyColors;
}

+ (id)displayContextWithName:(id)arg1;
+ (id)_gizmoContext;
+ (id)_companionContext;
+ (void)_contentSizeChangeForContext:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
@property(retain, nonatomic) NSDictionary *keyColors; // @synthesize keyColors=_keyColors;
@property(retain, nonatomic) NSDictionary *titleColors; // @synthesize titleColors=_titleColors;
@property(retain, nonatomic) UIFont *descriptionFont; // @synthesize descriptionFont=_descriptionFont;
@property(retain, nonatomic) UIFont *multilineUnitFont; // @synthesize multilineUnitFont=_multilineUnitFont;
@property(retain, nonatomic) UIFont *unitFont; // @synthesize unitFont=_unitFont;
@property(retain, nonatomic) UIFont *multilineDataFont; // @synthesize multilineDataFont=_multilineDataFont;
@property(retain, nonatomic) UIFont *dataFont; // @synthesize dataFont=_dataFont;
@property(retain, nonatomic) UIFont *nameFont; // @synthesize nameFont=_nameFont;
// - (void).cxx_destruct;
- (id)keyColorForDisplayMode:(long long)arg1;
- (id)titleColorForDisplayMode:(long long)arg1;

@end

