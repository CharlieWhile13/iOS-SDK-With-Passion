/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPBeaconingKey : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSData * _key;
}

@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic, copy) NSData *key;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 key:(id)arg2;
- (id)key;
- (void)setDateInterval:(id)arg1;
- (void)setKey:(id)arg1;

@end