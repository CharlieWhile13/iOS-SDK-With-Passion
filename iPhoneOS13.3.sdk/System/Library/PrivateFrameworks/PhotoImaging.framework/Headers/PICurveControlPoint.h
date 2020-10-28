//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PICurveControlPoint : NSObject <NSCopying>
{
    BOOL _editable;
    double _x;
    double _y;
}

@property(readonly, nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property(readonly, nonatomic) double y; // @synthesize y=_y;
@property(readonly, nonatomic) double x; // @synthesize x=_x;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)dictionaryRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 editable:(BOOL)arg3;

@end

