//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/BCSParsedDataPrivate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSInvalidParsedData : NSObject <BCSParsedDataPrivate>
{
    long long _invalidDataType;
    NSString *_invalidContents;
    NSString *_invalidURLScheme;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *invalidURLScheme; // @synthesize invalidURLScheme=_invalidURLScheme;
@property(copy, nonatomic) NSString *invalidContents; // @synthesize invalidContents=_invalidContents;
@property(readonly, nonatomic) long long invalidDataType; // @synthesize invalidDataType=_invalidDataType;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *extraPreviewText;
@property(readonly, nonatomic) long long type;
- (id)initWithInvalidDataType:(long long)arg1 invalidContents:(id)arg2;

@end

