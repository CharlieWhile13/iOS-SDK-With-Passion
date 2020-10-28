//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CSCoder, NSData;

@interface SGSearchableItemSerializedAttributes : NSObject <NSCopying>
{
    NSData *_attributeSetData;
    CSCoder *_attributeSetCoder;
    NSData *_htmlContentData;
}

+ (id)serializedAttributesWithAttributeSetData:(id)arg1 attributeSetCoder:(id)arg2 htmlContentData:(id)arg3;
@property(readonly, nonatomic) NSData *htmlContentData; // @synthesize htmlContentData=_htmlContentData;
@property(readonly, nonatomic) CSCoder *attributeSetCoder; // @synthesize attributeSetCoder=_attributeSetCoder;
@property(readonly, nonatomic) NSData *attributeSetData; // @synthesize attributeSetData=_attributeSetData;
// - (void).cxx_destruct;
- (id)init;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSerializedAttributes:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithAttributeSetData:(id)arg1 attributeSetCoder:(id)arg2 htmlContentData:(id)arg3;

@end

