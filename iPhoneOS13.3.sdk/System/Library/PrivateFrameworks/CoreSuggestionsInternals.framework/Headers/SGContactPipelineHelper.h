//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SGContactPipelineHelper : NSObject
{
    NSMutableDictionary *_lengthsCounts;
    NSUInteger _phonesSeenInContacts;
    NSString *_mostCommonCountryCode;
    struct _opaque_pthread_mutex_t _helperLock;
}

+ (id)normalizedDigits:(id)arg1;
+ (BOOL)contactExistsInArray:(id)arg1 withName:(id)arg2;
+ (id)findContactsForDetailType:(NSUInteger)arg1 andValue:(id)arg2;
+ (id)findContactsForPerson:(id)arg1 fetchingKeys:(id)arg2;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (BOOL)numberMatchesContactsForm:(id)arg1 usingPredicate:(id)arg2;
- (BOOL)numberMatchesContactsForm:(id)arg1;
- (void)dealloc;
- (id)init;

@end

