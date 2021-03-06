/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@interface SiriDismissalOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _animated;
    unsigned long long  _deactivationOptions;
    long long  _reason;
}

@property (nonatomic, readonly) bool animated;
@property (nonatomic, readonly) unsigned long long deactivationOptions;
@property (nonatomic, readonly) long long reason;

+ (bool)supportsSecureCoding;

- (bool)animated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deactivationOptions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeactivationOptions:(unsigned long long)arg1;
- (id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(bool)arg2;
- (id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(bool)arg2 requestCancellationReason:(long long)arg3;
- (long long)reason;

@end
