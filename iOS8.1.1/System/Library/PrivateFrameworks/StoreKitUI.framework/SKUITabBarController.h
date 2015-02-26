/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITabBarController.h>
#import <StoreKitUI/SKUIMoreNavigationControllerDelegate.h>

@class SKUIFloatingOverlayView, UIViewController, SKUITabBarBackgroundView, NSString;

@interface SKUITabBarController : UITabBarController <SKUIMoreNavigationControllerDelegate> {

	SKUIFloatingOverlayView* _floatingOverlayView;
	UIViewController* _floatingOverlayViewController;
	SKUITabBarBackgroundView* _tabBarBackgroundView;

}

@property (nonatomic,readonly) UIViewController * floatingOverlayViewController;              //@synthesize floatingOverlayViewController=_floatingOverlayViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_moreNavigationControllerClass;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_backdropGroupName;
-(id)moreNavigationController;
-(void)setTransientViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)moreNavigationController:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)_layoutFloatingOverlayView;
-(id)skui_activeNavigationController;
-(void)setFloatingOverlayViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTabBarBackdropStyle:(long long)arg1 ;
-(void)cancelTransientViewController:(id)arg1 ;
-(UIViewController *)floatingOverlayViewController;
@end
