//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;
@protocol OS_dispatch_queue, PFLoggerBackend;

@interface PFLogger : NSObject
{
    BOOL _shouldLogToCrashReporter;
    BOOL _backendAllowsConcurrentAccess;
    int _logLevel;
    NSObject<PFLoggerBackend> *_backend;
    NSArray *_tracedSubsystems;
    NSArray *_debuggedSubsystems;
    NSString *_facilityPrefix;
    NSDictionary *_options;
    NSObject<OS_dispatch_queue> *_backendAccessSerializationQueue;
    NSObject<OS_dispatch_queue> *_recordedSubsystemsQueue;
    NSSet *_recordedSubsystems;
}

+ (BOOL)traceEnabledForSubsystem:(id)arg1;
+ (void)logCrashReporterMessageFromCodeLocation:(CDStruct_98c8119d)arg1 format:(id)arg2;
// + (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
+ (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4;
+ (void)setupCrashReporter;
+ (void)logCrashReporterMessage:(id)arg1 fromCodeLocation:(CDStruct_98c8119d)arg2;
+ (BOOL)enabledForSubsystem:(id)arg1 level:(int)arg2;
+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;
+ (id)createDefaultLogger;
+ (int)defaultLoggerLogLevel;
+ (void)recreateDefaultLogger;
+ (void)setDefaultLogger:(id)arg1;
+ (void)flushDefaultLoggerIfPresent;
+ (id)defaultLogger;
+ (id)loggerWithBackend:(id)arg1 logLevel:(int)arg2 options:(id)arg3;
+ (void)initialize;
@property(retain) NSSet *recordedSubsystems; // @synthesize recordedSubsystems=_recordedSubsystems;
@property(retain) NSObject<OS_dispatch_queue> *recordedSubsystemsQueue; // @synthesize recordedSubsystemsQueue=_recordedSubsystemsQueue;
@property BOOL backendAllowsConcurrentAccess; // @synthesize backendAllowsConcurrentAccess=_backendAllowsConcurrentAccess;
@property(retain) NSObject<OS_dispatch_queue> *backendAccessSerializationQueue; // @synthesize backendAccessSerializationQueue=_backendAccessSerializationQueue;
@property(retain) NSDictionary *options; // @synthesize options=_options;
@property(retain) NSString *facilityPrefix; // @synthesize facilityPrefix=_facilityPrefix;
@property(retain) NSArray *debuggedSubsystems; // @synthesize debuggedSubsystems=_debuggedSubsystems;
@property(retain) NSArray *tracedSubsystems; // @synthesize tracedSubsystems=_tracedSubsystems;
@property(retain) NSObject<PFLoggerBackend> *backend; // @synthesize backend=_backend;
@property BOOL shouldLogToCrashReporter; // @synthesize shouldLogToCrashReporter=_shouldLogToCrashReporter;
@property int logLevel; // @synthesize logLevel=_logLevel;
// - (void).cxx_destruct;
- (void)_recordSubsystem:(id)arg1;
- (id)description;
- (void)flush;
- (BOOL)enabledForSubsystem:(id)arg1 subsystems:(id)arg2;
// - (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4;
- (void)processOptions;
- (id)initWithBackend:(id)arg1 logLevel:(int)arg2 options:(id)arg3;

@end

