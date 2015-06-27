/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UILegibilitySettings, UIImage, UIImageView, CAFilter;

@interface _UILegibilityView : UIView {

	char _hidesImage;
	_UILegibilitySettings* _settings;
	UIImage* _image;
	UIImage* _shadowImage;
	float _strength;
	UIImageView* _imageView;
	UIImageView* _shadowImageView;
	CAFilter* _imageColorFilter;
	CAFilter* _shadowImageColorFilter;
	int _options;

}

@property (nonatomic,readonly) int style; 
@property (nonatomic,retain) _UILegibilitySettings * settings;               //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                          //@synthesize shadowImage=_shadowImage - In the implementation block
@property (assign,nonatomic) float strength;                                 //@synthesize strength=_strength - In the implementation block
@property (assign,nonatomic) char hidesImage;                                //@synthesize hidesImage=_hidesImage - In the implementation block
@property (nonatomic,readonly) char usesColorFilters; 
@property (nonatomic,retain) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * shadowImageView;                  //@synthesize shadowImageView=_shadowImageView - In the implementation block
@property (nonatomic,retain) CAFilter * imageColorFilter;                    //@synthesize imageColorFilter=_imageColorFilter - In the implementation block
@property (nonatomic,retain) CAFilter * shadowImageColorFilter;              //@synthesize shadowImageColorFilter=_shadowImageColorFilter - In the implementation block
@property (assign,nonatomic) int options;                                    //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_UILegibilitySettings *)settings;
-(UIImage *)image;
-(int)style;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(id)initWithSettings:(id)arg1 strength:(float)arg2 image:(id)arg3 shadowImage:(id)arg4 ;
-(void)setImage:(id)arg1 shadowImage:(id)arg2 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setSettings:(_UILegibilitySettings *)arg1 ;
-(void)setOptions:(int)arg1 ;
-(int)options;
-(id)initWithSettings:(id)arg1 strength:(float)arg2 image:(id)arg3 ;
-(id)initWithStyle:(int)arg1 image:(id)arg2 ;
-(float)strength;
-(void)setStrength:(float)arg1 ;
-(id)initWithStyle:(int)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(id)initWithSettings:(id)arg1 strength:(float)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(int)arg5 ;
-(void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(UIImageView *)shadowImageView;
-(void)setShadowImageView:(UIImageView *)arg1 ;
-(char)usesColorFilters;
-(CAFilter *)imageColorFilter;
-(void)setImageColorFilter:(CAFilter *)arg1 ;
-(id)drawingColor;
-(CAFilter *)shadowImageColorFilter;
-(void)setShadowImageColorFilter:(CAFilter *)arg1 ;
-(void)updateImage;
-(char)usesSecondaryColor;
-(void)setHidesImage:(char)arg1 ;
-(void)setStyle:(int)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(char)hidesImage;
@end
