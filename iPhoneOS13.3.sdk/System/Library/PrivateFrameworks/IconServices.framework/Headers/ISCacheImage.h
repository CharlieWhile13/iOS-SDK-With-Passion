//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IconServices/ISConcreteImage.h>

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface ISCacheImage : ISConcreteImage
{
    NSUUID *_uuid;
    NSData _validationToken;
}

@property(readonly) NSData *validationToken; // @synthesize validationToken=_validationToken;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
// - (void).cxx_destruct;
@property BOOL placeholder; // @dynamic placeholder;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;

@end

