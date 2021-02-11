/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBLockScreenUnlockRequest : NSObject <NSCopying> {
    bool  _confirmedNotInPocket;
    SBApplication * _destinationApplication;
    bool  _forceAlertAuthenticationUI;
    int  _intent;
    NSString * _name;
    BSProcessHandle * _process;
    int  _source;
    bool  _wantsBiometricPresentation;
}

@property (nonatomic) bool confirmedNotInPocket;
@property (nonatomic, retain) SBApplication *destinationApplication;
@property (nonatomic) bool forceAlertAuthenticationUI;
@property (nonatomic) int intent;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) BSProcessHandle *process;
@property (nonatomic) int source;
@property (nonatomic) bool wantsBiometricPresentation;

- (void).cxx_destruct;
- (bool)confirmedNotInPocket;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationApplication;
- (bool)forceAlertAuthenticationUI;
- (unsigned long long)hash;
- (int)intent;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)process;
- (void)setConfirmedNotInPocket:(bool)arg1;
- (void)setDestinationApplication:(id)arg1;
- (void)setForceAlertAuthenticationUI:(bool)arg1;
- (void)setIntent:(int)arg1;
- (void)setName:(id)arg1;
- (void)setProcess:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setWantsBiometricPresentation:(bool)arg1;
- (int)source;
- (bool)wantsBiometricPresentation;

@end