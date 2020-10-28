//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OBNavigationBarDisplayState : NSObject
{
    double _backgroundOpacity;
    double _titleOpacity;
}

+ (id)displayStateForNavigationBar:(id)arg1;
@property(nonatomic) double titleOpacity; // @synthesize titleOpacity=_titleOpacity;
@property(nonatomic) double backgroundOpacity; // @synthesize backgroundOpacity=_backgroundOpacity;
- (void)applyState:(id)arg1;
- (id)initWithNavigationBar:(id)arg1;

@end

