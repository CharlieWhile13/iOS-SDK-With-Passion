//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUILayoutRequest-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKUIEditorialLinkLayoutRequest : NSObject <SKUILayoutRequest>
{
    NSArray *_links;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSArray *links; // @synthesize links=_links;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) Class layoutClass;

@end

