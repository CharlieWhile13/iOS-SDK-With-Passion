/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRepairKit.framework/CoreRepairKit
 */

@interface CRFDRSeal : NSObject <CRFDR> {
    NSString * FDRCAURL;
    NSString * FDRDSURL;
    NSString * FDRSealingURL;
    NSData * apTicketData;
    struct __CFURL { } * dataDirectoryURL;
    <setupModuleChallengeCallBack> * delegate;
    bool  doSeal;
    bool  enableProxy;
    struct __CFDictionary { } * metadataDict;
    NSString * serialNumber;
    NSString * trustObjectURL;
    NSString * updateClassStr;
    NSString * updatePropertiesStr;
}

@property (nonatomic, retain) NSData *apTicketData;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <setupModuleChallengeCallBack> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)currentProcessHasEntitlement:(id)arg1;
+ (bool)isFDRDataClassSupported:(id)arg1;

- (void).cxx_destruct;
- (struct NSMutableDictionary { Class x1; }*)_baseFDROptionsWithDataStore:(id)arg1;
- (id)apTicketData;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (int)parseAMFDRUnderlyingError:(id)arg1;
- (int)registerChangeForComponent:(id)arg1 fdrError:(id*)arg2;
- (int)seal:(id*)arg1;
- (int)sealWithhDataClass:(id)arg1 fdrError:(id*)arg2 registerOnly:(bool)arg3;
- (void)setApTicketData:(id)arg1;
- (void)setDelegate:(id)arg1;

@end