//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFSetAppearanceIntentHandling-Protocol.h>

@class UISUserInterfaceStyleMode;

@interface WFSetAppearanceIntentHandler : NSObject <WFSetAppearanceIntentHandling>
{
    UISUserInterfaceStyleMode *_styleMode;
}

@property(retain, nonatomic) UISUserInterfaceStyleMode *styleMode; // @synthesize styleMode=_styleMode;
// - (void).cxx_destruct;
- (void)setDeviceAppearance:(long long)arg1;
- (void)handleSetAppearance:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveStyleForSetAppearance:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

