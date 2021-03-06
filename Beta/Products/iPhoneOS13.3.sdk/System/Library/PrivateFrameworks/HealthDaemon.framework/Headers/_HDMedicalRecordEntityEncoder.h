/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDMedicalRecordEntityEncoder : HDEntityEncoder

+ (bool)applyConceptIndexToObject:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (void)resetConceptIndexDueToError:(id)arg1 profile:(id)arg2;

- (bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3 error:(id*)arg4;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)createBareObject;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)orderedProperties;

@end
