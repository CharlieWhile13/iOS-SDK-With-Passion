//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookLegacy/ABVCardParser.h>

@class NSData, NSMutableDictionary;

@interface ABVCardCardDAVParser : ABVCardParser
{
    NSMutableDictionary *_unknownAttributes;
    BOOL _removeExistingProperties;
    BOOL _localRecordHasAdditionalProperties;
    int _lastCropRectX;
    int _lastCropRectY;
    int _lastCropRectWidth;
    int _lastCropRectHeight;
    NSData *_lastCropRectChecksum;
}

@property(readonly, retain) NSData *lastCropRectChecksum; // @synthesize lastCropRectChecksum=_lastCropRectChecksum;
@property(readonly) int lastCropRectHeight; // @synthesize lastCropRectHeight=_lastCropRectHeight;
@property(readonly) int lastCropRectWidth; // @synthesize lastCropRectWidth=_lastCropRectWidth;
@property(readonly) int lastCropRectY; // @synthesize lastCropRectY=_lastCropRectY;
@property(readonly) int lastCropRectX; // @synthesize lastCropRectX=_lastCropRectX;
@property(readonly) BOOL localRecordHasAdditionalProperties; // @synthesize localRecordHasAdditionalProperties=_localRecordHasAdditionalProperties;
- (void)cleanUpCardState;
- (void)noteLackOfValueForImageData;
- (void)noteLackOfValueForProperty:(unsigned int)arg1;
- (void )createRecordInSource:(void )arg1 outRecordType:(unsigned int )arg2;
- (BOOL)importToGroup:(void )arg1 removeExistingProperties:(BOOL)arg2;
- (BOOL)importToPerson:(void )arg1 removeExistingProperties:(BOOL)arg2;
- (BOOL)_handleUnknownTag:(id)arg1 withValue:(id)arg2;
- (BOOL)parseUID;
- (id)defaultURLLabel;
- (id)defaultADRLabel;
- (id)defaultLabel;
- (id)genericLabel;
- (void)dealloc;
- (id)initWithData:(id)arg1 watchdogTimer:(id)arg2;

@end

