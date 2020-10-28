//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPLineFragmentAdornment-Protocol.h>

@class TSUColor;

@interface TSWPDropCapBackgroundAdornment : NSObject <TSWPLineFragmentAdornment>
{
    TSUColor *_color;
    CGRect _bounds;
}

- (void)drawAdornmentForFragment:(const struct TSWPLineFragment )arg1 inContext:(CGContext )arg2 withFlags:(unsigned int)arg3 state:(const struct TSWPDrawingState )arg4 bounds:(CGRect)arg5;
@property(readonly, nonatomic) BOOL isBackground;
- (void)dealloc;
- (id)initWithColor:(id)arg1 bounds:(CGRect)arg2;

@end

