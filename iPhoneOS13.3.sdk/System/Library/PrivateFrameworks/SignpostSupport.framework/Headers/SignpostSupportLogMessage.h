//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/SignpostSupportObject.h>

#import <SignpostSupport/SignpostSupportLoggingSupportArchiveEvent-Protocol.h>

@class NSString, NSUUID;

@interface SignpostSupportLogMessage : SignpostSupportObject <SignpostSupportLoggingSupportArchiveEvent>
{
    unsigned char _messageType;
    BOOL _hasNonScalarDynamicData;
    int _tv_usec;
    int _tz_minuteswest;
    int _tz_dsttime;
    int _processID;
    long long _tv_sec;
    NSUInteger _processUniqueID;
    NSUInteger _threadID;
    NSUUID *_processImageUUID;
    NSString *_processImagePath;
    NSString *_processName;
    NSString *_message;
    NSUInteger __machContinuousTimestamp;
}

+ (id)serializationTypeNumber;
@property(nonatomic) BOOL hasNonScalarDynamicData; // @synthesize hasNonScalarDynamicData=_hasNonScalarDynamicData;
@property(nonatomic) NSUInteger _machContinuousTimestamp; // @synthesize _machContinuousTimestamp=__machContinuousTimestamp;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) NSString *processImagePath; // @synthesize processImagePath=_processImagePath;
@property(retain, nonatomic) NSUUID *processImageUUID; // @synthesize processImageUUID=_processImageUUID;
@property(nonatomic) unsigned char messageType; // @synthesize messageType=_messageType;
@property(nonatomic) NSUInteger threadID; // @synthesize threadID=_threadID;
@property(nonatomic) NSUInteger processUniqueID; // @synthesize processUniqueID=_processUniqueID;
@property(nonatomic) int processID; // @synthesize processID=_processID;
@property(nonatomic) int tz_dsttime; // @synthesize tz_dsttime=_tz_dsttime;
@property(nonatomic) int tz_minuteswest; // @synthesize tz_minuteswest=_tz_minuteswest;
@property(nonatomic) int tv_usec; // @synthesize tv_usec=_tv_usec;
@property(nonatomic) long long tv_sec; // @synthesize tv_sec=_tv_sec;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)durationMachContinuousTime;
- (NSUInteger)endMachContinuousTime;
- (NSUInteger)startMachContinuousTime;
- (id)_descriptionStringForColumn:(NSUInteger)arg1 timeFormat:(NSUInteger)arg2 asBegin:(BOOL)arg3;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3 unixDate:(struct timeval )arg4 unixTimeZone:(struct timezone )arg5;
- (id)initWithDictionary:(id)arg1;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2;
- (id)humanReadableType;

@end

