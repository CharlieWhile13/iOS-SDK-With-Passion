/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAddAccessoryRequest : NSObject <NSSecureCoding> {
    HMAccessoryCategory * _accessoryCategory;
    NSString * _accessoryName;
    HMHome * _home;
    NSUUID * _requestIdentifier;
    bool  _requiresOwnershipToken;
    bool  _requiresSetupPayloadURL;
}

@property (nonatomic, readonly) HMAccessoryCategory *accessoryCategory;
@property (nonatomic, readonly) NSString *accessoryName;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, readonly) NSUUID *requestIdentifier;
@property (nonatomic, readonly) bool requiresOwnershipToken;
@property (nonatomic, readonly) bool requiresSetupPayloadURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryCategory;
- (id)accessoryName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifer:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)payloadWithOwnershipToken:(id)arg1;
- (id)payloadWithURL:(id)arg1 ownershipToken:(id)arg2;
- (id)requestIdentifier;
- (bool)requiresOwnershipToken;
- (bool)requiresSetupPayloadURL;
- (void)setHome:(id)arg1;

@end
