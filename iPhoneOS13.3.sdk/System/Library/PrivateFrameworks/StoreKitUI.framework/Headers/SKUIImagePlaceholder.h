//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SKUIImagePlaceholder : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    double _borderWidth;
    id /* CDUnknownBlockType */ _cornerPathBlock;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ cornerPathBlock; // @synthesize cornerPathBlock=_cornerPathBlock;
@property(readonly, nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(readonly, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
// - (void).cxx_destruct;
- (id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerPathBlock:(id /* CDUnknownBlockType */)arg4;
- (id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerRadius:(double)arg4;

@end

