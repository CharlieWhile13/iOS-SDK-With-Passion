//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UINotificationFeedbackGenerator, UIView, _UIHighlightView;
@protocol _UITextContent, _UITextItemInteracting, _UITextItemInteractionHandler;

__attribute__((visibility("hidden")))
@interface _UITextInteractableItem : NSObject
{
    UINotificationFeedbackGenerator *_feedbackGenerator;
    _UIHighlightView *_highlightView;
    id <_UITextItemInteractionHandler> _handler;
    UIView<_UITextItemInteracting> *_textItemInteractingView;
    id <_UITextContent> _textContent;
    NSRange _range;
    CGPoint _location;
}

+ (void)_removeHighlight;
+ (id)_sharedHighlightView;
+ (id)interactableLink:(id)arg1 range:(NSRange)arg2 inTextItemInteractingView:(id)arg3 atLocation:(CGPoint)arg4;
+ (id)interactableAttachment:(id)arg1 range:(NSRange)arg2 inTextItemInteractingView:(id)arg3 atLocation:(CGPoint)arg4;
@property(nonatomic) __weak id <_UITextContent> textContent; // @synthesize textContent=_textContent;
@property(nonatomic) __weak UIView<_UITextItemInteracting> *textItemInteractingView; // @synthesize textItemInteractingView=_textItemInteractingView;
@property(retain, nonatomic) id <_UITextItemInteractionHandler> handler; // @synthesize handler=_handler;
@property(nonatomic) CGPoint location; // @synthesize location=_location;
@property(nonatomic) NSRange range; // @synthesize range=_range;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CGRect bounds;
- (void)unhighlight;
- (void)highlight;
- (BOOL)_allowHighlight;
- (BOOL)isEqual:(id)arg1;
- (void)_warnForInvalidAction;
- (id)contextMenuConfiguration;
@property(readonly, nonatomic) NSUInteger _preferredContextMenuLayout;
- (BOOL)_allowInteraction:(long long)arg1;
- (void)invokeDefaultAction;
- (BOOL)canInvokeDefaultAction;
- (BOOL)isAttachment;
- (BOOL)isLink;
- (void)dealloc;

@end

