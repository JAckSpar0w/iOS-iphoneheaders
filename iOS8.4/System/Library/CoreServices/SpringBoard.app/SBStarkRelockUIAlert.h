/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBAlertAdapter.h>

@interface SBStarkRelockUIAlert : SBAlertAdapter {

	BOOL _animatingDismiss;

}
-(BOOL)shouldPendAlertItemsWhileActive;
-(void)_animateDismiss;
-(void)_dismissAndLock;
-(id)_animationFactory;
-(BOOL)handleLockButtonPressed;
-(void)dealloc;
-(id)init;
-(void)deactivate;
-(void)activate;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonHeld;
-(BOOL)hasTranslucentBackground;
-(void)handleAutoLock;
-(id)initWithViewController:(id)arg1 ;
@end
