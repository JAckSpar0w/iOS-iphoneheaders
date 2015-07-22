/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, NSString;

@interface HourlyForecastCell : UICollectionViewCell {

	char _showingDay;
	char _hasBoldTime;
	int _conditionCode;
	UIImageView* _timeImageView;
	UIImageView* _detailImageView;
	UIImageView* _percentChanceImageView;
	UIImageView* _conditionImageView;
	NSString* _time;

}

@property (assign,nonatomic) char showingDay;                                   //@synthesize showingDay=_showingDay - In the implementation block
@property (assign,nonatomic) int conditionCode;                                 //@synthesize conditionCode=_conditionCode - In the implementation block
@property (nonatomic,retain) UIImageView * timeImageView;                       //@synthesize timeImageView=_timeImageView - In the implementation block
@property (nonatomic,retain) UIImageView * detailImageView;                     //@synthesize detailImageView=_detailImageView - In the implementation block
@property (nonatomic,retain) UIImageView * percentChanceImageView;              //@synthesize percentChanceImageView=_percentChanceImageView - In the implementation block
@property (nonatomic,retain) UIImageView * conditionImageView;                  //@synthesize conditionImageView=_conditionImageView - In the implementation block
@property (nonatomic,copy) NSString * time;                                     //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) char hasBoldTime;                                  //@synthesize hasBoldTime=_hasBoldTime - In the implementation block
+(void)resetHourlyForecastCellSize;
+(CGSize)size;
-(void)setPrecipitation:(float)arg1 ;
-(void)setDetail:(id)arg1 bold:(char)arg2 ;
-(void)clearCellContent;
-(char)showingDay;
-(void)setShowingDay:(char)arg1 ;
-(UIImageView *)timeImageView;
-(void)setTimeImageView:(UIImageView *)arg1 ;
-(UIImageView *)percentChanceImageView;
-(void)setPercentChanceImageView:(UIImageView *)arg1 ;
-(UIImageView *)conditionImageView;
-(void)setConditionImageView:(UIImageView *)arg1 ;
-(char)hasBoldTime;
-(void)setHasBoldTime:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)setTime:(NSString *)arg1 ;
-(NSString *)time;
-(UIImageView *)detailImageView;
-(void)setDetailImageView:(UIImageView *)arg1 ;
-(int)conditionCode;
-(void)setConditionCode:(int)arg1 ;
@end
