//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVPostTask.h>

@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask
{
    NSString *_previousScheduleTag;
    NSString *_filename;
}

@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSString *previousScheduleTag; // @synthesize previousScheduleTag=_previousScheduleTag;
// - (void).cxx_destruct;
- (id)responseData;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)requestBodyStream;
- (id)additionalHeaderValues;
- (id)utf8PercentEscapedFilename;
- (id)lossyAsciiFilename;

@end

