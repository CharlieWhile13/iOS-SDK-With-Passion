//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class WFModuleOutputModel;

@interface WFModuleOutputInnerComponent : CKCompositeComponent
{
    WFModuleOutputModel *_model;
}

+ (id)newWithModel:(id)arg1;
@property(readonly, nonatomic) WFModuleOutputModel *model; // @synthesize model=_model;
// - (void).cxx_destruct;
- (void)buttonTapped;

@end

