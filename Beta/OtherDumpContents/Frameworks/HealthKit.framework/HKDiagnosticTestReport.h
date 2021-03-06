/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDiagnosticTestReport : HKMedicalRecord <HDCoding, HKConceptIndexable, NSCopying, NSSecureCoding> {
    HKConcept * _diagnosticTest;
    NSArray * _diagnosticTestCodings;
    HKMedicalDate * _effectiveEndDate;
    HKMedicalDate * _effectiveStartDate;
    HKMedicalDate * _issueDate;
    NSString * _panelName;
    NSArray * _results;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKConcept *diagnosticTest;
@property (readonly, copy) NSArray *diagnosticTestCodings;
@property (readonly, copy) HKDiagnosticTestReportType *diagnosticTestReportType;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HKMedicalDate *issueDate;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly, copy) NSString *panelName;
@property (readonly, copy) NSArray *results;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newDiagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 diagnosticTestCodings:(id)arg11 panelName:(id)arg12 results:(id)arg13 effectiveStartDate:(id)arg14 statusCoding:(id)arg15 effectiveEndDate:(id)arg16 issueDate:(id)arg17 config:(id /* block */)arg18;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)diagnosticTestCodingsPreferredSystems;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 diagnosticTestCodings:(id)arg10 panelName:(id)arg11 results:(id)arg12 effectiveStartDate:(id)arg13 statusCoding:(id)arg14 effectiveEndDate:(id)arg15 issueDate:(id)arg16;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 diagnosticTestCodings:(id)arg11 panelName:(id)arg12 results:(id)arg13 effectiveStartDate:(id)arg14 statusCoding:(id)arg15 effectiveEndDate:(id)arg16 issueDate:(id)arg17;
+ (id)indexableConceptKeyPaths;
+ (id)statusCodingPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setDiagnosticTest:(id)arg1;
- (void)_setDiagnosticTestCodings:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setIssueDate:(id)arg1;
- (void)_setPanelName:(id)arg1;
- (void)_setResults:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticTest;
- (id)diagnosticTestCodings;
- (id)diagnosticTestCodingsCollection;
- (id)diagnosticTestCodingsContext;
- (id)diagnosticTestCodingsTasks;
- (id)diagnosticTestReportType;
- (id)effectiveEndDate;
- (id)effectiveStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)issueDate;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)panelName;
- (id)results;
- (id)status;
- (id)statusCoding;
- (id)statusCodingCollection;
- (id)statusCodingContext;
- (id)statusCodingTasks;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)codings;
- (long long)recordCategoryType;
- (id)title;
- (id)titleDisplayStringForDetailViewController;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
