//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSTapToRadarRequest : NSObject
{
    NSString *_title;
    NSString *_message;
}

@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 message:(id)arg2;

@end

