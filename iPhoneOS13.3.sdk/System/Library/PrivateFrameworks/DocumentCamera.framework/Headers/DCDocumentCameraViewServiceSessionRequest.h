//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class DCSandboxExtension, NSString;

__attribute__((visibility("hidden")))
@interface DCDocumentCameraViewServiceSessionRequest : NSObject <NSSecureCoding>
{
    NSString *_appName;
    DCSandboxExtension *_cachesDirectorySandboxExtension;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) DCSandboxExtension *cachesDirectorySandboxExtension; // @synthesize cachesDirectorySandboxExtension=_cachesDirectorySandboxExtension;
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

