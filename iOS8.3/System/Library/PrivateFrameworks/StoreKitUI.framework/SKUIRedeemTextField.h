/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:39:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITextField.h>

@class UIView;

@interface SKUIRedeemTextField : UITextField {

	UIView* _bottomBorderView;
	UIView* _topBorderView;
	UIView* _backdropView;
	char _backdropBackground;

}

@property (assign,nonatomic) char backdropBackground;              //@synthesize backdropBackground=_backdropBackground - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(void)setBackdropBackground:(char)arg1 ;
-(char)backdropBackground;
@end
