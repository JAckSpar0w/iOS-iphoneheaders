/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface TimeView : UIView {

	double _timeValue;
	UILabel* _timeLabel;
	float _maxTimeLabelWidth;

}

@property (assign,nonatomic) double time; 
@property (nonatomic,readonly) UILabel * timeLabel;              //@synthesize timeLabel=_timeLabel - In the implementation block
+(float)defaultHeight;
-(void)handleLocaleChange;
-(void)configureTimeLabel;
-(void)sizeLabelToFit;
-(void)configureBackground;
-(char)showSubseconds;
-(void)setTimeLabelFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setTime:(double)arg1 ;
-(double)time;
-(UILabel *)timeLabel;
@end
