//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface MCDeviceUploadCredentials : NSObject <NSSecureCoding>
{
    NSString *_dsid;
    NSString *_dsToken;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *dsToken; // @synthesize dsToken=_dsToken;
@property(readonly, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDsid:(id)arg1 dsToken:(id)arg2;

@end

