/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UIImageView, UIView, SAGKImageLinkedAnswer;

@interface SiriGKImageLinkView : SiriGKView {

	UIImageView* _imageView;
	UIImageView* _playIconImageView;
	UIView* _backgroundTintView;
	UIView* _placeholderView;
	bool _isVideoResult;
	SAGKImageLinkedAnswer* _imageLinkedAnswer;

}
-(id)_applyBlurredPlayIconToImage:(id)arg1 ;
-(id)initWithImageLinkedAnswer:(id)arg1 safariBackURL:(id)arg2 isVideoResult:(bool)arg3 usingPersistentStore:(id)arg4 ;
-(void)_configureWithImage:(id)arg1 asVideoResult:(bool)arg2 ;
-(bool)isFullWidth;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void).cxx_destruct;
-(bool)isSelectable;
-(id)imageResource;
@end
