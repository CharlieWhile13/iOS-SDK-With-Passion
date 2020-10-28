//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface NMSSHHostConfig : NSObject
{
    NSArray *_hostPatterns;
    NSString *_hostname;
    NSString *_user;
    NSNumber *_port;
    NSArray *_identityFiles;
}

@property(retain, nonatomic) NSArray *identityFiles; // @synthesize identityFiles=_identityFiles;
@property(retain, nonatomic) NSNumber *port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(retain, nonatomic) NSArray *hostPatterns; // @synthesize hostPatterns=_hostPatterns;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (id)mergedArray:(id)arg1 withArray:(id)arg2;
- (id)arrayByRemovingDuplicateElementsFromArray:(id)arg1;
- (id)init;

@end

