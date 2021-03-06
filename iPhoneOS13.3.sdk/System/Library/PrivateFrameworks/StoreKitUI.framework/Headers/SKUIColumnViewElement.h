//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIHeaderViewElement;

__attribute__((visibility("hidden")))
@interface SKUIColumnViewElement : SKUIViewElement
{
    long long _columnSpan;
}

@property(readonly, nonatomic) long long columnSpan; // @synthesize columnSpan=_columnSpan;
- (long long)pageComponentType;
- (void)enumerateChildrenUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUIHeaderViewElement *headerElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

