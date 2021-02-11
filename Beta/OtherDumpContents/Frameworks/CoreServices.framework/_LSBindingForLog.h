/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSBindingForLog : NSObject {
    struct LSBinding { 
        unsigned int bundle; 
        struct LSBundleData {} *bundleData; 
        unsigned int claim; 
        struct { /* ? */ } *claimData; 
        id userInfo; 
        NSString *reason; 
    }  _binding;
    _LSDatabase * _db;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initWithState:(const struct State { struct LSContext {} *x1; struct BindingEvaluator { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; id x_2_1_5; id x_2_1_6; struct LSVersionNumber { unsigned char x_7_2_1[32]; } x_2_1_7; bool x_2_1_8; unsigned long long x_2_1_9; unsigned int x_2_1_10; unsigned int x_2_1_11; struct vector<LSBundleClass, std::__1::allocator<LSBundleClass> > { unsigned int *x_12_2_1; unsigned int *x_12_2_2; struct __compressed_pair<LSBundleClass *, std::__1::allocator<LSBundleClass> > { unsigned int *x_3_3_1; } x_12_2_3; } x_2_1_12; id /* block */ x_2_1_13; id x_2_1_14; id /* block */ x_2_1_15; id x_2_1_16; } x2; struct vector<LaunchServices::BindingEvaluation::ExtendedBinding, std::__1::allocator<LaunchServices::BindingEvaluation::ExtendedBinding> > { struct ExtendedBinding {} *x_3_1_1; struct ExtendedBinding {} *x_3_1_2; struct __compressed_pair<LaunchServices::BindingEvaluation::ExtendedBinding *, std::__1::allocator<LaunchServices::BindingEvaluation::ExtendedBinding> > { struct ExtendedBinding {} *x_3_2_1; } x_3_1_3; } x3; bool x4; }*)arg1 binding:(const struct ExtendedBinding { unsigned int x1; struct LSBundleData {} *x2; unsigned int x3; struct { /* ? */ } *x4; id x5; id x6; bool x7; bool x8; id x9; id x10; BOOL x11; id x12; struct optional<bool> { union { BOOL x_1_2_1; bool x_1_2_2; } x_13_1_1; bool x_13_1_2; } x13; struct optional<bool> { union { BOOL x_1_2_1; bool x_1_2_2; } x_14_1_1; bool x_14_1_2; } x14; }*)arg2;
- (id)redactedDescription;

@end