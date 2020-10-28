//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSURL;

@interface SAVCSPlayContent : SABaseClientBoundCommand
{
}

+ (id)playContentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playContent;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *utsId;
@property(nonatomic) BOOL playTrailer;
@property(copy, nonatomic) NSURL *lowresTrailerUri;
@property(copy, nonatomic) NSURL *hiresTrailerUri;
@property(copy, nonatomic) NSString *contentType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

