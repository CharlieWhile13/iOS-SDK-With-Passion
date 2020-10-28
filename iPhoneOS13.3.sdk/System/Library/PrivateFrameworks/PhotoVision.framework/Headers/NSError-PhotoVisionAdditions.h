//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (PhotoVisionAdditions)
+ (id)errorForPhotoVisionVisionKitErrorWithUserInfo:(id)arg1;
+ (id)errorForPhotoVisionVisionKitErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForPhotoVisionStorageErrorWithUserInfo:(id)arg1;
+ (id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForPhotoVisionInvalidParameterWithLocalizedDescription:(id)arg1;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 realValue:(double)arg2;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 integerValue:(long long)arg2;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 value:(id)arg2;
+ (id)errorForPhotoVisionInvalidNilParameterNamed:(id)arg1;
+ (id)errorForPhotoVisionUnexpectedCondition:(id)arg1;
+ (id)errorForPhotoVisionCancelledOperation;
+ (id)errorForPhotoVisionUnimplementedFunction;
+ (id)errorForPhotoVisionErrorCode:(long long)arg1 localizedDescription:(id)arg2 underlyingError:(id)arg3;
+ (id)errorForPhotoVisionErrorCode:(long long)arg1 localizedDescription:(id)arg2;
+ (id)errorForPhotoVisionErrorCode:(long long)arg1 userInfo:(id)arg2;
@end

