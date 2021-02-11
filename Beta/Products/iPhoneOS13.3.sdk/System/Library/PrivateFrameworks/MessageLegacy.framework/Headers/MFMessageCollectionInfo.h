/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageCollectionInfo : NSObject {
    long long  _messageCollectionHash;
    MFMessageInfoOrderedSet * _messageInfoSet;
}

@property (nonatomic, readonly) NSArray *allMessageInfos;
@property (nonatomic, copy) id /* block */ duplicatePreferenceComparator;
@property (nonatomic, readonly) MFMessageInfo *firstMessage;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) MFMessageInfo *lastMessage;
@property (nonatomic, readonly) long long messageCollectionHash;
@property (nonatomic, readonly) unsigned long long messageCountWithDuplicates;
@property (nonatomic, readonly) unsigned long long messagesCount;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) NSArray *uniqueMessageInfos;
@property (nonatomic, readonly) MFMessageInfo *visibleMessageInfo;

+ (unsigned long long)stateForMessages:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)addMessageInfo:(id)arg1;
- (id)allMessageInfos;
- (id)debugDescription;
- (id /* block */)duplicatePreferenceComparator;
- (id)duplicatesOfMessageInfo:(id)arg1;
- (id)firstMessage;
- (unsigned long long)indexOfMessageInfo:(id)arg1;
- (unsigned long long)indexWhereMessageInfoWouldBeInserted:(id)arg1;
- (id)initWithHash:(long long)arg1 comparator:(id /* block */)arg2;
- (bool)isEmpty;
- (id)lastMessage;
- (void)mergeWithCollection:(id)arg1;
- (long long)messageCollectionHash;
- (unsigned long long)messageCountWithDuplicates;
- (id)messageInfoAtIndex:(unsigned long long)arg1;
- (id)messageInfoEquivalentToMessageInfo:(id)arg1;
- (unsigned long long)messagesCount;
- (unsigned long long)removeMessageInfo:(id)arg1;
- (void)setDuplicatePreferenceComparator:(id /* block */)arg1;
- (unsigned long long)state;
- (id)uniqueMessageInfos;
- (id)visibleMessageInfo;

@end