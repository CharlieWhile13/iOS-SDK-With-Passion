//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMTokenList : DOMObject
{
}

- (BOOL)toggle:(id)arg1 force:(BOOL)arg2;
- (BOOL)contains:(id)arg1;
- (id)item:(unsigned int)arg1;
@property(copy) NSString *value;
@property(readonly) unsigned int length;
- (void)dealloc;

@end

