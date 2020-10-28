//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SXComponent><SXInsertableComponent, SXComponentLayout;

@interface SXComponentInsert : NSObject
{
    id <SXComponent><SXInsertableComponent> _component;
    id <SXComponentLayout> _componentLayout;
}

@property(readonly, nonatomic) id <SXComponentLayout> componentLayout; // @synthesize componentLayout=_componentLayout;
@property(readonly, nonatomic) id <SXComponent><SXInsertableComponent> component; // @synthesize component=_component;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2;

@end

