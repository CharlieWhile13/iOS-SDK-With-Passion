//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class NSArray;

@interface WFOpenInAction : WFAction
{
    NSArray *_contentClasses;
}

@property(retain, nonatomic) NSArray *contentClasses; // @synthesize contentClasses=_contentClasses;
// - (void).cxx_destruct;
- (id)selectedApp;
- (id)outputContentClasses;
- (id)inputContentClasses;
- (void)updateContentClasses;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)openContentInSelectedApp:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

