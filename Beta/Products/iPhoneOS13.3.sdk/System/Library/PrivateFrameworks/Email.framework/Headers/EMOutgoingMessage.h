/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMOutgoingMessage : EMObject {
    long long  _action;
    NSData * _messageData;
    EMMessageObjectID * _originalMessageID;
    bool  _shouldEncrypt;
    bool  _shouldSign;
}

@property (nonatomic) long long action;
@property (nonatomic, readonly, copy) NSData *messageData;
@property (nonatomic, retain) EMMessageObjectID *originalMessageID;
@property (nonatomic) bool shouldEncrypt;
@property (nonatomic) bool shouldSign;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageData:(id)arg1;
- (id)initWithMessageData:(id)arg1 action:(long long)arg2 originalMessageID:(id)arg3 shouldSign:(bool)arg4 shouldEncrypt:(bool)arg5;
- (id)messageData;
- (id)originalMessageID;
- (void)setAction:(long long)arg1;
- (void)setOriginalMessageID:(id)arg1;
- (void)setShouldEncrypt:(bool)arg1;
- (void)setShouldSign:(bool)arg1;
- (bool)shouldEncrypt;
- (bool)shouldSign;

@end
