/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarIndicatorItemView.h>

@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView {

	BOOL _hideForAction;
	BOOL _registeredForNotifications;
	BOOL _inactive;

}
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(void)_triggerAction:(id)arg1 ;
-(double)_visibleAlpha;
@end
