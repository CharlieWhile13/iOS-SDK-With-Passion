/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

@interface NFCNDEFTag : NSObject <NFCNDEFTag> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSNumber * _sessionKey;
    <NFTag> * _tag;
    bool  _writeLocked;
}

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)_connectWithCompletionHandler:(id /* block */)arg1;
- (bool)_connectWithError:(id*)arg1;
- (bool)_disconnectWithError:(id*)arg1;
- (id)_getInternalReaderSession;
- (void)_setDelegateQueue:(id)arg1;
- (void)_setSession:(id)arg1;
- (void)_setTag:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)dispatchBlockOnDelegateQueueAsync:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1 tag:(id)arg2 startupConfig:(long long)arg3;
- (bool)isAvailable;
- (bool)isMatchingSession:(id)arg1 outError:(id*)arg2;
- (void)queryNDEFStatusWithCompletionHandler:(id /* block */)arg1;
- (void)readNDEFWithCompletionHandler:(id /* block */)arg1;
- (void)writeLockWithCompletionHandler:(id /* block */)arg1;
- (void)writeNDEF:(id)arg1 completionHandler:(id /* block */)arg2;

@end
