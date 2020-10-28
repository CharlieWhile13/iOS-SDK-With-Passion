//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface FCSolArticle : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _accessible;
    NSString *_identifier;
    NSString *_publisherID;
    double _score;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL accessible; // @synthesize accessible=_accessible;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *publisherID; // @synthesize publisherID=_publisherID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(BOOL)arg4;

@end
