//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDProcessor.h>

__attribute__((visibility("hidden")))
@interface CHPSeriesDateTimeFormatting : EDProcessor
{
}

- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (BOOL)isObjectSupported:(id)arg1;
- (BOOL)isDateTimeFormattingInContentFormatString:(id)arg1 edCell:(struct EDCellHeader )arg2;
- (BOOL)isDateTimeFomrattingInData:(id)arg1;

@end

