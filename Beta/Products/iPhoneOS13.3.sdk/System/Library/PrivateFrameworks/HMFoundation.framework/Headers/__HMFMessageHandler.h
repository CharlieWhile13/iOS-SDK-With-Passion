/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface __HMFMessageHandler : HMFObject <HMFLogging, HMFObject> {
    HMFMessageDestination * _destination;
    unsigned long long  _hash;
    NSString * _name;
    NSArray * _policies;
    NSObject<OS_dispatch_queue> * _queue;
    <HMFMessageReceiver> * _receiver;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMFMessageDestination *destination;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *policies;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) <HMFMessageReceiver> *receiver;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 handler:(id /* block */)arg4;
+ (id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)destination;
- (unsigned long long)hash;
- (id)initWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3;
- (bool)invokeWithMessage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)name;
- (id)policies;
- (id)queue;
- (id)receiver;
- (id)shortDescription;

@end
