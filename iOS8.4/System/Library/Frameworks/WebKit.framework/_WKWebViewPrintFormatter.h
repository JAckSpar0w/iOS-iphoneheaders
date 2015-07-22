/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIViewPrintFormatter.h>

@class _WKFrameHandle, WKWebView;

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter {

	double _totalScaleFactor;
	PrintInfo _printInfo;
	_WKFrameHandle* _frameToPrint;

}

@property (nonatomic,retain) _WKFrameHandle * frameToPrint;              //@synthesize frameToPrint=_frameToPrint - In the implementation block
@property (nonatomic,readonly) WKWebView * webView; 
-(void)dealloc;
-(WKWebView *)webView;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(_WKFrameHandle *)frameToPrint;
-(void)setFrameToPrint:(_WKFrameHandle *)arg1 ;
@end
