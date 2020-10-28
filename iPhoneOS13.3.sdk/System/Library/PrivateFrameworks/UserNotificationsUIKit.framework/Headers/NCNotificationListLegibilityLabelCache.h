//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationListLegibilityLabelCache : NSObject
{
    NSMutableDictionary *_sectionHeaderViewLegibilityLabelDictionary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *sectionHeaderViewLegibilityLabelDictionary; // @synthesize sectionHeaderViewLegibilityLabelDictionary=_sectionHeaderViewLegibilityLabelDictionary;
// - (void).cxx_destruct;
- (id)_stringDescriptorForFont:(id)arg1;
- (id)_createLegibilityLabelWithTitle:(id)arg1 font:(id)arg2;
- (void)clearAll;
- (id)legibilityLabelForTitle:(id)arg1 forSuperview:(id)arg2 font:(id)arg3;
- (id)init;

@end

