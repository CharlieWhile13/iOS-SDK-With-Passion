//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIColor;
@protocol SASTTemplateAction;

@interface SASTSideBySideButtonsItem : AceObject <SASTTemplateItem>
{
}

+ (id)sideBySideButtonsItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sideBySideButtonsItem;
@property(copy, nonatomic) NSString *secondaryButtonLabel;
@property(nonatomic) BOOL secondaryButtonEnabled;
@property(retain, nonatomic) id <SASTTemplateAction> secondaryButtonAction;
@property(retain, nonatomic) SAUIColor *primaryButtonTextColor;
@property(copy, nonatomic) NSString *primaryButtonLabel;
@property(nonatomic) BOOL primaryButtonEnabled;
@property(retain, nonatomic) id <SASTTemplateAction> primaryButtonAction;
@property(copy, nonatomic) NSString *buttonsViewStyle;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

