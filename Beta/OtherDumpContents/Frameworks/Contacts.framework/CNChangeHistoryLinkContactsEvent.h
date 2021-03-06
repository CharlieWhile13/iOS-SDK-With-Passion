/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistoryLinkContactsEvent : CNChangeHistoryEvent {
    CNContact * _fromContact;
    CNContact * _toContact;
}

@property (nonatomic, readonly) CNContact *fromContact;
@property (nonatomic, readonly) CNContact *toContact;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fromContact;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFromContact:(id)arg1 toContact:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)toContact;

@end
