//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DResource.h>

@class TSCH3DAxisGridEnumerator, TSDStroke;

__attribute__((visibility("hidden")))
@interface TSCH3DGridlineResource : TSCH3DResource
{
    TSCH3DAxisGridEnumerator *mAxis;
}

+ (id)resourceWithAxisEnumerator:(id)arg1;
- (id)get;
@property(readonly, nonatomic) float opacity;
@property(readonly, nonatomic) TSDStroke *stroke;
@property(readonly, nonatomic) BOOL enabled;
- (void)dealloc;
- (id)initWithAxisEnumerator:(id)arg1;

@end

