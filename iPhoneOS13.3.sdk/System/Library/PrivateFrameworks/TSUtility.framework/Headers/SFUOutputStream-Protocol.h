//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/SFUSimpleOutputStream-Protocol.h>

@protocol SFUInputStream, SFUOutputStream;

@protocol SFUOutputStream <SFUSimpleOutputStream>
- (id <SFUOutputStream>)closeLocalStream;
- (void)close;
- (id <SFUInputStream>)inputStream;
- (BOOL)canCreateInputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (BOOL)canSeek;
@end

