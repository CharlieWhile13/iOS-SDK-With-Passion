/* Generated by RuntimeBrowser.
 */

@protocol CRKClassroomLockScreenMonitoring <NSObject>

@required

+ (id)sharedMonitor;

- (void)dismissClassroomLockScreen;
- (void)displayClassroomLockScreenWithLabel:(NSString *)arg1 passcode:(NSString *)arg2;
- (bool)isClassroomLockScreenVisible;

@end