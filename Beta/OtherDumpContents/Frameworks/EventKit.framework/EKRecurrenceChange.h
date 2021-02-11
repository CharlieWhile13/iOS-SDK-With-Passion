/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecurrenceChange : EKObjectChange <EKOwnerIDProviding> {
    EKObjectID * _ownerID;
}

@property (nonatomic, readonly) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchRecurrenceChangesInCalendar:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchRecurrenceChangesInSource:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchRecurrenceChangesInStore:(id)arg1 resultHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)arg1;
- (id)ownerID;

@end