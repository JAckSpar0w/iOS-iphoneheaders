/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UINavigationController.h>
#import <FaceTime/PhoneTabViewController.h>

@protocol PhoneTabViewController;
@class UIViewController;

@interface PhoneNavigationController : UINavigationController <PhoneTabViewController> {

	UIViewController<PhoneTabViewController>* _rootController;

}
+(id)tabBarIconImage;
+(id)tabBarIconImageSelected;
+(id)tabBarIconName;
+(int)tabViewType;
+(BOOL)_isViewSizeFullScreen:(id)arg1 inWindow:(id)arg2 ;
+(id)defaultPNGName;
+(SCD_Struct_Ph0)badge;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(void)_updateRootViewController;
-(void)dealloc;
-(id)rootViewController;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)setViewControllers:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
@end
