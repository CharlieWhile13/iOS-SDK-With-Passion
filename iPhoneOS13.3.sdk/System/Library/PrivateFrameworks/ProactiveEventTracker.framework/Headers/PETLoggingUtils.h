//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PETLoggingUtils : NSObject
{
}

+ (id)messageKeyStringForKey:(id)arg1;
+ (id)domainStringForEvent:(id)arg1 featureId:(id)arg2;
+ (void)_pushToBuffer:(id)arg1 keyStringForStringifiedPairs:(id)arg2;
+ (id)keyStringForStringifiedPairs:(id)arg1;
+ (id)keyStringForEvent:(id)arg1 featureId:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;

@end

