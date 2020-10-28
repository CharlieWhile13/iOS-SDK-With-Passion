//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDChangeDetails-Protocol.h>

@class NSDate, NSString, TSKAnnotationAuthor, TSWPChange;

__attribute__((visibility("hidden")))
@interface TSWPChangeDetails : NSObject <TSDChangeDetails>
{
    TSWPChange *_change;
    NSDate *_dateForLastChangeStringUpdate;
    NSString *_changeTrackingContentString;
    NSString *_changeTrackingTitleString;
    NSString *_formattedString;
}

@property(retain, nonatomic) NSString *formattedString; // @synthesize formattedString=_formattedString;
@property(retain, nonatomic) NSString *changeTrackingTitleString; // @synthesize changeTrackingTitleString=_changeTrackingTitleString;
@property(retain, nonatomic) NSString *changeTrackingContentString; // @synthesize changeTrackingContentString=_changeTrackingContentString;
@property(retain, nonatomic) NSDate *dateForLastChangeStringUpdate; // @synthesize dateForLastChangeStringUpdate=_dateForLastChangeStringUpdate;
@property(retain, nonatomic) TSWPChange *change; // @synthesize change=_change;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *annotationUUID;
- (BOOL)isInDocument;
- (void)commentWillBeAddedToDocumentRoot;
@property(readonly, copy) NSString *description;
- (void)p_updateChangeStrings;
- (NSRange)p_rangeInStorage;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSString *changeTrackingContentFormatString;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
- (BOOL)isFloatingComment;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEquivalentToObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithChange:(id)arg1;

@end

