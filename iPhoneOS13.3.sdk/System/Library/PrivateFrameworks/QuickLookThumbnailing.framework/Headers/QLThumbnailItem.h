//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class FPSandboxingURLWrapper, NSData, NSString, NSURL;

@interface QLThumbnailItem : NSObject <NSSecureCoding>
{
    NSString *_fileExtensionToken;
    long long _fileExtensionHandle;
    NSURL *_url;
    FPSandboxingURLWrapper *_urlWrapperForExtension;
    NSData *_data;
    NSString *_overriddenContentType;
    NSString *_computedContentType;
    NSUInteger _downloadStatus;
    BOOL _needsAccessToExternalResources;
}

+ (BOOL)supportsSecureCoding;
@property BOOL needsAccessToExternalResources; // @synthesize needsAccessToExternalResources=_needsAccessToExternalResources;
@property NSUInteger downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(copy) NSString *computedContentType; // @synthesize computedContentType=_computedContentType;
@property(copy, nonatomic) NSString *overriddenContentType; // @synthesize overriddenContentType=_overriddenContentType;
@property(readonly) NSData *data; // @synthesize data=_data;
@property(readonly) FPSandboxingURLWrapper *urlWrapperForExtension; // @synthesize urlWrapperForExtension=_urlWrapperForExtension;
@property(readonly) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (BOOL)needsDownload;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)consumeFileExtension;
- (void)issueFileExtension;
- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

