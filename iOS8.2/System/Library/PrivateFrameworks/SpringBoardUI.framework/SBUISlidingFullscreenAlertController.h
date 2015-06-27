/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIFullscreenAlertController.h>

@class UIView;

@interface SBUISlidingFullscreenAlertController : SBUIFullscreenAlertController {

	UIView* _topBar;
	UIView* _bottomBar;
	char _animatingIn;
	char _animatingOut;

}

@property (nonatomic,readonly) UIView * topBar;                 //@synthesize topBar=_topBar - In the implementation block
@property (nonatomic,readonly) UIView * bottomBar;              //@synthesize bottomBar=_bottomBar - In the implementation block
-(void)dealloc;
-(id)backgroundView;
-(void)viewDidLoad;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(UIView *)topBar;
-(UIView *)bottomBar;
-(char)isSlidingViewController;
-(void)finishedAnimatingIn;
-(void)viewWillAnimateIn;
-(void)viewWillAnimateOut;
-(void)animateViewIn;
-(void)animateViewOut;
-(char)viewIsReadyToBeRemoved;
-(char)hasTranslucentBackground;
-(id)newTopBar;
-(id)newBottomBar;
-(char)isShowingWallpaper;
-(char)shouldShowBottomBar;
-(void)_performAnimateDisplayIn;
-(float)_slideOutAnimationDelay;
-(float)_slideOutAnimationDuration;
-(void)_viewAnimatedOut;
-(char)_animatingToHomescreenWallpaper;
-(float)_animationDelayForOthersActivation;
-(void)updateSpringBoardInPreparationForTransparentDismiss;
@end
