/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol RUIWebContainerViewDelegate;
@class UIWebView, NSString;

@interface RUIWebContainerView : UIView <UIWebViewDelegate> {

	BOOL _highlighted;
	BOOL _reallyHighlighted;
	UIWebView* _webView;
	id<RUIWebContainerViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIWebView * webView;                                        //@synthesize webView=_webView - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic,__weak) id<RUIWebContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)heightForWidth:(double)arg1 ;
-(void)setDelegate:(id<RUIWebContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<RUIWebContainerViewDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(UIWebView *)webView;
-(void)setUserStyleSheet:(id)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)_setHighlightedNow;
-(id)initWithContent:(id)arg1 baseURL:(id)arg2 ;
@end
