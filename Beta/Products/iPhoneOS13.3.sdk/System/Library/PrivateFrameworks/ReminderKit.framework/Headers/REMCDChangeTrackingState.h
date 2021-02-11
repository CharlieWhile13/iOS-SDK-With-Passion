/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMCDChangeTrackingState : NSManagedObject

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *clientName;
@property (nonatomic, retain) NSData *lastConsumedChangeTokenData;
@property (nonatomic, copy) NSDate *lastConsumedDate;

+ (id)fetchRequest;

@end