/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface MapLeaf : GPBMessage <TransparencyVerifiable>

@property (nonatomic, retain) NSMutableArray *accountsArray;
@property (nonatomic, readonly) unsigned long long accountsArray_Count;

+ (id)descriptor;

- (id)recordForAccountId:(id)arg1 deviceIdVRFOutput:(id)arg2 appVersion:(unsigned long long)arg3 clientDataVRFoutput:(id)arg4;
- (bool)verifyWithError:(id*)arg1;

@end