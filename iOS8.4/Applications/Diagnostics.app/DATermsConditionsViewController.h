/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol DATermsConditionsViewControllerDelegate;
@class UITextView;

@interface DATermsConditionsViewController : UIViewController {

	char _multipleDevices;
	id<DATermsConditionsViewControllerDelegate> _delegate;
	UITextView* _termsText;

}

@property (assign,nonatomic,__weak) id<DATermsConditionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char multipleDevices;                                                     //@synthesize multipleDevices=_multipleDevices - In the implementation block
@property (nonatomic,retain) UITextView * termsText;                                                   //@synthesize termsText=_termsText - In the implementation block
-(void)disagree:(id)arg1 ;
-(void)agree:(id)arg1 ;
-(char)multipleDevices;
-(id)initWithMultipleDevices:(char)arg1 delegate:(id)arg2 ;
-(void)setMultipleDevices:(char)arg1 ;
-(void)setDelegate:(id<DATermsConditionsViewControllerDelegate>)arg1 ;
-(id<DATermsConditionsViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)setTermsText:(UITextView *)arg1 ;
-(UITextView *)termsText;
@end
