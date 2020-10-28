//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;
@protocol NSCopying;

@interface HUPocketButtonDescriptor : NSObject
{
    NSUInteger _style;
    NSString *_title;
    id <NSCopying> _userInfo;
    id _target;
    SEL _action;
    id /* CDUnknownBlockType */ _block;
}

+ (id)descriptorWithTitle:(id)arg1 style:(NSUInteger)arg2 userInfo:(id)arg3 block:(id /* CDUnknownBlockType */)arg4;
+ (id)descriptorWithTitle:(id)arg1 style:(NSUInteger)arg2 target:(id)arg3 action:(SEL)arg4 userInfo:(id)arg5;
@property(copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) id <NSCopying> userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) NSUInteger style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (void)execute;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) UIColor *textColor;

@end

