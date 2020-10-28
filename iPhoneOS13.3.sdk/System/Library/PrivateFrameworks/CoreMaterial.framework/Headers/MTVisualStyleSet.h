//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMaterial/MTVisualStyleSetProviding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface MTVisualStyleSet : NSObject <MTVisualStyleSetProviding>
{
    NSMutableDictionary *_visualStylesToStyleNames;
    NSMutableDictionary *_styleNamesToVisualStylings;
    long long _visualStyleSetVersion;
    NSString *_visualStyleSetName;
}

@property(readonly, copy, nonatomic) NSString *visualStyleSetName; // @synthesize visualStyleSetName=_visualStyleSetName;
@property(readonly, nonatomic) long long visualStyleSetVersion; // @synthesize visualStyleSetVersion=_visualStyleSetVersion;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)visualStylingForStyle:(id)arg1;
- (id)initWithName:(id)arg1 visualStyleSetDescription:(id)arg2 andDescendantDescriptions:(id)arg3;

@end

