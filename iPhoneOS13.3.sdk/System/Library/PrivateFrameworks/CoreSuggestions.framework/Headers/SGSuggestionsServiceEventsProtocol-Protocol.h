//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsObserverProtocol-Protocol.h>

@class EKEventStore, NSArray, NSLocale, NSString, NSURL, SGSuggestedEventLaunchInfo;

@protocol SGSuggestionsServiceEventsProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceEventsConfirmRejectProtocol, _SGSuggestionsServiceEventsObserverProtocol>
- (void)allEventsLimitedTo:(NSUInteger)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)suggestionsFromURL:(NSURL *)arg1 title:(NSString *)arg2 HTMLPayload:(NSString *)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
- (void)isEventCandidateForURL:(NSURL *)arg1 andTitle:(NSString *)arg2 withCompletion:(void (^)(BOOL))arg3;
- (void)eventsForSchemas:(NSArray *)arg1 usingStore:(EKEventStore *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)keysForSchemas:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (BOOL)launchAppForSuggestedEventUsingLaunchInfo:(SGSuggestedEventLaunchInfo *)arg1 error:(id )arg2;
- (void)launchAppForSuggestedEventUsingLaunchInfo:(SGSuggestedEventLaunchInfo *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (SGSuggestedEventLaunchInfo *)launchInfoForSuggestedEventWithUniqueIdentifier:(NSString *)arg1 sourceURL:(NSURL *)arg2 clientLocale:(NSLocale *)arg3 error:(id )arg4;
- (void)launchInfoForSuggestedEventWithUniqueIdentifier:(NSString *)arg1 sourceURL:(NSURL *)arg2 clientLocale:(NSLocale *)arg3 withCompletion:(void (^)(SGSuggestedEventLaunchInfo *, NSError *))arg4;
- (void)eventFromUniqueId:(NSString *)arg1 withCompletion:(void (^)(SGEvent *, NSError *))arg2;
@end

