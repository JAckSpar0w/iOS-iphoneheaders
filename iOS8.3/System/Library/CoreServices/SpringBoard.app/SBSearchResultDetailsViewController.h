/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:33 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIColor;


@protocol SBSearchResultDetailsViewController <NSObject>
@property (assign) id<SBSearchResultDetailsViewControllerDelegate> actionDelegate; 
@property (readonly) char wantsInset; 
@property (retain) UIColor * contentBackgroundColor; 
@optional
-(void)setContentBackgroundColor:(id)arg1;
-(UIColor *)contentBackgroundColor;

@required
+(id)viewControllerForResult:(id)arg1 inSection:(id)arg2;
-(char)wantsInset;
-(void)setActionDelegate:(id)arg1;
-(id<SBSearchResultDetailsViewControllerDelegate>)actionDelegate;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1;

@end
