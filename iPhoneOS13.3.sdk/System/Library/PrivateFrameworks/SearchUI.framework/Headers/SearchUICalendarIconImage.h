//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIAppIconImage.h>

@class NSDate;

@interface SearchUICalendarIconImage : SearchUIAppIconImage
{
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)loadImage;
- (id)initWithDate:(id)arg1 variant:(NSUInteger)arg2;

@end

