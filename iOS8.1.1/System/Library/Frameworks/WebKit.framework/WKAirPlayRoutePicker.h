/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class WKContentView, NSString;

@interface WKAirPlayRoutePicker : UIView <UIPopoverControllerDelegate> {

	RetainPtr<MPAVRoutingController>* _routingController;
	RetainPtr<MPAudioVideoRoutingPopoverController>* _popoverController;
	RetainPtr<MPAudioVideoRoutingActionSheet>* _actionSheet;
	WKContentView* _view;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithView:(id)arg1 ;
-(void)show:(BOOL)arg1 fromRect:(CGRect)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)_windowWillRotate:(id)arg1 ;
-(void)_dismissAirPlayRoutePickerIPad;
-(void)_windowDidRotate:(id)arg1 ;
-(void)_presentAirPlayPopoverAnimated:(BOOL)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPad:(unsigned long long)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPhone:(unsigned long long)arg1 ;
@end
