//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GPBUInt32Array, GPBUInt64Array, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GPBUnknownField : NSObject <NSCopying>
{
    int number_;
    GPBUInt64Array *mutableVarintList_;
    GPBUInt32Array *mutableFixed32List_;
    GPBUInt64Array *mutableFixed64List_;
    NSMutableArray *mutableLengthDelimitedList_;
    NSMutableArray *mutableGroupList_;
}

@property(readonly, nonatomic) NSArray *groupList; // @synthesize groupList=mutableGroupList_;
@property(readonly, nonatomic) NSArray *lengthDelimitedList; // @synthesize lengthDelimitedList=mutableLengthDelimitedList_;
@property(readonly, nonatomic) GPBUInt64Array *fixed64List; // @synthesize fixed64List=mutableFixed64List_;
@property(readonly, nonatomic) GPBUInt32Array *fixed32List; // @synthesize fixed32List=mutableFixed32List_;
@property(readonly, nonatomic) GPBUInt64Array *varintList; // @synthesize varintList=mutableVarintList_;
@property(readonly, nonatomic) int number; // @synthesize number=number_;
- (void)addGroup:(id)arg1;
- (void)addLengthDelimited:(id)arg1;
- (void)addFixed64:(NSUInteger)arg1;
- (void)addFixed32:(unsigned int)arg1;
- (void)addVarint:(NSUInteger)arg1;
- (void)mergeFromField:(id)arg1;
- (id)description;
- (NSUInteger)serializedSizeAsMessageSetExtension;
- (void)writeAsMessageSetExtensionToOutput:(id)arg1;
- (NSUInteger)serializedSize;
- (void)writeToOutput:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithNumber:(int)arg1;

@end

