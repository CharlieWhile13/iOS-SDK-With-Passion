//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, NSURL;

@interface SAVCSContentShelfUpdateInfo : AceObject <SAAceSerializable>
{
}

+ (id)contentShelfUpdateInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)contentShelfUpdateInfo;
@property(copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *targetViewId;
@property(copy, nonatomic) NSString *targetShelfViewId;
@property(nonatomic) long long pageNumber;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

