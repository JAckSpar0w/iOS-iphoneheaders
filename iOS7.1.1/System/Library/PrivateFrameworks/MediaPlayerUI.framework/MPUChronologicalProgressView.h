/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>
#import <MediaPlayer/MPDetailScrubControllerDelegate.h>

@protocol MPDetailedScrubbing_MPUSliderScrubForwarding, MPUChronologicalProgressViewDelegate;
@class MPDetailScrubController, UISlider, UILabel, NSString;

@interface MPUChronologicalProgressView : UIView <MPDetailScrubControllerDelegate> {

	MPDetailScrubController* _scrubController;
	UISlider<MPDetailedScrubbing><_MPUSliderScrubForwarding>* _slider;
	UILabel* _currentTimeLabel;
	UILabel* _remainingTimeLabel;
	NSString* _lastCurrentTimeString;
	NSString* _lastRemainingTimeString;
	double _lastDisplayedDuration;
	bool _alwaysLive;
	bool _showTimeLabels;
	bool _scrubbingEnabled;
	<MPUChronologicalProgressViewDelegate>* _delegate;
	long long _style;
	double _totalDuration;
	double _currentTime;

}

@property (assign,getter=isAlwaysLive,nonatomic) bool alwaysLive;                                   //@synthesize alwaysLive=_alwaysLive - In the implementation block
@property (assign,nonatomic,__weak) <MPUChronologicalProgressViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long style;                                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double totalDuration;                                                  //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) double currentTime;                                                    //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) bool showTimeLabels;                                                   //@synthesize showTimeLabels=_showTimeLabels - In the implementation block
@property (assign,nonatomic) bool scrubbingEnabled;                                                 //@synthesize scrubbingEnabled=_scrubbingEnabled - In the implementation block
@property (nonatomic,readonly) CGRect trackRect; 
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(bool)isAlwaysLive;
-(void)detailScrubControllerDidBeginScrubbing:(id)arg1 ;
-(void)detailScrubControllerDidEndScrubbing:(id)arg1 ;
-(void)detailScrubController:(id)arg1 didChangeValue:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(CGRect)trackRect;
-(void).cxx_destruct;
-(void)setAlwaysLive:(bool)arg1 ;
-(id)_trackImage;
-(id)_thumbImage;
-(id)_createTimeLabelWithStyle:(long long)arg1 ;
-(void)_updateTimeLabels;
-(void)_internalSetCurrentTime:(double)arg1 ;
-(float)_sliderNormalizedValueForTime:(double)arg1 ;
-(id)_timeLabelFont;
-(id)_stringForTime:(double)arg1 isTimeRemaining:(bool)arg2 ;
-(id)_styledImageName:(id)arg1 ;
-(bool)showTimeLabels;
-(void)setShowTimeLabels:(bool)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(double)totalDuration;
-(void)setScrubbingEnabled:(bool)arg1 ;
-(bool)scrubbingEnabled;
@end
