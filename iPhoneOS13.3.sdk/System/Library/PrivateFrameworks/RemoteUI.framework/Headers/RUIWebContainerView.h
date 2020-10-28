//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class UIWebView;
@protocol RUIWebContainerViewDelegate;

@interface RUIWebContainerView : UIView <UIWebViewDelegate>
{
    BOOL _highlighted;
    BOOL _reallyHighlighted;
    UIWebView *_webView;
    id <RUIWebContainerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <RUIWebContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
// - (void).cxx_destruct;
- (BOOL)uiWebView:(id)arg1 previewIsAllowedForPosition:(CGPoint)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (double)heightForWidth:(double)arg1;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
- (void)_setHighlightedNow;
- (void)layoutSubviews;
- (void)setUserStyleSheet:(id)arg1;
- (id)initWithContent:(id)arg1 baseURL:(id)arg2;

@end

