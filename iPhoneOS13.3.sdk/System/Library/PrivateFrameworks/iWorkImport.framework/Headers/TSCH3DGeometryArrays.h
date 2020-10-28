//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSCH3DGeometryArrays : NSObject <NSCopying>
{
    unsigned int _offset;
    unsigned int _count;
    unsigned int _capoffset;
    unsigned int _capcount;
}

+ (id)arraysWithOffset:(unsigned int)arg1 count:(unsigned int)arg2 capoffset:(unsigned int)arg3 capcount:(unsigned int)arg4;
@property(readonly, nonatomic) unsigned int capcount; // @synthesize capcount=_capcount;
@property(readonly, nonatomic) unsigned int capoffset; // @synthesize capoffset=_capoffset;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
@property(readonly, nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) range_f61e6b34 wholeRange;
@property(readonly, nonatomic) range_f61e6b34 capRange;
@property(readonly, nonatomic) range_f61e6b34 range;
@property(readonly, nonatomic) range_f61e6b34 emptyRange;
@property(readonly, nonatomic) BOOL empty;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithOffset:(unsigned int)arg1 count:(unsigned int)arg2 capoffset:(unsigned int)arg3 capcount:(unsigned int)arg4;

@end

