//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _NCActionButtonDescription : NSObject
{
    NSString *_selectorString;
    BOOL _defaultActionButton;
    NSString *_title;
}

@property(readonly, nonatomic, getter=isDefaultActionButton) BOOL defaultActionButton; // @synthesize defaultActionButton=_defaultActionButton;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
@property(readonly, nonatomic) SEL selector;
- (id)initWithTitle:(id)arg1 selector:(SEL)arg2 defaultActionButton:(BOOL)arg3;

@end
