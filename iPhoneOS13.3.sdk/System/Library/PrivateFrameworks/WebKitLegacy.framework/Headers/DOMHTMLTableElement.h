//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLCollection, DOMHTMLTableCaptionElement, DOMHTMLTableSectionElement, NSString;

@interface DOMHTMLTableElement : DOMHTMLElement
{
}

- (void)deleteRow:(int)arg1;
- (id)insertRow:(int)arg1;
- (void)deleteCaption;
- (id)createCaption;
- (id)createTBody;
- (void)deleteTFoot;
- (id)createTFoot;
- (void)deleteTHead;
- (id)createTHead;
@property(copy) NSString *width;
@property(copy) NSString *summary;
@property(copy) NSString *rules;
@property(copy) NSString *frameBorders;
@property(copy) NSString *cellSpacing;
@property(copy) NSString *cellPadding;
@property(copy) NSString *border;
@property(copy) NSString *bgColor;
@property(copy) NSString *align;
@property(readonly) DOMHTMLCollection *tBodies;
@property(readonly) DOMHTMLCollection *rows;
@property(retain) DOMHTMLTableSectionElement *tFoot;
@property(retain) DOMHTMLTableSectionElement *tHead;
@property(retain) DOMHTMLTableCaptionElement *caption;
- (int)structuralComplexityContribution;

@end

