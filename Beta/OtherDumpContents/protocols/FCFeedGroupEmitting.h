/* Generated by RuntimeBrowser.
 */

@protocol FCFeedGroupEmitting <FCFeedGroupInsertionDescriptor, NSObject>

@required

+ (NSString *)groupEmitterIdentifier;

- (NSSet *)emittableGroupTypes;
- (FCFeedGroupEmittingOperation *)operationToEmitGroupWithContext:(FCFeedGroupEmittingContext *)arg1 fromCursor:(FCFeedGroupEmittingCursor *)arg2 toCursor:(FCFeedGroupEmittingCursor *)arg3;
- (bool)shouldEmitContentInFavoritesOnlyMode;
- (bool)wantsToEmitGroupInContext:(FCFeedGroupEmittingContext *)arg1 fromCursor:(FCFeedGroupEmittingCursor *)arg2 toCursor:(FCFeedGroupEmittingCursor *)arg3;

@optional

+ (bool)canMergeGroupsUnconditionally;

- (NSString *)backingChannelTagIDWithConfiguration:(id <FCCoreConfiguration>)arg1;
- (bool)canDeferEmittingGroupInContext:(FCFeedGroupEmittingContext *)arg1;
- (bool)canMergeHeadlinesFromGroup:(id <FCFeedGroupOutlining>)arg1 intoGroup:(id <FCFeedGroupOutlining>)arg2;
- (bool)emitsSingleRefreshSessionGroups;
- (bool)emitsSingletonGroups;
- (bool)isRequiredByFollowingEmitters;
- (long long)requiredForYouContentTypes;
- (bool)requiresHeavyweightContent;
- (bool)supportsPagination;

@end
