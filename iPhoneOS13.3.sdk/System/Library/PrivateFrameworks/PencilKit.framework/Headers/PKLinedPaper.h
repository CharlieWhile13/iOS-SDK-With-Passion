//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PKLinedPaper : NSObject <NSCopying>
{
    double _horizontalInset;
    CGPoint _lineSpacing;
}

@property(readonly, nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
@property(readonly, nonatomic) CGPoint lineSpacing; // @synthesize lineSpacing=_lineSpacing;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithLineSpacing:(CGPoint)arg1 horizontalInset:(double)arg2;

@end
