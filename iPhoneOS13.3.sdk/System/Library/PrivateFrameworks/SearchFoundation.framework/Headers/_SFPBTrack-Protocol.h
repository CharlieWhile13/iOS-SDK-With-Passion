//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSString, _SFPBActionItem, _SFPBURL;

@protocol _SFPBTrack <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBActionItem *playAction;
@property(retain, nonatomic) _SFPBURL *preview;
@property(nonatomic) BOOL highlighted;
@property(copy, nonatomic) NSString *duration;
@property(copy, nonatomic) NSString *number;
@property(copy, nonatomic) NSString *title;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

