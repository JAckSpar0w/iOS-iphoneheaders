/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Settings.siriUIBundle/Settings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Settings/ACSettingsBasicSetting.h>

@interface ACSettingsSliderSetting : ACSettingsBasicSetting

@property (assign,nonatomic,__weak) <ACSettingsSliderUpdateDelegate> * delegate; 
-(void)setValue:(double)arg1 isTracking:(bool)arg2 ;
-(void)addDelta:(double)arg1 ;
-(id)rightImage;
-(id)leftImage;
-(double)value;
@end
